#include<stdio.h>
#include<conio.h>
#include<math.h>
int tree[100][100];
void max(int iteam,int level,int subl);
main()
{
	int i,j,n,number=0,k=0,child=0;

	clrscr();
	printf("How many element to insertion.");
	scanf("%d",&n);
	number=pow(2,n)-1;


	for(i=1;i<=n;i++)
	{
		if(i==1)
		{
		child=1;
		}
		else
		{
		 child=pow(2,i-1);
		}
		for(j=1;j<=child;j++)

		{
		k++;
		if(number>=k)
		{

			if(i==1)
			{
				printf("Enter value [%d][%d]",i,j);
				scanf("%d",&tree[i][j]);
			}
			else
			{
			printf("\nEnter value [%d][%d]",i,j);
				scanf("%d",&tree[i][j]);
				max(tree[i][j],i,j);
			}
		   }
		}
	}
	printf("\n\n");
	k=0;
	for(i=1;i<=n;i++)
	{

		if(i==1)
		{
		child=1;
		}
		else
		{
		 child=pow(2,i-1);
		}
		for(j=1;j<=child;j++)
		{  k++;
		       if(number>=k)
		       {
			printf("\nEnter value [%d][%d]",i,j);
			 printf("%d ,",tree[i][j]);

			}
		   }
		}

	getch();
	return 0;
}
void max(int iteam,int level,int subl)
{
	int temp,n,prer,x=0;
	prer=level-1;
	if(prer>=1)
	{
	tree[level][subl]=iteam;
	x=subl%2;
	if(x!=0)
	{       n=subl/2;
		n=n+1;
	}
	else
	   {
	    n=subl/2;
	   }
	if(tree[level][subl]>=tree[prer][n])
	{
		temp=tree[prer][n];
		tree[prer][n]=tree[level][subl];

		tree[level][subl]=temp;
		max(tree[prer][n],prer,n);
	}
	}

}