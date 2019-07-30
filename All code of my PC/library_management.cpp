#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include <string.h>
#include <process.h>
#include <stdlib.h>
#include <ctype.h>
#include <graphics.h>
#include<dos.h>
#include<iomanip.h>
#define NORMAL 7


class library
{
 private:
	FILE *fp,*ft,*fe;
	int sl;
	long int recsize;
	char another,choice;

	struct LateFine
	{
	 int roll,sno;
	 char name[30];
	 char code[15];
	 float amt;
	}f;
	struct student
	{
	 int roll,sno,sl,dt,mn,yr;
	 char name[30];
	 char code[15];
	}i,r,q;

	struct book
	{
	 int sno;
	 char name[30];
	 char auth[30];
	 char pub[25];
	 float price;
	}b;
 public:
	void boxb(int r,int c,int r1,int c1,char m[]);
	int  menu(int col,int r,int c,int npara,char *pop[]);
	void about();
	void bookpurchage();
	void booklist();
	void bookissue();
	void issuelist();
	void bookreturn();
	void returnlist();
	void querybystd();
	void querybybook();
	void latefine();
	void delreturn();
	void modifyentry();
	void flash();


};
// Function to get overview of project
void library::bookpurchage()
{
  int temp=0;

  fp = fopen ("RECORD.DAT","rb+");
  if(fp == NULL)
  {
   fp = fopen ("RECORD.DAT","wb+");
   if(fp == NULL)
    {
     puts("Can not open file");
     exit(0);
     }
   }
  recsize=sizeof(b);
  fseek(fp,0,SEEK_END);
  another='y';
  rewind(fp);
  while(fread(&b,recsize,1,fp)==1)
  {
   temp=b.sno;
   }
  while(another=='y')
  {
   textbackground(9);
   clrscr();
   flash();
   textattr(697);
   textcolor(692);
   gotoxy(3,4);cprintf("                         [      BOOKS
S       ]                      ");
   textattr(7);
   b.sno=temp+1;
   temp++;
   gotoxy(10,10);cout<<"BOOK_NO       : "<<b.sno;
   flushall();
   gotoxy(10,11);cout<<"BOOK_NAME     : ";
   gets(b.name);
   flushall();
   gotoxy(10,12);cout<<"AUTHOR_NAME   : ";
   gets(b.auth);
   flushall();
   gotoxy(10,13);cout<<"PUBLICATION   : ";
   gets(b.pub);
   flushall();
   gotoxy(10,14);cout<<"PRICE         : ";
   cin>>b.price;
   flushall();
   gotoxy(10,16);cout<<"Do you want to save(y/n): ";
   another=getche();
   if(another!='y')
    temp--;
   else
    fwrite(&b,recsize,1,fp);
   gotoxy(10,17);cout<<"Add another records(Y/N): ";
   fflush(stdin);
   another=getche();
  }
  clrscr();
  return;
}

void library::booklist()
{
  int c=1;

  fp = fopen ("RECORD.DAT","rb+");

  recsize=sizeof(b);
  rewind(fp);
  textbackground(9);
  clrscr();
  flash();
  textattr(697);
  textcolor(692);
  gotoxy(3,4);cprintf("                         [      BOOKS
S       ]                      ");
  textattr(7);
  gotoxy(2,7);cout<<"BOOK_NO. BOOKS_NAME            AUTHOR
PUBLICATION        PRICE ";

gotoxy(2,8);cout<<"-------------------------------------------------------
----------------------";
  while (fread (&b,recsize,1,fp) == 1)
  {
  flash();
  textattr(697);
  textcolor(692);
  gotoxy(3,4);cprintf("                         [      BOOKS
S       ]                      ");
  textattr(7);
  gotoxy(2,8+c);
  cprintf(" %-6d ",b.sno);
  cprintf(" %-20.20s ",b.name);
  cprintf(" %-18.18s ",b.auth);
  cprintf(" %-15.15s",b.pub);
  cprintf(" %9.2f ",b.price);
  c++;
  if(c>11)
   {
    c=1;
    gotoxy(55,20);
    cout<<"Press key to next";
    getch();
    textbackground(9);
    clrscr();
    flash();
    textattr(697);
    textcolor(692);
    gotoxy(3,4);cprintf("                         [      BOOKS
S       ]                      ");
    textattr(7);
    gotoxy(2,7);cout<<"BOOK_NO. BOOKS_NAME            AUTHOR
PUBLICATION        PRICE ";

gotoxy(2,8);cout<<"-------------------------------------------------------
----------------------";
   }
  }
  gotoxy(60,20);cout<<"End of List";
  getch();
  clrscr();
  return;
}

