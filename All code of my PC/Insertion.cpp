#include<stdio.h>
#include<conio.h>
main()
{
	int i=1,j=1,item,a[20],m=0,l=0;
	printf("Enter element.\n");
	while(i==1)
	{
	    printf("\nEnter value:");
		scanf("%d",&a[j]);
		j++;
		printf("\nContinue pass 1:");
		scanf("%d",&i);
	}
	l=j-1;
	printf("\n\n");
	for(i=2;i<j;i++)
	{
		item=a[i];
		m=i-1;
		while(m>=1&&item<a[m])
		{
			a[m+1]=a[m];
			m--;
		}
		a[m+1]=item;
	}
	i=1;
	while(i<=l)
	{
		printf("%d,",a[i]);
		i=i+1;
	}
  
    getch();
    return 0;
}