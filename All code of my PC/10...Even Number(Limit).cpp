#include<stdio.h>


int main()

{
 int a,n;
printf("Enter two integer number: ");
scanf("%d %d",&a,&n);
     int i;

   printf("The even numbers are: ");
   for(i=a;i<=n;i++)
  if(i%2==0)
    printf("%d ",i);

    printf("\n");

  return 0;
}
