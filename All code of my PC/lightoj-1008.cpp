#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll t,n;
    cin>>t;int c=1;
    while(t--)
    {

        cin>>n;
        if((ll)sqrt(n)==sqrt(n))
            cout<<"Case "<<c++<<": 1 "<<(ll)sqrt(n)<<endl;
        else cout<<"Case "<<c++<<": "<<(ll)sqrt(n)<<" "<<(ll)sqrt(n)+1<<endl;
    }
    return 0;
}
