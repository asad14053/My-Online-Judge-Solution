#include<stdio.h>


int main()

{
 int n;
printf("Enter the number: ");
scanf("%d",&n);
     int i;

   printf("The odd numbers are: ");
   for(i=1;i<=n;i++)
  if(i%2!=0)
    printf("%d ",i);

    printf("\n");

  return 0;
}
