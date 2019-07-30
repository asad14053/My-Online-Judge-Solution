 #include<bits/stdc++.h>
 using namespace std;
 typedef long long ll;
 #define max 100000000
 int a[max]={0};
 void p()
 {
     for(ll i=1;i<=10010;i++)
     {
         ll b=(i*(i+1)/2);
        a[i]=b*b-(i*(i+1)*(2*i+1)/6);
     }
 }
 int main(int argc,char const* argv[])
 {
     p();
     ll n,t;
     cin>>t;
     while(t--)
     {
         cin>>n;
         cout<<a[n]<<endl;
     }

     return 0;
 }
