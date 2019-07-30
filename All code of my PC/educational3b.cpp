#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
bool z[1000000];
ll ncr(ll n,ll m)
{
    ll res=1,i;
    if(n/2<m)
        m=n-m;
    for(i=0; i<m; i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}

int main()
{
    ll n,r,x;
//while(1)
    {cin>>n>>r;
    if(n<2) return 0;
        memset(z,false,sizeof(z));
       // map<int,int>mp;
    //    mp.clear();
        ll m=0;
         for(ll i=0;i<n;i++)
         {
             cin>>x;
             if(!z[x])
             {m++;
             z[x]=true;
             }

         }
       //  cout<<n-m<<endl;
         cout<<ncr(n,2)-(n-m)<<endl;

    }
    return 0;
}

/*



4 3
2 1 3 1
7 4
4 2 3 1 2 4 3



*/
