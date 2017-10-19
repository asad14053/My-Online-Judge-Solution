#include<bits/stdc++.h>
using namespace std;
int main()
{
    long m,n;
    while(cin>>m>>n)
    {
        int c=0;
        if(min(m,n)<4)
       for(int i=1;i<=m;i++)
       {
            for(int j=1;j<=n;j++)
            {if((i+j)%5==0)
               c++;
            }
       }
       else
       {
           c=min(m,n);
           for(int i=1;i<=min(m,n);i++)
            for(int j=min(m,n)+1;j<=max(m,n);j++)
            if((i+j)%5==0)
            c++;
       }
       cout<<c<<endl;
    }
    return 0;
}

/*
6 12
11 14
1 5
3 8
21 21

*/
