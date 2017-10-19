#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x,y,x1,y1;
    while(cin>>x>>y>>x1>>y1)
    {
        cout<<max(abs(x-x1),abs(y-y1));
    }
    return 0;
}
