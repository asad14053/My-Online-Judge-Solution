#include<stdio.h>
#include<conio.h>
void main()
{
	int list1[20],list2[20],i,j,n,p=0,m=0,list3[30];
	clrscr();
	printf("\nHow many element in the first list.");
	scanf("%d",&n);
	p=n;
	printf("\nfirst list element enter assending value \n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&list1[i]);

	}
	n=0;
	printf("\nHow many element in the second list.");
	scanf("%d",&n);
	p=p+n;
	printf("\nsecond list element enter assending value\n ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&list2[i]);
	}
	m=1;
	i=1;
	j=1;
		 for(;;)
		 {
			 if(m<=p)
			 {
			   if(list1[i]<list2[j])
			   {
				 list3[m]=list1[i];
				 i++;
				 m++;
			   }
			   if(list1[i]>list2[j])
			   {
				 list3[m]=list2[j];
				 j++;
				 m++;
			   }
			}
			if(m>p)
			{
				 break;
			}
		 }
		 for(i=1;i<=p;i++)
		 {
			 printf("%d,",list3[i]);
		 }
	getch();
}