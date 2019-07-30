#include<stdio.h>
#include<conio.h>
void main()
{
	int minvalue=0,number=0,i=0,j=0,selectionS[50],s,k;
	printf("How many element do u sorting :");
	scanf("%d",&number);
	for(;i<number;i++)
	{

			printf("Enter element[%d]:",i+1);
			scanf("%d",&selectionS[i]);
	}
	for(i=0;i<number-1;i++)
	{   s=i;
		minvalue=i;
		for(j=i;j<number-1;j++)
		{
			if(selectionS[minvalue]>selectionS[j+1])
				minvalue=j+1;
		}
		if(s!=minvalue)
		{
			k=selectionS[s];
			selectionS[s]=selectionS[minvalue];
			selectionS[minvalue]=k;
		}

	}
	printf("\n");
	i=0;
     for(;i<number;i++)
      {
       printf("%d,",selectionS[i]);
      }

	getch();
}