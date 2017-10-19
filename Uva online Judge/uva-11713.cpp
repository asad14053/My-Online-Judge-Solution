#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100];
    int n;
    while(scanf("%lld",&n)==1)
    {
    for(int i=1; i<=n; i++)
    {
        scanf("%%",a,b);
        if(strlen(a)!=strlen(b))  cout<<"No"<<"\n";
        else
        {
           if(a[0]==b[0])
            cout<<"Yes"<<"\n";
           else
               cout<<"No"<<"\n";
        }
    }
    }

return 0;
}
