#include<bits/stdc++.h>
using namespace std;
#define MAX 5000005
typedef long long ll;
ll ans[MAX+3],m[MAX+3];
bool a[MAX+3];
void p()
{
    memset(ans,false,sizeof(ans));
    memset(a,true,sizeof(a));
    memset(m,false,sizeof(m));
    a[0]=a[1]=false;
    for(ll i=2; i<=(MAX); i++)
    {
        if(a[i])
        {
            m[i]+=i;
            for(ll j=2*i; j<=MAX; j+=i)
            {
                a[j]=false;
                m[j]+=i;
            }
        }
    }
    for(ll i=2; i<=(MAX); i++)
        ans[i]=ans[i-1]+(a[m[i]]);
    //  for(ll i=2; i<=21; i++)
    //   cout<<ans[i]<<endl;
}
int main(int argc, char const *argv[])
{
    p();
    ll a,b;
    while(1)
    {
        cin>>a;
        if(!a) break;
        cin>>b;
        cout<<ans[b]-ans[a-1]<<endl;
    }
    return 0;
}
/*


2 5
10 21
100 120
0
*/
