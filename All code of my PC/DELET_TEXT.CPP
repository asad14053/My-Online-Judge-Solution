
#include  <stdio.h>
#include  <conio.h>
#include  <string.h>
#include  <ctype.h>
#include  <dos.h>

void delet_text(char t[], int p, int l);
int i,j;

void delet_text(char t[], int p, int l)
{
 char temp;
 int m,q;
  m=strlen(t);
   for(i=p;i<m;i++)
     {
      t[i]=t[p+l];
       p++;
	}
      q=strlen(t);
      printf("\n----------------------------------------");
      printf("\n      OUTPUT---- OUTPUT--- OUTPUT");
      printf("\n\n----------------------------------------");
      printf("\n\n       [ %s ] - - - [ %d ] ",t,q);
     }

void main()
{
 union REGS irr,orr;
 irr.h.al=1;
 irr.h.ah=0;
 int86(0x10,&irr,&orr);

 char a[30];
  int m,o,p;
   clrscr();
	printf("\nENTER THE TEXT- ->> ");
    gets(a);
	printf("\nENTER THE DELET POSITION- ->> ");
    scanf("%d",&p);
	p-=1;
	printf("\nENTER THE LENGTH- ->> ");
     scanf("%d",&o);
      delet_text(a,p,o);
      getch();
     }