#include<stdio.h>
int main()
{
      int ans,n,t;
            while(scanf("%d",&n)==1){
                  if(n==0)
                  break;
                        ans=(n*(n+1)) * (2*n+1);
                        t=ans/6;
                        printf("%d\n",t);
            }
            return 0;
}
