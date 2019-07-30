#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int num[105][105];
int ans[105];
void  phi()
{
    memset(num,0,sizeof(num));
    for(int x=2;x<=100;x++)
    {
         int n=x;
         for(int i=2;i<(int)sqrt(1.0*n)+1;i++)
         {
                  if(n%i==0)
                  {
                           int cnt=0;
                           while(n%i==0)  cnt++,n/=i;
                           num[x][i]=cnt;
                  }
         }
         if(n>1) num[x][n]=1;
    }
}
int main()
{
    phi();
    int T,ca=0;
    cin>>T;
    while(T--)
    {
         int n,i,j;
         cin>>n;
         memset(ans,0,sizeof(ans));
         for( i=2;i<=100;i++)
              for(j=2;j<=n;j++) ans[i]+=num[j][i];
         printf("Case %d: %d = ",++ca,n);
         for(i=2;i<=100;i++)
                  if(ans[i]>0) {printf("%d (%d)",i,ans[i]);break;}
         for(i++;i<=100;i++)
                  if(ans[i]>0) printf(" * %d (%d)",i,ans[i]);
         printf("\n");
    }
    return 0;
}
