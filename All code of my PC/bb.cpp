#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct n
{
    int p,q;
}s[3];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll b,w,x,y,z,pos=-1;
        cin>>s[0].p>>s[1].p>>s[0].q>>s[1].q>>z;
        ll v=min(s[0].q,s[1].q);
       // cout<<"=="<<v<<endl;
        if(s[0].q<s[1].q)
            pos=1;
            else pos=0;
           // cout<<pos<<endl;
        ll cost=s[0].p*s[0].q+s[1].p*s[1].q;
        ll cost1=v*s[0].p+v*s[1].p+z*s[pos].p;
        cout<<min(cost,cost1)<<endl;

    }
    return 0;
}
