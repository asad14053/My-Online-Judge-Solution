#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 int main()
 {
     ll t,n;
     cin>>t;
     while(t--)
     {
         bool f=true;
         cin>>n;
         if(n>2 and n%2==0)
            f=false;
         else if(n>3 and n%3==0)
            f=false;
         else if(n>5 and n%5==0)
            f=false;
         else if(n>7 and n%7==0)
            f=false;
         else if(n>11 and n%11==0)
            f=false;
         else
         {
             for(ll i=13;i<=sqrtl(n);i+=2)
                if(n%i==0)
             {
                 f=false;
                 break;
             }
         }
         if(f)
            cout<<"Prime"<<endl;
         else cout<<"Not Prime"<<endl;
     }
     return 0;
 }
