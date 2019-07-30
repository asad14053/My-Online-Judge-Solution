#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(m>=(n*(n+1)/2))
        {
            int i=1;
            m%=(n*(n+1)/2);
            for( i=1;i<=n;i++)
                {if(m<0)
                 break;
                 m-=i;

                }
            cout<<m+i-1<<endl;
        }
        else
        {
            int i=1;
        for( i=1;i<=n;++i)
                {if(m<0)
                  break;
                  m-=i;
                }
                //cout<<i<<endl;
            cout<<m+i-1<<endl;
        }
    }
    return 0;
}
