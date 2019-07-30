#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    vector<pair<int,int> >v;
    while(cin>>n>>m)
    {
        v.clear();
        for(int i=0; i<n; i++)
        {

            cin>>x;
            if(m<x) v.push_back(make_pair(i+1,x-m));
        }
        int x=n,i=0;
        while(!v.empty())
        {
            if(v[i].second>0)
            {
                v.push_back(make_pair(v[i].first,v[i].second-m));
            }
            x=v[i].first;
            v.erase(v.begin()+i);
            i=i-1;
            i++;
            if(i==v.size())
                i=0;
        }
        cout<<x<<endl;

    }
    return 0;
}
