

#include  <stdio.h>
#include  <conio.h>
#include  <string.h>
#include  <ctype.h>
#include  <dos.h>


void text_insert(char t[], char p[], int l);
int i=0,j=0;


void text_insert(char t[], char p[], int l)
{
  int m,n,q,loc;
   m=strlen(t);
    n=strlen(p);
     loc=l;
 for(i=m;i>=loc;i--)
  {
   t[i+n]=t[i];
    }
     for(j=0;j<n;j++)
      {
       t[loc]=p[j];
	loc++;
	}
      printf("\n----------------------------------------");
     printf("\n      OUTPUT---- OUTPUT--- OUTPUT");
    printf("\n\n----------------------------------------");
   printf("\n\n- - - - [ %s ]",t);
    }

void main()
{
  union REGS irr,orr;
 irr.h.al=1;
 irr.h.ah=0;
 int86(0x10,&irr,&orr);

  char a[10],b[10];
  int m,n,o;
  clrscr();
	printf("\n\nENTER THE TEXT - - ->>>  ");
     gets(a);
	printf("\n\nENTER THE PATTERN - - ->>>  ");
     gets(b);
	printf("\n\nENTER THE POSITION - - ->>>  ");
     scanf("%d",&o);
      text_insert(a,b,o);
      getch();
     }