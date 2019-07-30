 #include<bits/stdc++.h>
 using namespace std;
 typedef unsigned long long ll;
 #define max 1000000000
 vector<ll>ak;
 long long p()
 {
     for(ll i=1;i<=10010;i++)
     {
       ll a=(i*(i+1)/2)*(i*(i+1)/2)-(i*(i+1)*(2*i+1)/6);
       ak.push_back(a);
     }
     return 0;
 }
 int main(int argc,char const* argv[])
 {
     p();
     ll n,t;
     cin>>t;
     while(t--)
     {
         cin>>n;
         cout<<ak[n-1]<<endl;
     }

     return 0;
 }
