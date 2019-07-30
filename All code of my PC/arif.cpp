#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter two number\n");
    scanf("%d%d",&x,&y);
    z=x*y;
    printf("arif= %d\n",z);
  //  return 0;
  if(z>100)
    printf("z greater than 100");
  else printf("z less than 100");
}
