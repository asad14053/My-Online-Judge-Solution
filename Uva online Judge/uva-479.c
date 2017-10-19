#include<stdio.h>
int main()
{
long int t,a,b,c,i;
while(scanf("%ld",&t)==1)
{
i=1;
while(i<=t)
 {
 scanf("%ld%ld%ld",&a,&b,&c);
 if((a+b)<=c || (b+c)<=a || (c+a)<=b)
 printf("Case %ld: Invalid\n",i);
 else if(a<=0 || b<=0 || c<=0)
 printf("Case %ld: Invalid\n",i);
 else if(a==b && b==c)
 printf("Case %ld: Equilateral\n",i);
 else if(a==b || b==c || c==a)
 printf("Case %ld: Isosceles\n",i);
 else
 printf("Case %ld: Scalene\n",i);
 i++;
 }

}
return 0;
}
