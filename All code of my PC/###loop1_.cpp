#include<stdio.h>
int fibo(int n);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d ",fibo(i));
    return 0;
}
int fibo(int n)
{
    if(n==0||n==1)
        return (n);
    else
        return(fibo(n-2)+fibo(n-1));
}
