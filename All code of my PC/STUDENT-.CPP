#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int test[4],count=0,temp,i,n;
	float student[40],ave,sum;
	printf("Enter 4 class test numbers of each student:");
	while(count!=40)
	{
		printf("\nPress 1 for continue or 0 for break:");
		scanf("%d",&n);
		if(n==0)
			break;
		else if(n==1)
		{
			temp=100;sum=0;ave=0;
			printf("\nStudent No %d :",count+1);
			for(i=0;i<4;i++)
			{
				scanf("%d",&test[i]);
				if(test[i]>=0&&test[i]<=100)
				{
					if(test[i]<temp)
						temp=test[i];
				}
				else
				{
					printf("\nInvalid Input.");
					--i;

				}
			}
			for(i=0;i<4;i++)
				sum+=test[i];

			ave=(sum-temp)/3;
			student[count]=ave;
			count++;
		}
	}
	printf("\n\nThe average value is:\n");
	for(i=0;i<count;i++)
	printf("\nStudent No %d :%.3f",i+1,student[i]);
	getch();
}