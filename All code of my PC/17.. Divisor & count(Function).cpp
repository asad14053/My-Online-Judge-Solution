//Divisor using function
#include<stdio.h>

int divisor(int a)
{
     int i,c;
     c=0;
   printf("The divisors are: ");
   for(i=1;i<=a;i++)
    {
  if(a%i==0)
    {
    printf("%d ",i);
    c++;
    }
    }
    printf("\nDivisor=%d",c);

  return 0;
}


int main()

{
 int n;
printf("Enter the number: ");
scanf("%d",&n);
    divisor(n);

  return 0;

  }
