#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=1;
    bool ar[10000],ab[10000];
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
       //  c=0;
        for(int j=0;j<b;j++)
        {
           cin>>ar[i]>>ab[i];
          // ar[i]=ar[i]|ar[i+1];
          if(ar[i]|ab[i]) c++;

        }

       /*  for(int j=0;j<2*b;j++)
        {
           if(ar[i]|ar[i+1]) ++c;
           int sum=0;
            sum+=c;
           c=0;
        }*/


    }
    cout<<c-1<<endl;
    return 0;
}
