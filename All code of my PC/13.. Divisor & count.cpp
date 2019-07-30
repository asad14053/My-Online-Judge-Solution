#include<stdio.h>


int main()

{
 int n;
printf("Enter the number: ");
scanf("%d",&n);
     int i,c;
     c=0;
   printf("The divisors are: ");
   for(i=1;i<=n;i++)
    {
  if(n%i==0)
    {
    printf("%d ",i);
    c++;
    }
    }
    printf("\nDivisor=%d",c);

  return 0;
}
