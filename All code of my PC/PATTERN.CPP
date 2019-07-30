#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include <dos.h>

void PATT_MATCH(char t[], char p[]);

void PATT_MATCH(char t[], char p[])
{
int i,j,k=0,m,n,max,l,o,q;
  m=strlen(t);
   n=strlen(p);
    max=m-n+1;
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
	 {
	  q=i+k;
	   break;
	  }
	 }
      printf("\n----------------------------------------");
      printf("\nOUTPUT---- OUTPUT--- OUTPUT");
      printf("\n\n----------------------------------------");
      if(k==n)
     printf("\nAFTER THAT- - - - - - -  [ FOUND ] \n\n\nSTART FROM--->>> [ %d ] TO --- [ %d ]",o+1,q);
    else
   printf("\nAFTER THAT - - - - - -  [ NOT FOUND ]");
  }

void main()
{
 union REGS irr,orr;
 irr.h.al=1;
 irr.h.ah=0;
 int86(0x10,&irr,&orr);
 char t[50],p[50];
   clrscr();
	printf("\nENTER THE TEXT - ->> ");
   gets(t);
	printf("\nENTER PATTERN TEXT - ->> ");
   gets(p);
	PATT_MATCH(t,p);
  getch();
 }