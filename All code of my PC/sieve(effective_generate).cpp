#include<bits/stdc++.h>
using namespace std;
#define m 1000001
typedef long long ll;
ll a[m+7],l=0;
bool p[(m>>1)+2];
int main() /// for memory efficiency, we set true/false on i/2 index using >>
{
    p[2]=false;
    for(ll i=3; i<=sqrt(m); i+=2)
    {
        if(p[i>>1]==false)
        {
            for(ll j=i*i; j<m; j+=2*i)
                p[j>>1]=true;
        }
    }
    a[l++]=2;
    for(int i=3; i<=m; i+=2)
        if(p[i>>1]==false)
            a[l++]=i;
    for(int i=0; i<l; i++)
      cout<<a[i]<<endl;

    return 0;
}