int library::menu(int color,int r,int c,int npara,char *popup[])
   {
  int r1=r+(npara-1),k=0,i=0,j=1,r2=r;
  textattr(color);gotoxy(c,r2);cprintf(popup[0]);
  r2++;
  textattr(919);
  textcolor(7);
  for(j=1;j<npara;j++,r2++)
  {
   gotoxy(c,r2);cprintf(popup[j]);
  }
  do
  {
    k=getch();
    switch(k)
    {
      case 80 :
		gotoxy(c,r);textattr(919);textcolor(7);cprintf(popup[i]);
		r++;
		i++;
		if(r>r1)
		{
		 r=r1-(npara-1);
		 i=0;
		 gotoxy(c,r);textattr(color);cprintf(popup[i]);
		}
		 gotoxy(c,r);textattr(color);cprintf(popup[i]);
		 break;
      case 72  :
		gotoxy(c,r);textattr(919);textcolor(7);cprintf(popup[i]);
		r--;
		i--;
		if(r<r1 -(npara-1))
		{
		 r=r1;
		 i=npara-1;
		 gotoxy(c,r);textattr(color);cprintf(popup[i]);
		}
		 gotoxy(c,r);textattr(color);cprintf(popup[i]);
		 break;
    }
   }while(k!=13);
  return i+1;
}

void library::boxb(int r,int c,int r1,int c1,char m[])
{
  int i;
  if(m=="S")
   {
    gotoxy(c,r);printf("%c",218);
    gotoxy(c1,r);printf("%c",191);
    gotoxy(c,r1);printf("%c",192);
    gotoxy(c1,r1);printf("%c",217);
    for(i=c+1;i<c1;i++)
      {
       gotoxy(i,r);printf("%c",196);
       gotoxy(i,r1);printf("%c",196);
      }
    for(i=r+1;i<r1;i++)
      {
       gotoxy(c,i);printf("%c",179);
       gotoxy(c1,i);printf("%c",179);
      }
   }
 else
   {
    gotoxy(c,r);printf("%c",201);
    gotoxy(c1,r);printf("%c",187);
    gotoxy(c,r1);printf("%c",200);
    gotoxy(c1,r1);printf("%c",188);
    for(i=c+1;i<c1;i++)
      {
       gotoxy(i,r);printf("%c",205);
       gotoxy(i,r1);printf("%c",205);
      }
    for(i=r+1;i<r1;i++)
      {
       gotoxy(c,i);printf("%c",186);
       gotoxy(c1,i);printf("%c",186);
      }
   }
  return;
}

