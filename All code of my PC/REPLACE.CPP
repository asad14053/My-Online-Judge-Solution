#include<stdio.h>
#include<conio.h>
//#include<ctype.h>
#include<string.h>
#include <dos.h>
#include <stdlib.h>

void REPLACE(char t[], char p[]);

void REPLACE(char t[], char p[])
{
int i,j,k=0,m,n,max,l,o,q,len;
 char r[50];
  m=strlen(t);
   n=strlen(p);
    for(i=0;i<m;i++)
     {
      k=0;
	for(j=i,l=0;p[l]!='\0';j++,l++)
	 {
	  if(t[j]==p[l])
	   k+=1;
	   o=i;
	  }
	if(k==n)
	  break;
	 }
    if(k==n)
     {
      printf("\nAFTER THAT---->> [ FOUND ]");
	printf("\n\n\nENTER THE REPLACE WORD - - ->> ");
	 gets(r);
	  len=strlen(r);
	}
  else
       printf("\nAFTER THAT - - - - - -  [ NOT FOUND ]");
   if(len<=0)
     return;
   if(len!=n)
     printf("\nYOU MUST ENTER SAME WORD THAN PATTERN-1");
     else
	{
	 for(i=o,j=0;r[j]!='\0';i++,j++)
	   {
	    t[i]=r[j];
	     }
	  printf("\n----------------------------------------");
	printf("\n    OUTPUT---- OUTPUT--- OUTPUT");
      printf("\n\n----------------------------------------");
    printf("\n- - - - - [ %s ]",t);
   }
  }

void main()
{
 union REGS irr,orr;
 irr.h.al=1;
 irr.h.ah=0;
 int86(0x10,&irr,&orr);
 char t[50],p[50],r[50];
   clrscr();
	printf("\nENTER THE TEXT - ->> ");
   gets(t);
	printf("\nENTER PATTERN-1 TEXT - ->> ");
   gets(p);
	REPLACE(t,p);
  getch();
 }
