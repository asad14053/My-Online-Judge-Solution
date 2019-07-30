#include<bits/stdc++.h>
using namespace std;
int main()
{
    long m,l, n,k,x;
   while(cin>>n)
   {
   for(int i=1;i<=n;i++)
   {
       cin>>m>>l>>k;
        int c=0;
        x=m+l;
        while(x>=k)
        {
            c+=x/k;
            x=x%k+x/k;
        }
        cout<<c<<"\n";
    }
   }
    return 0;

}
