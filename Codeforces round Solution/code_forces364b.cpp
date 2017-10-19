#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r[100005] = {0};
    long long c[100005] = {0};
    long long a,b,n,m,p,q,s,ss;

    cin>>n>>m;
    s = n,ss=n;
    p=0;
q=0;
     long long sum = n * n,ans;
     while(m--)
     {
         cin>>a>>b;
        //
         if(r[a] == 0)
         {
             p += s;
             r[a] = 1;
             ss--;
         }
          if(c[b] == 0)
         {
             q += ss;
             c[b] = 1;
                         s--;
         }
         if(p==0 && q == 0)
            cout<<0<<" ";
         else
         {
             ans = sum - (p + q);
             if(ans<=0)
                cout<<0<<" ";
             else
                cout<<ans<<" ";
         }

     }
}
