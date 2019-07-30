#include<bits/stdc++.h>
using namespace std;
#define max 10000000
bool a[max];
long long p[max];
/*int prime()
{
     memset(a,1,sizeof(a));
    a[0]=a[1]=0;
    int i,j,k=0;
    for(int i=2;i<=sqrt(max);i++)
         for(int j=i+1;j<=max;j+=i)
         if(a[i])
         a[i]=false;
     for(int i=2;i<=(max);i++)
        if(a[i])
        p[++i]=i;
    return 0;
}*/
int main()
{
  //  prime();
    long long n,m,t,i=0;
    while(cin>>n)
    {
        int p=0,k=0;
        //for(long long i=1;i<=n;i++)
        {
            for(long long j=1;j<=(n);j++)
            {
               // cout<<"----"<<endl;
                if(n%j==0&&sqrt(j)!=(int)sqrt(j))
                   {

                   a[++p]=j;
                    //cout<<j<<endl;
                  k=j;
                   }
            }

        cout<<k<<endl;
        }
    }
    return 0;
}
