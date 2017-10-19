#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int test,p;
long i,n,b;
double f[1000010];
int main()
{
    scanf("%d",&test);
    for(i=1;i<=1000000;i++)
        f[i]=log((i))+f[i-1];
    for(p=1;p<=test;p++)
    {
        scanf("%ld%ld",&n,&b);
        printf("Case %d: %ldn",p,(long)(f[n]/(f[b]-f[b-1]))+1);
    }
    return 0;
}
