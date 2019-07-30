

    /*******A PROGRAM FOR DELETE A SUBSTRING***********/


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
   void main()

	{


	int driver,mode;
	char a[100],b[100],c[100],d[100],e[100];
	int x,y,z,i,j,k,l;
	clrscr();

	driver=DETECT;
	initgraph(&driver,&mode,"c:\\tc\\bgi");
	 setbkcolor(9);
	printf("\n\n\tEnter the text:--->>>>\n\n\t ");

	i=1;
	while((a[i]=getchar())!='\n')
	i++;
	printf("\n\n\tEnter the initial position:--->>>\n\n\t");
	scanf("%d",&x);
	printf("\n\n\tEnter length to delete:--->>>\n\n\t");
	scanf("%d",&y);
	for(l=x;l<i-y;l++)
	a[l]=a[l+y];
	if(x<=0||x>i)
	{
	gotoxy(11,22);
	printf("The position is invalid.\n\n\t");
	}
	else
	{
	gotoxy(11,22);
	printf("After delete:--->>>\n\n\t");
	for(j=1;j<i-y;j++)
	printf("%c",a[j]);
	}
	getch();

       }