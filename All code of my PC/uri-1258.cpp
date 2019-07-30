#include<bits/stdc++.h>
using namespace std;
struct pa
{
    string u,v,x;

};
bool cmp(const pa &m,const pa &n)
{
    if(m.u!=n.u)
        return m.u<n.u;
    if(m.v!=n.v)
        return m.v>n.v;
    return m.x<n.x;
}
int main()
{
    freopen("io.txt","r",stdin);
    freopen("oo.txt","w",stdout);
    int t;
    string s,z,p;
    vector<pa>ve;
    int q=0;
    while(cin>>t)
    {
        ve.clear();if(!t) break;
        if(q)
            cout<<endl;

        getchar();
        pa zz;
        for(int i=0; i<t; i++)
        {
            getline(cin,s);
            cin>>z>>p;
            zz.u=z;
            zz.v=p;
            zz.x=s;
            ve.push_back(zz);

            //cout<<ve[i].u<<" "<<ve[i].v<<" "<<ve[i].x<<endl;
            getchar();
        }
        sort(ve.begin(),ve.end(),cmp);
        for(int i=0; i<ve.size(); i++)
            cout<<ve[i].u<<" "<<ve[i].v<<" "<<ve[i].x<<endl;
        q++;
    }
    return 0;
}
