#include<conio.h>
#include<stdio.h>
 void main()
  {
   clrscr();
   int i,j,k,b[50][50],temp,sum=0,st;
   float avg;
   printf("\nnumber of student=");
   scanf("%d",&st);
     for(i=1;i<=st;i++)
       {
	printf("\nstudent=%d",i);
	for(j=1;j<=4;j++)
	 {
	  scanf("%d",&b[i][j]);
	 }
       }
   for(i=1;i<=st;i++)
    {
     for(j=1;j<4;j++)
     for(k=j+1;k<=4;k++)
      if(b[i][j]<b[i][k])
	{
	  temp=b[i][j];
	  b[i][j]=b[i][k];
	  b[i][k]=temp;
	}
     }
   printf("BEST 3 CLASS TEST=\n");
     for(i=1;i<=st;i++)
       {
	sum=0;
	printf("\nstudent= %d\n\n",i);
	for(j=1;j<=3;j++)
	   {
	   sum+=b[i][j];
	   avg=(float)sum/3;
	   printf("%d ",b[i][j]);
	   }
	   printf("\n\naverage=%f",avg);
	   printf("\n");
       }
	getch();
  }
