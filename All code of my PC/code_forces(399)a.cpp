
#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define fr(i,a,b) for(int i=(a);i<(b);i++)

#define vll vector<long long>
#define pb push_back
int main()
{
   // fast();
    //  input();
    //  output();
    ll n,t,a,b,x,y,q,z;
   // vll  v;

    while(cin>>n)
    {
        vll v;
        set<ll>s;
         fr(i,0,n)
         {
             cin>>x;
             v.pb(x);
          //   s.insert(x);
         }
         sort(v.begin(),v.end());
         ll l=v.size();
         ll mn=v[0];
         ll mx=v[l-1];
         ll c=0;
         fr(i,1,n-1)
         {
             if(v[i]<mx and v[i]>mn)
                c++;
         }
         cout<<c<<endl;

       //  bug(s.size());
     /*  sort(all(v));
         if(s.size()>=3)
         cout<<s.size()-2<<endl;
         else cout<<0<<endl;
            */

    }
return 0;
}





