 #include<bits/stdc++.h>
 using namespace std;
 typedef unsigned long long ll;
 int main()
 {
     ll n;
     char m[1000];
     while(cin>>n)
     {
         if(n==0)
         {
             cout<<0<<endl;
             break;
         }
         int l=0,rm;
         while(n!=0)
         {
             rm=n%32;
             if(rm>9) m[l++]=rm+55;
             else m[l++]=rm+'0';
             n/=32;
         }
         for(int i=l-1;i>=0;i--)
         {
            cout<<m[i];
         }
         cout<<endl;
     }

     return 0;
 }
