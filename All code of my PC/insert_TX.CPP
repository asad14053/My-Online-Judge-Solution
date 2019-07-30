
 /***************INSERT A STRING*******************/

#include<stdio.h>
#include<conio.h>
#include<string.h>

   void main()

	{

	char a[100],b[100],c[100],d[100],e[100];
	int x,y,z,i,j,k,l;
	clrscr();

	printf("\n\n\tEnter the text:\n\n\t ");

	i=1;
	while((a[i]=getchar())!='\n')
	i++;

	printf("\n\n\tEnter a word to insert:\n\n\t");

	k=1;
	while((b[k]=getchar())!='\n')
	k++;
	printf("\n\n\tEnter the position:\n\n\t");
	scanf("%d",&x);
	for(l=i;l>x;l--)
	a[l+k-2]=a[l-1];
	for(y=x,j=1;y<=x+k-1,j<k;y++,j++)
	a[y]=b[j];
	gotoxy(10,19);
	if(x<=i)
	{
	printf("After insert:\n\n\t");
	for(j=1;j<i+k-1;j++)
	printf("%c",a[j]);
	}
	else
	{
	gotoxy(10,19);
	printf("The position is invalid.\n\n\t");
	}
	getch();

	}