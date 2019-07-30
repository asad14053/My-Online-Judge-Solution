


      /*pattern matching*/




#include<stdio.h>
#include<conio.h>
#include<string.h>

   void main()

	{

	char a[100],b[100];
	int x,y,z,i,j,k,l;
	clrscr();

	printf("\n\n\tEnter the text:\n\n\t ");

	i=0;

	while((a[i]=getchar())!='\n')
	i++;

	printf("\n\n\tEnter the Pattern to find:\n\n\t");

	k=0;
	while((b[k]=getchar())!='\n')
	k++;
	for(l=0;l<i;l++)
	  {
	    x=0;
	    y=l;

	      for(j=0;j<k;j++)
		if(b[j]==a[y])
		  {
		   x++;
		   y++;
		  }
	      if(x==k)
	     {
	      z=l;
	      break;
	      }

	    }

	if(x==k)
	printf("\n\n\tFound in %d no. Position",z+1);
	else
	printf("\n\n\n\tNot found");

	getch();

	}