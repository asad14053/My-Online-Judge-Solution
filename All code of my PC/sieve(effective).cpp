#include<bits/stdc++.h>
using namespace std;
#define m 100001
typedef long long ll;
ll a[m+7],l=0;
bool p[m+7];
int main()
{


    memset(p,true,sizeof(p));
    p[0]=p[1]=false;
    for(ll i=2; i<m; i++)
    {
        if(p[i])
        {
            a[l++]=i;
            for(ll j=i*i; j<m; j+=i)
                p[j]=false;
        }
    }
    for(int i=0;i<=100;i++)
        cout<<a[i]<<endl;
    return 0;
}
