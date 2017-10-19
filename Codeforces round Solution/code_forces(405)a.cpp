///    Md.ASADUZZAMAN
///    Dept of ICT
///    MBSTU
#include<bits/stdc++.h>
using namespace std;

#define fr(i,a,b) for(int i=(a);i<(b);i++)


#define ll long long
#define ull unsigned long long
#define EPS 1e-9
#define MOD 1000000007
int main()
{
    #ifndef ONLINE_JUDGE
    //input();
    //output();
    #endif
//    fast();
    ll n,t,a,b,x,y,q,z;
    while(cin>>a>>b)
    {
        ll c=0;
        while(a<=b)
        {
            a*=3;
            b*=2;
            c++;
        }
        cout<<c<<endl;

    }


return 0;
}





