#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,x,p,q;
        cin>>m;
        vector<ll>v;
        for(int i=0; i<=m; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        cin>>p>>q;
        ll s=0;
        for(int i=1; i<=q; i++)
        {
            s+=i*p;
            if(s>=q)
            {
                ll an=0;

                for(int j=0; j<v.size(); ++j)
                    an+=(ll)v[j]*(ll)pow(i,j);
                cout<<an<<endl;
                break;
            }
        }
    }
    return 0;
}
