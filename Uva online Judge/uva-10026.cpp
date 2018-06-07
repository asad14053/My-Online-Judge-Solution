#include<bits/stdc++.h>
using namespace std;
struct job
{
    int t,f,id;

};
bool cmp(job i,job j)
{
    return i.f*j.t>j.f*i.t;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<job>j;
        job e;

        for(int i=0; i<n; i++)
        {
            cin>>e.t>>e.f;
            e.id=i+1;
            j.push_back(e);
        }
        sort(j.begin(),j.end(),cmp);
        cout<<j[0].id;
        for(int i=1; i<n; i++)
            cout<<" "<<j[i].id;
        cout<<endl;
        if(t)
            cout<<endl;
    }
    return 0;
}
