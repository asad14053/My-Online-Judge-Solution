#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int test[4],count=0,temp,i;
	float student[40],ave,sum;
	char ch;
	printf("Enter 4 class test numbers of each student:");
	while(count!=40)
	{
		printf("\nPress y for continue or n for break:");
		ch=getche();
		if(ch=='n')
			break;
		else if(ch=='y')
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
					//continue;
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