void library::flash()
{
  boxb(2,1,5,79,  "S");
  boxb(6,1,20,79, "D");
  boxb(21,1,24,79,"D");
  textattr(697);
  textcolor(692);
  gotoxy(3,3);cprintf("                         [LIBRARY INFORMATION
SYSTEM]                      ");
  textattr(697);textattr(693);
  gotoxy(3,22);cprintf(" Designed  By :- KRISHNA BIHARI
");
  gotoxy(3,23);cprintf("                 M.C.A., A.N.College, Patna
");
  textattr(7);
}
void library::about()
{
  textbackground(9);
  clrscr();
  flash();
  textattr(697);
  textcolor(692);
  gotoxy(3,4);cprintf("                         [
ERVIEW          ]                      ");
  textattr(919);
  gotoxy(10,7) ;textcolor(4);cprintf("This L.I.S. Package has been
designed to maintain computerised ");
  gotoxy(10,8) ;textcolor(2);cprintf("Library work very easily by a
librarian. It can run under DOS/ ");
  gotoxy(10,9) ;textcolor(5);cprintf("Windows Environment.
");

gotoxy(10,10);textcolor(3);cprintf("......................................
....................... ");
  gotoxy(10,11);textcolor(6);cprintf("
Krishna
Bihari                     ");
  gotoxy(10,12);cprintf("                            M.C.A.
");
  gotoxy(10,13);cprintf("                            A.N.College, Patna
");
  gotoxy(10,14);puts("                            *******************
");
  textcolor(2);
  gotoxy(10,15);cprintf("                 Email    kb_pat@yahoo.com
");

gotoxy(10,16);textcolor(3);cprintf("......................................
....................... ");
  textattr(7);textbackground(3);textcolor(5);
  gotoxy(55,20);textcolor(804);cprintf("Press any key to Next ");
    // sound(2100);
    // delay(1000);
  getch();
    // nosound();
  textattr(7);
  clrscr();
}

void library::bookissue()
{
  int temp=0,tem=0;
  fp = fopen ("BISSUE.DAT","rb+");
  if(fp == NULL)
    {
     fp = fopen ("BISSUE.DAT","wb+");
     if(fp == NULL)
      {
       puts("Can not open file");
       exit(0);
      }
    }
  ft=fopen("RECORD.DAT","rb");
  recsize=sizeof(i);
  fseek(fp,0,SEEK_END);
  another='y';
  choice='y';
  rewind(fp);
  while(fread(&i,recsize,1,fp)==1)
   temp=sl;
  while(another=='y')
  {
   textbackground(9);
   clrscr();
   flash();
   textattr(697);
   textcolor(692);
   gotoxy(3,4);cprintf("                         [       BOOKS
      ]                      ");
   textattr(7);
   sl=temp+1;
   temp++;
   flushall();
   gotoxy(10,11);cout<<"BOOK_NO       : ";
   cin>>i.sno;
   flushall();
   rewind(ft);
   while(fread(&b,sizeof(b),1,ft)==1)
   {
    if (i.sno==b.sno)
     {
      tem=i.sno;
      rewind(fp);
      while(fread(&i,recsize,1,fp)==1)
      {
       if(tem==i.sno)
	{

gotoxy(2,7);cout<<"-------------------------------------------------------
----------------------";
	 gotoxy(2,8);cout<<"BOOK_NO: "<<i.sno<<" IS NOT PRESENT ! PLEASE
ENTRER
NEW BOOK NUMBER";

gotoxy(2,9);cout<<"-------------------------------------------------------
----------------------";
	 goto a;
	}
      }
      i.sno=tem;
      gotoxy(2,7);cout<<"BOOK NO. BOOK's NAME           AUTHOR
PUBLICATION        PRICE  ";

gotoxy(2,8);cout<<"-------------------------------------------------------
----------------------";
      gotoxy(2,9);printf(" %-6d  %-20.20s  %-18.18s  %-15.15s
%9.2f",b.sno,b.name,b.auth,b.pub,b.price);

gotoxy(2,10);cout<<"------------------------------------------------------
-----------------------";
      gotoxy(10,12);cout<<"STUDENT_ROLL  : ";
      cin>>i.roll;
      flushall();
      gotoxy(10,13);cout<<"STUDENT_NAME  : ";
      gets(i.name);
      flushall();
      gotoxy(10,14);cout<<"COURSE_CODE   : ";
      gets(i.code);
      flushall();
      gotoxy(10,15);cout<<"ISSUE_DATE    : ";
      cin>>i.dt;
      gotoxy(28,15);cout<<"-";cin>>i.mn;
      gotoxy(31,15);cout<<"-";cin>>i.yr;
      flushall();
      gotoxy(10,17);cout<<"Do you want to save(Y/N): ";
      choice=getche();
      if(choice=='y')
       fwrite(&i,recsize,1,fp);
       goto a;
      }
   }

gotoxy(2,7);cout<<"-------------------------------------------------------
----------------------";
    gotoxy(2,8);cout<<"BOOK_NO: "<<i.sno<<" IS NOT IN LIBRARY ! ";

gotoxy(2,9);cout<<"-------------------------------------------------------
----------------------";
   a:
    gotoxy(10,18);cout<<"Issue Another Book (Y/N): ";
    fflush(stdin);
    another=getche();
  }
  clrscr();
  fclose(ft);
  fclose(fp);
  return;
}

void library::bookreturn()
{
  int temp=0;
  FILE *fm,*ff;
  fp = fopen ("BRETURN.DAT","rb+");
  if(fp == NULL)
   {
    fp = fopen ("BRETURN.DAT","wb+");
    if(fp == NULL)
     {
      puts("Can not open file");
      exit(0);
     }
   }
  ft=fopen("RECORD.DAT","rb");
  fe=fopen ("BISSUE.DAT","rb+");
  recsize=sizeof(r);
  fseek(fp,0,SEEK_END);
  another='y';
  choice='y';
  rewind(fp);
  while(fread(&r,recsize,1,fp)==1)
  {
   temp=r.sl;
   }
  while(another=='y')
  {
   textbackground(9);
   clrscr();
   flash();
   textattr(697);
   textcolor(692);
   gotoxy(3,4);cprintf("                         [      BOOKS
       ]                      ");
   textattr(7);
   r.sl=temp+1;
   temp++;
   gotoxy(10,11);cout<<"BOOK_NO       : ";
   cin>>r.sno;
   flushall();
   rewind(ft);
   while(fread(&b,sizeof(b),1,ft)==1)
   {
    if (r.sno==b.sno)
     {
      rewind(fe);
      while(fread(&i,sizeof(i),1,fe)==1)
      {
       if(r.sno==i.sno)
       {
	gotoxy(2,7);cout<<"BOOK_NO  BOOKS_NAME         ISSUED TO          ROLL
C_CODE    ISSUE_DATE  ";

gotoxy(2,8);cout<<"-------------------------------------------------------
----------------------";
	gotoxy(2,9);cprintf(" %-6d  %-17.17s  %-16.16s   %-5d  %-8.8s
%02d-%02d-%02d ",i.sno,b.name,i.name,i.roll,i.code,i.dt,i.mn,i.yr);

gotoxy(2,10);cout<<"------------------------------------------------------
-----------------------";
	gotoxy(10,12);cout<<"STUDENT_ROLL  : ";
	cin>>r.roll;
	flushall();
	gotoxy(10,13);cout<<"STUDENT_NAME  : ";
	gets(r.name);
	flushall();
	gotoxy(10,14);cout<<"COURSE_CODE   : ";
	gets(r.code);
	flushall();
	gotoxy(10,15);cout<<"RETURN_DATE   : ";
	cin>>r.dt;
	gotoxy(28,15);cout<<"-";cin>>r.mn;
	gotoxy(31,15);cout<<"-";cin>>r.yr;
	flushall();
  /*
  int total,tmp=0,d=0,m=0,y=0;
  float fine;

   ff = fopen ("FINE.DAT","rb+");
   if(ff == NULL)
   {
    ff = fopen ("FINE.DAT","wb+");
    if(ff == NULL)
     {
     puts("File Not Found");
     exit(0);
     }
    }

 if (r.dt>=i.dt)
   {
    d=r.dt-i.dt;
    if(r.mn>=i.mn)
      {
       m=r.mn-i.mn;
       y=r.yr-i.yr;
      }
    else
     {
       r.yr=r.yr-1;
       r.mn=r.mn+12;
       m=r.mn-i.mn;
       y=r.yr-i.yr;
     }
   }
 else
   {
    r.mn=r.mn-1;
    r.dt=r.dt+30;
    d =r.dt-i.dt;
    if(r.mn>=i.mn)
      {
      m=r.mn-i.mn;
      y=r.yr-i.yr;
      }
    else
      {
      r.yr=r.yr-1;
      r.mn=r.mn+12;
      m=r.mn-i.mn;
      y=r.yr-i.yr;
      }
   }
 total=d+(m*30)+(y*12*30);
 if (total>=7)
 {
  total=total-7;
  fine=total*1.00;
  recsize=sizeof(f);
  fseek(ff,0,SEEK_END);
  rewind(ff);
  while(fread(&f,recsize,1,ff)==1)
  {
   tmp=f.sno;
   }
  f.sno=tmp+1;
  f.roll=i.roll;
  strcpy(f.name,i.name);
  strcpy(f.code,i.code);
  f.amt=fine;
  fwrite(&f,recsize,1,ff);
  }
*/

	gotoxy(10,16);cout<<"Do you want to save(Y/N): ";
	choice=getche();
	if(choice=='y')
	{
	 fwrite(&r,recsize,1,fp);
	 fm=fopen("TEMP.DAT","wb");
	 rewind(fe);
	 while(fread(&i,sizeof(i),1,fe)==1)
	 {
	  if(r.sno!=i.sno)
	  fwrite(&i,sizeof(i),1,fm);
	 }
	 fclose(fe);
	 fclose(fm);
	 remove("BISSUE.DAT");
	 rename("TEMP.DAT","BISSUE.DAT");
	 fe=fopen("BISSUE.DAT","rb+");
	}
	goto a;
       }
      }
     }
   }

gotoxy(2,7);cout<<"-------------------------------------------------------
----------------------";
    gotoxy(2,8);cout<<"BOOK_NO: "<<r.sno<<" IS NOT ISSUED BOOK ! ";

gotoxy(2,9);cout<<"-------------------------------------------------------
----------------------";
   a:
    gotoxy(10,17);cout<<"Return Another Book (Y/N): ";
    fflush(stdin);
    another=getche();
  }
  clrscr();
  fclose(ft);
  fclose(fp);
  fclose(fe);
  return;
}


void library::querybystd()
{
  int c=0;
  fp=fopen("RECORD.DAT","rb");
  ft=fopen("BISSUE.DAT","rb");
  textbackground(9);
  clrscr();
  flash();
  textattr(697);
  textcolor(692);
  gotoxy(3,4);cprintf("                         [    Queries by
dent    ]                      ");
  textattr(7);
  gotoxy(10,13);cout<<"Student's Roll: ";
  cin>>q.roll;
  flushall();
  gotoxy(10,14);cout<<"Course Code   : ";
  gets(q.code);
  flushall();
  textbackground(9);
  clrscr();
  flash();
  textattr(697);
  textcolor(692);
  gotoxy(3,4);cprintf("                         [    Queries by
dent    ]                      ");
  textattr(7);
  rewind(ft);
  while(fread(&i,sizeof(i),1,ft)==1)
     {
      if((strcmpi(q.code,i.code)==0)&&(q.roll==i.roll))
      {
       textattr(7);
       gotoxy(55,22);cout<<"Roll: "<<q.roll;
       gotoxy(55,23);cout<<"Name: "<<i.name;
       gotoxy(2,7);cout<<"BOOK_NO.  BOOKS_NAME              AUTHOR
PUBLICATION   ISSUE_DATE  ";

gotoxy(2,8);cout<<"-------------------------------------------------------
----------------------";
       gotoxy(2,9+c);cout<<"
";
       rewind(fp);
       while(fread(&b,sizeof(b),1,fp)==1)
	{
	 while(i.sno==b.sno)
	  {
	   gotoxy(2,9+c);cprintf(" %-6d   %-20.20s    %-13.13s    %-11.11s
%02d-%02d-%02d    ",i.sno,b.name,b.auth,b.pub,i.dt,i.mn,i.yr);

gotoxy(2,10+c);cout<<"----------------------------------------------------
-------------------------";
	   c++;
	   break;
	  }
	 }
	gotoxy(50,20);cout<<" Total Number of Books: "<<c;
       }
     }
   if(c<=0)
     {
      gotoxy(10,12);cout<<"------------------------RECORD NOT
FIND---------------------- ";
      }

   getch();
   clrscr();
   return ;
}
/*
void querybybook()
{

  int bno;
  clrscr();
  flash();
  textattr(500);
  gotoxy(3,4);cprintf("                         [     Queries by
     ]                      ");
  textattr(7);
  gotoxy(10,13);printf("Book's Sl.No. : ");
  scanf("%d",&bno);
  flushall();
  gotoxy(55,20);puts("Under Construction ");
  getch();
  textattr(7);
  clrscr();
  return;
}

void latefine()
{
  int
total,d=0,m=0,y=0,d1=e.dt,d2=r.dt,m1=e.mn,m2=r.mn,y1=e.yr,y2=r.yr;
  float fine;

   fp = fopen ("FINE.DAT","rb+");
   if(fp == NULL)
   {
    fp = fopen ("FINE.DAT","wb+");
    if(fp == NULL)
     {
     puts("File Not Found");
     exit(0);
     }
    }

 if (r.dt>=e.dt)
   {
    d=r.dt-e.dt;
    if(r.mn>=e.mn)
      {
       m=r.mn-e.mn;
       y=r.yr-e.yr;
      }
    else
     {
       r.yr=r.yr-1;
       r.mn=r.mn+12;
       mn=r.mn-b.mn;
       y=r.yr-e.yr;
     }
   }
 else
   {
    r.mn=r.mn-1;
    r.dt=r.dt+30;
    d =r.dr-e.dt;
    if(r.mn>=e.mn)
      {
      m=r.mn-e.mn;
      y=r.yr-e.yr;
      }
    else
      {
      r.yr=r.yr-1;
      r.mn=r.mn+12;
      m=r.mn-e.mn;
      y=r.yr-e.yr;
      }
   }
 total=d+(m*30)+(y*12*30);
 if (total>=7)
 {
  total=total-7;
  fine=total*1.00;
  }

  clrscr();
  flash();
  textattr(500);
  gotoxy(3,4);cprintf("                         [    Late Fine
ils     ]                      ");
  textattr(7);
  gotoxy(3,7);printf("Sl.No.  Roll No    Name of Students
Course
code    Late Fine (Rs)   ");

gotoxy(2,8);printf("------------------------------------------------------
-----------------------");
  gotoxy(3,10);printf(" Difference date      :%02d-%02d-%02d
",d,m,y);
  gotoxy(3,11);printf(" Late Fine of %d days is Rs. %.2f",total,fine);
  gotoxy(55,20);puts("Under Construction ");
  getch();
  textattr(7);
  clrscr();
  return;
}
*/
void library::issuelist()
{
  int c=1;
  fp = fopen("BISSUE.DAT","rb+");
  ft = fopen("RECORD.DAT","rb+");
  recsize=sizeof(i);
  rewind(fp);
  textbackground(9);
  clrscr();
  flash();
  textattr(697);
  textcolor(692);
  gotoxy(3,4);cprintf("                         [   ISSUED BOOKS
TAILS   ]                      ");
  textattr(7);
  gotoxy(2,7);cout<<" ISSUED TO      ROLL  C_Code  BOOK_NO  BOOKS_NAME
AUTHOR     ISSUE_DATE ";

gotoxy(2,8);cout<<"-------------------------------------------------------
----------------------";
  while (fread (&i,recsize,1,fp) == 1)
  {
  flash();
  textattr(697);
  textcolor(692);
  gotoxy(3,4);cprintf("                         [   ISSUED BOOKS
TAILS   ]                      ");
  textattr(7);
  gotoxy(2,8+c);
  cprintf(" %-15.15s ",i.name);
  cprintf(" %-3d ",i.roll);
  cprintf(" %-6.6s ",i.code);
  cprintf("  %-5d",i.sno);
  fflush(stdin);
    rewind(ft);
   while(fread(&b,sizeof(b),1,ft)==1)
   {
    if (i.sno==b.sno)
    {
     cprintf(" %-14.14s  ",b.name);
     cprintf(" %-10.10s ",b.auth);
     }
    }
  cprintf(" %02d-%02d-%02d  ",i.dt,i.mn,i.yr);
  c++;
  if(c>10)
   {
    c=1;
    gotoxy(55,20);cout<<"Press key to next ";
    getch();
    textbackground(9);
    clrscr();
    flash();
    textattr(697);
    textcolor(692);
    gotoxy(3,4);cprintf("                         [ ISSUED BOOKS
ILS     ]                      ");
    textattr(7);
    gotoxy(2,7);cout<<"Sl.No. ISSUED TO        ROLL  C_Code  BOOK_NO
BOOKS_NAME       ISSUE_DATE ";

gotoxy(2,8);cout<<"-------------------------------------------------------
----------------------";
   }
  }
  gotoxy(60,20);cout<<"End of List ";
  getch();
  clrscr();
  return;
}

void library::returnlist()
{
  int c=1;
  fp = fopen ("BRETURN.DAT","rb+");
  ft = fopen ("RECORD.DAT","rb+");
  recsize=sizeof(r);
  rewind(fp);
  textbackground(9);
  clrscr();
  flash();
  textattr(697);
  textcolor(692);
  gotoxy(3,4);cprintf("                         [  RETURNED BOOKS
ETAILS  ]                      ");
  textattr(7);
  gotoxy(2,7);cout<<"Sl.No. RETURNED BY      ROLL  C_Code  BOOK_NO
BOOKS_NAME       RETURN_DATE";

gotoxy(2,8);cout<<"-------------------------------------------------------
----------------------";
  while (fread (&r,recsize,1,fp) == 1)
  {
   flash();
   textattr(697);
   textcolor(692);
   gotoxy(3,4);cprintf("                         [  RETURNED BOOKS
DETAILS ]                      ");
   textattr(7);
   gotoxy(2,8+c);
   cprintf(" %-5d",r.sl);
   cprintf(" %-16.16s ",r.name);
   cprintf(" %-3d ",r.roll);
   cprintf(" %-8.8s ",r.code);
   cprintf(" %-5d ",r.sno);
   rewind(ft);
   while(fread(&b,sizeof(b),1,ft)==1)
   {
    if (r.sno==b.sno)
    cprintf(" %-16.16s  ",b.name);
    }
   cprintf(" %02d-%02d-%02d   ",r.dt,r.mn,r.yr);
   c++;
   if(c>10)
    {
    c=1;
    gotoxy(55,20);
    cout<<"Press key to next ";
    getch();
    textbackground(9);
    clrscr();
    flash();
    textattr(697);
    textcolor(692);
    gotoxy(3,4);cprintf("                         [  RETURNED BOOKS
DETAILS  ]                      ");
    textattr(7);
    gotoxy(2,7);cout<<"Sl.No. RETURNED BY      ROLL  C_Code  BOOK_NO
BOOKS_NAME       RETURN_DATE";

gotoxy(2,8);cout<<"-------------------------------------------------------
----------------------";
    }
  }
  gotoxy(60,20);cout<<"End of List ";
  getch();
  clrscr();
  return;
}

void library::modifyentry()
{
 int sn;
 fp=fopen("RECORD.DAT","rb+");
 recsize=sizeof(b);
 another='y';
 while(another=='y')
   {
    textbackground(9);
    clrscr();
    flash();
    textattr(697);
    textcolor(692);
    gotoxy(3,4);cprintf("                         [      MODIFY
DS      ]                      ");
    textattr(7);
    gotoxy(10,8);cout<<"Enter BOOK_NO to Modify: ";
    cin>>sn;
    rewind(fp);
    while(fread(&b,recsize,1,fp)==1)
     {
      if(sn==b.sno)
       {
	clrscr();
	flash();
	textattr(697);
	textcolor(692);
	gotoxy(3,4);cprintf("                         [      MODIFY RECORDS
]
");
	textattr(7);
	gotoxy(2,7);printf("BOOK_NO  BOOKS_NAME            AUTHOR
PUBLICATION        PRICE  ");

gotoxy(2,8);cout<<"-------------------------------------------------------
----------------------";
	gotoxy(2,9);printf(" %-6d  %-20.20s  %-18.18s  %-15.15s
%9.2f",b.sno,b.name,b.auth,b.pub,b.price);

gotoxy(2,10);cout<<"------------------------------------------------------
-----------------------";
	gotoxy(10,12);cout<<"Enter new entries: ";
	gotoxy(10,13);cout<<"BOOK_NO       : "<<b.sno;
	flushall();
	gotoxy(10,14);cout<<"BOOKS_NAME    : ";
	gets(b.name);
	flushall();
	gotoxy(10,15);cout<<"AUTHOR        : ";
	gets(b.auth);
	flushall();
	gotoxy(10,16);cout<<"PUBLICATION   : ";
	gets(b.pub);
	flushall();
	gotoxy(10,17);cout<<"PRICE         : ";
	cin>>b.price;
	fflush(stdin);
	fseek(fp,-recsize,SEEK_CUR);
	fwrite(&b,recsize,1,fp);
       }
      else
       {
	flash();
	textattr(697);
	textcolor(692);
	gotoxy(3,4);cprintf("                         [      MODIFY
DS      ]                      ");
	textattr(7);
	gotoxy(10,12);cout<<"------------------------NO RECORD
FOUND----------------------- ";
       }
     }
     gotoxy(45,19);cout<<" Modify another records(Y/N): ";
     fflush(stdin);
     another=getche();
   }
  clrscr();
  fclose(fp);
  return;
}

void library::delreturn()
{
 int sn;
 fp=fopen("BRETURN.DAT","rb+");
 recsize=sizeof(r);
 another='y';
 while(another=='y')
   {
    textbackground(9);
    clrscr();
    flash();
    textattr(697);
    textcolor(692);
    gotoxy(3,4);cprintf("                         [      DELETE
DS      ]                      ");
    textattr(7);
    gotoxy(10,8);cout<<"Enter BOOK_NO to Delete: ";
    cin>>sn;
    ft=fopen("TEMP.DAT","wb");
    rewind(fp);
    while(fread(&r,recsize,1,fp)==1)
     {
      if(sn!=r.sno)
	fwrite(&r,recsize,1,ft);
      }
    fclose(fp);
    fclose(ft);
    remove("BRETURN.DAT");
    rename("TEMP.DAT","BRETURN.DAT");
    fp=fopen("BRETURN.DAT","rb+");
    textbackground(9);
    clrscr();
    flash();
    textattr(697);
    textcolor(692);
    gotoxy(3,4);cprintf("                         [      DELETE
DS      ]                      ");
    textattr(7);
    gotoxy(10,12);cout<<"------------------------RECORD
DELETED----------------------- ";
    gotoxy(45,19);cout<<"Delete Another(y/n): ";
    fflush(stdin);
    another=getche();
   }
 clrscr();
 fclose(fp);
 return;
}



int main()
{
  library gen,issue,retrn,query;
  int m;
  static char *popup[13]={"01. LIST OF BOOKS","02. LIST OF ISSUED BOOKS
","03. LIST OF RETURNED BOOKS","04. BOOKS ISSUE  ","05. BOOKS RETURN
","06. BOOKS PURCHAGE ","07. MODIFY PURCHAGE","08. DELETE RETURN","09.
QUERY BY BOOK","10. QUERY BY STUDENT ","11. LATE FINE DETAILS","12.
ABOUT
APPLICATION","13. EXIT"};
//   int gdriver = DETECT, gmode, errorcode;
//   initgraph(&gdriver, &gmode, "");
//   closegraph();
  do
  {
   textbackground(9);
   clrscr();
   gen.flash();
   textattr(697);
   textcolor(692);
   gotoxy(3,4);cprintf("
");
   textattr(917);
   textcolor(2);
   gen.boxb(6,13,20,65,"D");
   gotoxy(28,21); cprintf("SELECT HIGHLIGHTED OPTION");
   m=gen.menu(498,7,30,13,popup);
   gotoxy(70,24);
   if(m==1)
    {
     flushall();
     textattr(7);
     clrscr();
     gen.booklist();
    }
   if(m==2)
    {
     flushall();
     textattr(7);
     clrscr();
     issue.issuelist();
    }
   if(m==3)
    {
    flushall();
    textattr(7);
    clrscr();
    retrn.returnlist();
    }
   if(m==4)
   {
   flushall();
   textattr(7);
   clrscr();
   issue.bookissue();
   }
   if(m==5)
   {
   flushall();
   textattr(7);
   clrscr();
   retrn.bookreturn();
   }
   if(m==6)
   {
   flushall();
   textattr(7);
   clrscr();
   gen.bookpurchage();
   }
   if(m==7)
   {
   flushall();
   textattr(7);
   clrscr();
   gen.modifyentry();
   }
   if(m==8)
   {
   flushall();
   textattr(7);
   clrscr();
   retrn.delreturn();
   }
   if(m==9)
   {
   flushall();
   textattr(7);
   clrscr();
//   query.querybybook();
   }
   if(m==10)
   {
   flushall();
   textattr(7);
   clrscr();
   query.querybystd();
   }
   if(m==11)
   {
   flushall();
   textattr(7);
   clrscr();
//   latefine();
   }
   if(m==12)
   {
   flushall();
   textattr(7);
   clrscr();
   gen.about();
   }
   if(m==13)
   {
   flushall();
   textattr(7);
   clrscr();
   exit(0);
   }
  }while(m!=13);


 return 0;
}



