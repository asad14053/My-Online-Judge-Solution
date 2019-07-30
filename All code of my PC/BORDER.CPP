#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,row,coll,a[50][50],sum=0;
	printf("Enter the row and coll of the matrix:");
	scanf("%d%d",&row,&coll);
	printf("Enter the element of the matrix:");
	for(i=0;i<row;i++)
		for(j=0;j<coll;j++)
			scanf("%d",&a[i][j]);
	printf("The inputed matrix is:\n");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<coll;j++)
			printf("%3d  ",a[i][j]);
	}
	for(i=0;i<row;i++)
	{
		if((i==0)||(i==row-1))
		{
			for(j=0;j<coll;j++)
			sum+=a[i][j];
		}
		else
		{
			sum+=a[i][0];
			sum+=a[i][row-1];
		}
	}
	printf("\n\nThe sum of the border elements is: %d",sum);

	getch();
}