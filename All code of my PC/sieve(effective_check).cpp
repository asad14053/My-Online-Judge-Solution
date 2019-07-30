#include<bits/stdc++.h>
using namespace std;
#define m 100001
typedef long long ll;
ll a[m+7],l=0;
bool p[m+7];
int main()
{
    p[2]=false;
    for(ll i=3; i<=sqrt(m); i+=2)
    {
        if(p[i]==false)
        {
            for(ll j=i*i; j<m; j+=2*i)
                p[j]=true;
        }
    }
    cout<<2<<endl;
    for(int i=3;i<=100;i+=2)
        if(p[i]==false)
        cout<<i<<endl;
    return 0;
}
