#include<bits/stdc++.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int div(long m);
int main()
{
    long n,a,s,i,m;
    cin>>n;
    while(n--)
    {
        cin>>a;
        m=a;
        s=div(m);
        cout<<s<<endl;
    }
    return 0;
}
int div(long m)
{
    long int s=0,i;

        if(m==2)
            s=1;
       else if(m%2==0)
            s+=m/2;
        for(i=3;i*i<=m;i++)
        {
            if(m%i==0)
            s=s+i;
        }
        return s;
}
