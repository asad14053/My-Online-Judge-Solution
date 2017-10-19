#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int n,d;
    while(cin>>n>>d)
    {int c1=0,c2=0,ans=0,m;
       while(d--)
       {
           cin>>a;
           m=a.find('0');
           m=m+1;
           if(m)
               c1++;
           else
               c1=0;

            ans=max(ans,c1);
       }
       cout<<ans<<endl;
    }
    return 0;
}
