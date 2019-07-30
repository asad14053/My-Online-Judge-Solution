


#include<stdio.h>
#include<conio.h>
#include<string.h>

   void main()

	{

	char a[100];
	int x,y,z,i,j,k,l,n=1;
	clrscr();

	printf("\n\n\tEnter the text:\n\n\t ");

	i=0;
	while((a[i]=getchar())!='\n')
	{
	if(a[i]==' '||a[i]=='\t')
	{
	a[n]=n;
	n++;
	}
	i++;
	}
	getch();

	}