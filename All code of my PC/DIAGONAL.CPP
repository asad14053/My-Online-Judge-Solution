#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,row,a[50][50],sum=0;
	printf("Enter the row or coll of a square matrix:");
	scanf("%d",&row);
	printf("Enter the element of the matrix:");
	for(i=0;i<row;i++)
		for(j=0;j<row;j++)
			scanf("%d",&a[i][j]);
	printf("The inputed matrix is:\n");
	for(i=0;i<row;i++)
	{
		printf("\n");
		for(j=0;j<row;j++)
			printf("%3d  ",a[i][j]);
	}
	int p=row;
	for(i=0;i<row;i++)
	{
		sum+=a[i][i];
		sum+=a[i][--p];
	}
	if(row%2!=0)
		sum-=a[row/2][row/2];

	printf("\n\nThe sum of the diagonal elements is: %d",sum);

	getch();
}