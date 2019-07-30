#include<stdio.h>
int main()
{
  int a[23],loc,n,i,item;
  printf("\nrange:");
  scanf("%d",&n);
  printf("\nloc:");
  scanf("%d",&loc);
  printf("\nInsert Item:");
  scanf("%d",&item);
  for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
  for(i=loc;i<=n;i++)
  {
	a[i+1]=a[i];
  }
    a[loc]=item;
    n=n+1;
    for(i=1;i<=n;i++)
	printf("%d ",a[i]);
    return 0;
  }
