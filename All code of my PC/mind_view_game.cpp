#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<dos.h>
#include<process.h>
#include<math.h>
void display(char* a,int v)
{
  int j=strlen(a);
  for(int i=0;i<j;i++)
  {cout<<a[i];
   delay(v);
}
}
void main()
{int i, j;
clrscr();
for (i=3; i<9; i++)
{
    for (j=0; j<80; j++)
       cprintf("C");
    cprintf("
");
    textcolor(i+1);
    textbackground(i);
}
clrscr();
int m=14;
textcolor(m+128);
cout<<"








";
display("*****    *****  ******  *****      ***  ********
",10);
display("*** **  ** ***  ******  *** **     ***  ***    ***
",10);
display("***  ****  ***    **    ***  **    ***  ***     ***
",10);
display("***        ***    **    ***   **   ***  ***     ***
",10);
cout<<"
";
cout<<"*****    *****  ******  *****      ***  ********
";
cout<<"*** **  ** ***  ******  *** **     ***  ***    ***
";
cout<<"***  ****  ***    **    ***  **    ***  ***     ***
";
cout<<"***        ***    **    ***   **   ***  ***     ***
";
cout<<"***        ***    **    ***    **  ***  ***     ***
";
cout<<"***        ***  ******  ***     ** ***  ***    ***
";
cout<<"***        ***  ******  ***      *****  ********
";
cout<<"
";
cout<<"                        ***           ***  ******  *********  ***
***
";
cout<<"                         ***         ***   ******  *********  ***
***
";
cout<<"                          ***       ***      **    ***        ***
***
";
cout<<"                           ***     ***       **    ******     ***
***
";
cout<<"                            ***   ***        **    ***        ***
****  ***
";
cout<<"                             *** ***       ******  *********  ***
**  ** ***
";
cout<<"                              *****        ******  *********  *****
*****
";
cout<<"
";
int n=13;
textcolor(n+128);
display("                           ***     ***       **    ******     ***
***
",10);
display("                            ***   ***        **    ***        ***
****  ***
",10);
display("                             *** ***       ******  *********  ***
**  ** ***
",5);
display("                              *****        ******  *********
*****    *****
",5);
int q=2;
textcolor(q+128);
gotoxy(1,47);
cprintf("TO VIEW FULL SCREEN, RIGHT CLICK ICON----> GOTO
PROPERTIES---->SCREEN---->USAGE---->FULLSCREEN
");
cout<<"
";
int o=4;
textcolor(o+128);
gotoxy(1,42);
cprintf("WARNING:
");
int p=15;
textcolor(p);
gotoxy(1,43);
cprintf("^^^^^^^^
");
int u=11;
textcolor(u);
gotoxy(1,47);
gotoxy(1,45);
display("WE RECOMMEND TO USE MIND VIEW DIRECTLY FROM FLOPPY DISK FOR BEST
RESULTS  ",100);
long int b,e,ch;
anoop:
clrscr();
for (i=5; i<14; i++)
{
    for (j=0; j<80; j++)
       cprintf("MINDVIEW");
    cprintf("
");
    textcolor(i+1);
    textbackground(i);
}
cout<<"



";
int w=6;
textcolor(w);
cout<<"                                   MAIN MENU
";
cout<<"                                   *********
";
cout<<"                                   1. ABOUT YOU
";
cout<<"                                   ************
";
cout<<"                                   2. LOVE CALCULATOR
";
cout<<"                                   ******************
";
cout<<"                                   3. ABOUT MIND VIEW
";
cout<<"                                   ******************
";
cout<<"                                   4. CREDITS
";
cout<<"                                   **********
";
cout<<"



                        Enter Your choice
";
cout<<"
















";
cout<<"*****    *****  ******  *****      ***  ********
";
cout<<"*** **  ** ***  ******  *** **     ***  ***    ***
";
cout<<"***  ****  ***    **    ***  **    ***  ***     ***
";
cout<<"***        ***    **    ***   **   ***  ***     ***
";
cout<<"***        ***    **    ***    **  ***  ***     ***
";
cout<<"***        ***  ******  ***     ** ***  ***    ***
";
cout<<"***        ***  ******  ***      *****  ********
";
cout<<"
";
cout<<"                        ***           ***  ******  *********  ***
***
";
cout<<"                         ***         ***   ******  *********  ***
***
";
cout<<"                          ***       ***      **    ***        ***
***
";
cout<<"                           ***     ***       **    ******     ***
***
";
cout<<"                            ***   ***        **    ***        ***
****  ***
";
cout<<"                             *** ***       ******  *********  ***
**  ** ***
";
cout<<"                              *****        ******  *********  *****
*****
";
cin>>ch;
clrscr();
char a=201,b1=187,c=200,d=188;
char block=178,h=205,v=186;
char string[240];
string[0]=a;
for(int i1=1;i1<79;i1++)
string[i1]=h;
string[79]=b1;
string[80]=v;
for(i1=81;i1<159;i1++)
string[i1]=' ';
string[159]=v;
string[160]=c;
for(i1=161;i1<239;i1++)
string[i1]=h;
string[239]=d;
for(i1=81;i1<159;i1++)
{
cout<<string;
string[i1]=block;
display("





				l",2);
display("o",2);
display("a",2);
display("d",2);
display("i",2);
display("n",2);
display("g",2);
cout<<"
























";
cout<<"";    delay(2);
clrscr();
}
cout<<"
";
clrscr();
switch(ch)
{
case 1:
{
ofstream filout;
filout.open("Data.mv",ios::app);
{
char a[50],c[50],d[50],i[50];
{
long int i,j,y1,b1,t1,t2,t3;
clrscr();
for (i=1; i<4; i++)
{
    for (j=0; j<80; j++)
       cprintf("M I N D V I E W ");
    cprintf("
");
    textcolor(i+1);
    textbackground(i);
}
int ln;
char b2[15],b3[50],t4[10],t5[50],p1[200],p2[200],p3[200],p4[200],p5[200];
clrscr();
cout<<"NAME: ";
gets(a);
cout<<"
ENTER YOUR MORE DETAILS

";
cout<<" Birth Date:  ";
cin>>b;
cout<<"
";
cout<<"      Month: ";
gets(b2);
cout<<"
";
cout<<"       Year: ";
cin>>y1;
cout<<"
";
cout<<" Birth Time
";
cout<<"
";
cout<<"        Hours: ";
cin>>t1;
cout<<"
";
cout<<"      Minutes: ";
cin>>t2;
cout<<"
";
cout<<"      Seconds: ";
cin>>t3;
cout<<"
";
cout<<"     am or pm: ";
cin>>t4;
cout<<"
";
cout<<" Birth Place: ";
cin>>b3;
cout<<"
";
cout<<" Nakshatra: ";
cin>>t5;
cout<<"
";
cout<<"




    SOME SECRET QUESTIONS";
display("....
",50);
cout<<"    ***************************



";
cout<<"   Do you ever fall in LOVE ?		(Enter YES or NO)

";
cin>>p4;
cout<<"


   If YES with WHOM ?		If NO enter NO ONE

";
cin>>p5;
cout<<"




    SOME PERSONAL QUESTIONS";
display("....
",50);
cout<<"    ***************************



";
cout<<"  YOUR FRIENDS:

";
cin>>p1;
cout<<"

";
cout<<"       HOBBIES:

";
cin>>p2;
cout<<"

";
cout<<"      AMBITION:

";
cin>>p3;
cout<<"      Enter your LUCKY NUMBER:

";
int lk;
cin>>lk;
cout<<"









				";
if(lk>=100&&lk>=99)
cout<<"YOU ARE HIGHLY AMBITIOUS";
else if(lk<=5&&lk>=0)
cout<<"YOU HAVE GOOD FRIENDS";
else if(lk<=10&&lk>=8)
cout<<"YOU ARE VERY LOVABLE.KEEP IT UP ";
else if(lk<=20&&lk>=9)
cout<<"YOU ARE SO CUTE... ";
else if(lk<=30&&lk>=21)
cout<<"YOU ARE SO OPEN HEARTED... ";
else if(lk<=40&&lk>=31)
cout<<"YOU ARE SO BEAUTIFUL MINDED... ";
else
cout<<"YOU ARE SO GENEROUS.. KEEP IT UP";
filout<<"
Name: "<<a<<"
 Birth Date: "<<b<<"
      Month: "<<b2<<"

Year: "<<y1<<"
 Birth Time: "<<t1<<" hrs "<<t2<<" mins "<<t3<<" secs
"<<t4<<"
Birth Place: "<<b3<<"
Nakshatra: "<<t5<<"
Friends:
"<<p1<<"
Hobbies: "<<p2<<"
Ambition: "<<p3<<"
Ever fall in LOVE:
"<<p4<<"
With WHOM: "<<p5<<"
Lucky Number:
"<<lk<<"
****************************************************************
*************************************************************";
}
display("



			",5);
display("PRESS ANY KEY TO CONTINUE",112);
getch();
clrscr();
goto anoop1;
}
break;
}
case 2:
{
ofstream filout;
filout.open("pair.mv",ios::app);
{
{
int i, j;
clrscr();
for (i=6; i<8; i++)
{
    for (j=0; j<80; j++)
       cprintf("M I N D V I E W ");
    cprintf("
");
    textcolor(i+1);
    textbackground(i);
}}
long int u,o,m;
clrscr();
cout<<"             TURN YOUR CAPS LOCK ON FOR PROPER FUNCTIONING";
cout<<"
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

";
char a[25];
long int k,l,d1,m1,y1,d2,m2,y2,k2,k3;
cout<<"         Enter Your Name


";
cin>>a;
cout<<"         Enter Your Birthday   (dd-mm-yyyy)


";
cin>>d1>>m1>>y1;
cout<<"


         Enter Your Pair's Name


";
char ab[25];
cin>>ab;
cout<<"         Enter Your Pair's Birthday   (dd-mm-yyyy)
";
cin>>d2>>m2>>y2;
k=(a[0]-a[1]-a[2]+a[3]+a[4]-a[5]+a[6]+a[7]+a[8]+a[9]+a[10]+a[11]+a[12]+a[1
3]-a[14]+a[15]+a[16]+a[17]-a[18]+a[19]+a[20]+a[21]+a[22]+a[23]+a[24]+a[25]
+a[26]-ab[0]-ab[1]+ab[2]-ab[3]+ab[4]+ab[5]-ab[6]+ab[7]+ab[8]+ab[9]+ab[10]+
ab[11]-ab[12]+ab[13]+ab[14]+ab[15]+ab[16]+ab[17]+ab[18]+ab[19]+ab[20]+ab[2
1]+ab[22]+ab[23]+ab[24]+ab[25]+ab[26])/200*7.51;
k2=(d1+m1+y1+d2/y2+m2);
k3=k2/25;
clrscr();
cout<<"


           Your Name is "<<a<<"
";
cout<<"


           Your Birthday is on  "<<d1<<" - "<<m1<<" - "<<y1;
cout<<"


         Your Lover's Name is "<<ab<<"
";
cout<<"


           Your Lover's Birthday is on  "<<d2<<" - "<<m2<<" -
"<<y2;
cout<<"



         MATCH POINTS  "<<k3<<" out of 100";
cout<<"









				";
if(k3>=100&&k3>=99)
cout<<"WRECKED";
else if(k3<=20&&k3>=0)
cout<<"FIND ANOTHER GUY";
else if(k3<=50&&k3>=21)
cout<<"NOT GOOD MATCHING";
else if(k3<=80&&k3>=51)
cout<<"GOOD MATCHING";
else
cout<<"MADE FOR EACH OTHER";
filout<<"
"<<a<<" likes
"<<ab<<"
****************************************************************
*************************************************************";
display("



			PRESS ANY KEY TO CONTINUE",112);
getch();
clrscr();
goto anoop1;
}
break;
}
case 3:
{
{
int i, j;
clrscr();
for (i=6; i<15; i++)
{
    for (j=0; j<80; j++)
       cprintf("M I N D V I E W ");
    cprintf("
");
    textcolor(i+1);
    textbackground(i);
}}
clrscr();
cout<<"




















Created by";
display("......
",1000);
cout<<"

ANOOP THOMAS JOY
";
cout<<"

KRISHNAKUMAR.K
";
cout<<"














                         Please send
suggestions to   atjapril87@yahoo.co.in
";
display("



			PRESS ANY KEY TO CONTINUE",112);
getch();
clrscr();
goto anoop1;

break;
case 4:
{
int i, j;
clrscr();
for (i=3; i<10; i++)
{
    for (j=0; j<80; j++)
       cprintf("M I N D V I E W ");
    cprintf("
");
    textcolor(i+1);
    textbackground(i);
}
cout<<"*****    *****  ******  *****      ***  ********
";
cout<<"*** **  ** ***  ******  *** **     ***  ***    ***
";
cout<<"***  ****  ***    **    ***  **    ***  ***     ***
";
cout<<"***        ***    **    ***   **   ***  ***     ***
";
cout<<"***        ***    **    ***    **  ***  ***     ***
";
cout<<"***        ***  ******  ***     ** ***  ***    ***
";
cout<<"***        ***  ******  ***      *****  ********
";
cout<<"
";
cout<<"                        ***           ***  ******  *********  ***
***
";
cout<<"                         ***         ***   ******  *********  ***
***
";
cout<<"                          ***       ***      **    ***        ***
***
";
cout<<"                           ***     ***       **    ******     ***
***
";
cout<<"                            ***   ***        **    ***        ***
****  ***
";
cout<<"                             *** ***       ******  *********  ***
**  ** ***
";
cout<<"                              *****        ******  *********  *****
*****
";
display("







       Behind MIND VIEW....

",200);
display("        ANOOP THOMAS JOY

        KRISHNAKUMAR.K


SHYAMKUMAR.T

",200);
display("

       Our Special Thanks To....

",200);
display("        OUR TEACHERS

        ARUN JOSE


AMRITHLAL.V.S

",200);
display("



			PRESS ANY KEY TO CONTINUE",112);
getch();
clrscr();
goto anoop1;
break;
}
{
default:
clrscr();
int i, j;
clrscr();
for (i=2; i<11; i++)
{
    for (j=0; j<80; j++)
       cprintf(" MIND VIEW ");
    cprintf("
");
    textcolor(i+1);
    textbackground(i);
}
cout<<"


















                  Your Choice
is Incorrect.Please Choose a Valid One.
";
goto anoop1;
}}
getch();
}
anoop1:
cout<<"














                Enter your
choice...(1,2)
";
cout<<"                ^^^^^^^^^^^^^^^^^^^^^^^^^

";
cout<<"                 1. GO TO MAIN MENU

";
cout<<"                 2. EXIT MIND VIEW

";
int ch1;
cin>>ch1;
switch(ch1)
{
case 1:
clrscr();
display("
























				",5);
display("loading....",300);
goto anoop;
clrscr();
break;
default:
clrscr();
display("
























				",5);
display("loading....",300);
clrscr();
int ma=13;
textcolor(ma+128);
textmode(BW40);
cprintf("











 Thanks for using this program....
");
display("








	 ",5);
display("PLEASE WAIT WHILE EXITING....",500);
exit(0);
}
getch;
}
