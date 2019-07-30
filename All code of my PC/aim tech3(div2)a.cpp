#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,b,d;
    while(cin>>n>>b>>d)
    {
        ll a,s=0,c=0;
        for(int i=0;i<n;i++)
        {
            //s=0;
            cin>>a;
            if(a<=b)
            s+=a;
            if(s>d)
               {
                   c++;
                   s=0;
               }
        }
        cout<<c<<endl;
    }
    return 0;
}

/*
2 7 10
5 6
1 5 10
7
3 10 10
5 7 7
1 1 1
1
*/

