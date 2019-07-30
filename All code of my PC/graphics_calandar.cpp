#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
union REGS i,o;
initmouse();
showmouse();
hidemouse();
void restrictmouse(int x1,int y1,int x2,int y2);
void getmousestatus( int *button,int *x,int *y);
void findday();
void menu();
void cal();
void main()
{
  clrscr();
  int gd=EGA,gm=EGAHI;
  initgraph(&gd,&gm,"c:\tc\bgi ");
  menu();
  getch();
  closegraph();
}
void findday()
{
  int k=1,m=11,mon,D,C,f,i,y,total=0,t,I,d,x1=115,y1=160,q,r,v;
  static int s=0;
  char st2[3],st3[9],st4[5];
  int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
  char
*month[]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST
","SEPTEMBER","OCTOBER","NOVEMBER","DECEMEBER"};
  restorecrtmode();
  cout<<"Enter year : ";
  cin>>y;
  cout<<"Enter month : ";
  cin>>mon;
  if(mon>12)
  {
     cout<<" Invalid entry !.....";
     delay(1000);
     setgraphmode(getgraphmode());
     menu();
  }
  y-=1;
  C=y/100;
  D=y%100;
  f=(k+((13*m-1)/5)+D+(D/4)+(C/4)-(2*C));
  i=f%7;
  if(i<0)
     i+=7;
  y++;
  if(y%4==0)
  days[1]=29;
  for(t=0;t<mon-1;t++)
  {
     total+=days[t];
  }
  I=total%7;
  d=I+i;
  if(d>=7)
     d=d%7;
  setgraphmode(getgraphmode());
  cal();
  v=mon-1;
  strcpy(st3,month[v]);
  itoa(y,st4,10);
  settextstyle(2,0,8);
  outtextxy(100,90,st3);
  outtextxy(250,90,st4);
  q=days[mon-1];
  settextstyle(1,0,2);
  setcolor(15);
  for(r=1;r<=d;r++)
  {
     x1+=62;
     s++;
  }
  for(r=1;r<=q;r++)
  {
     itoa(r,st2,10);
     if(s>=6)
     {
	outtextxy(x1,y1,st2);
	y1+=30;
	x1=112;
	s=0;
	continue;
     }
     outtextxy(x1,y1,st2);
     x1+=60;
     s++;
  }
  s=0;
  getch();
  menu();
}
void menu()
{
  cleardevice();
  int b,xx,yy;
  initmouse();
  restrictmouse(0,0,getmaxx(),getmaxy());
  setbkcolor(0);
  settextstyle(10,0,2);
  outtextxy(100,70,"***********MENU***********
");
  outtextxy(100,150,"=> MONTH'S CALENDAR
");
  outtextxy(100,200,"=> EXIT
");
  settextstyle(8,0,1);
  outtextxy(350,300,"Made By: Nigi");
  showmouse();
  while(!kbhit())
  {
     getmousestatus(&b,&xx,&yy);
     if(xx>=100&&yy>=150&&xx<=500&&yy<=200)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   findday();
	}
     }
     if(xx>=100&&yy>=200&&xx<=300&&yy<=260)
     {
	getmousestatus(&b,&xx,&yy);
	if(b&1==1)
	{
	   hidemouse();
	   cleardevice();
	   setbkcolor(0);
	   setcolor(15);
	   settextstyle(10,0,5);
	   outtextxy(100,200,"EXITING");
	   int o=0;
	   for(int n=0;n<10;n++)
	   {
	      outtextxy(380+o,200,".");
	      o+=20;
	      delay(200);
	   }
	   exit(0);
	}
     }
  }
}
void cal()
{
  cleardevice();
  int l=100,t=125,r=155,b=185,g,x=110,y=127;
  char *day[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
  char st1[4];
  setbkcolor(0);
  settextstyle(10,0,7);
  setcolor(15);
  outtextxy(100,-40,"C");
  settextstyle(10,0,6);
  outtextxy(160,-20,"ALENDAR");
  setfillstyle(1,BLUE);
  bar(85,115,530,345);
  setfillstyle(1,0);
  bar3d(l,t,r,b,0,0);
  bar3d(l,t+30,r,b+30,0,0);
  bar3d(l,t+60,r,b+60,0,0);
  bar3d(l,t+90,r,b+90,0,0);
  bar3d(l,t+120,r,b+120,0,0);
  bar3d(l,t+150,r,b+150,0,0);
  bar3d(l,t+180,r,b+150,0,0);
  bar3d(l+60,t,r+60,b,0,0);
  bar3d(l+60,t+30,r+60,b+30,0,0);
  bar3d(l+60,t+60,r+60,b+60,0,0);
  bar3d(l+60,t+90,r+60,b+90,0,0);
  bar3d(l+60,t+120,r+60,b+120,0,0);
  bar3d(l+60,t+150,r+60,b+150,0,0);
  bar3d(l+60,t+180,r+60,b+150,0,0);
  bar3d(l+120,t,r+120,b,0,0);
  bar3d(l+120,t+30,r+120,b+30,0,0);
  bar3d(l+120,t+60,r+120,b+60,0,0);
  bar3d(l+120,t+90,r+120,b+90,0,0);
  bar3d(l+120,t+120,r+120,b+120,0,0);
  bar3d(l+120,t+150,r+120,b+150,0,0);
  bar3d(l+120,t+180,r+120,b+150,0,0);
  bar3d(l+180,t,r+180,b,0,0);
  bar3d(l+180,t+30,r+180,b+30,0,0);
  bar3d(l+180,t+60,r+180,b+60,0,0);
  bar3d(l+180,t+90,r+180,b+90,0,0);
  bar3d(l+180,t+120,r+180,b+120,0,0);
  bar3d(l+180,t+150,r+180,b+150,0,0);
  bar3d(l+180,t+180,r+180,b+150,0,0);
  bar3d(l+240,t,r+240,b,0,0);
  bar3d(l+240,t+30,r+240,b+30,0,0);
  bar3d(l+240,t+60,r+240,b+60,0,0);
  bar3d(l+240,t+90,r+240,b+90,0,0);
  bar3d(l+240,t+120,r+240,b+120,0,0);
  bar3d(l+240,t+150,r+240,b+150,0,0);
  bar3d(l+240,t+180,r+240,b+150,0,0);
  bar3d(l+300,t,r+300,b,0,0);
  bar3d(l+300,t+30,r+300,b+30,0,0);
  bar3d(l+300,t+60,r+300,b+60,0,0);
  bar3d(l+300,t+90,r+300,b+90,0,0);
  bar3d(l+300,t+120,r+300,b+120,0,0);
  bar3d(l+300,t+150,r+300,b+150,0,0);
  bar3d(l+300,t+180,r+300,b+150,0,0);
  bar3d(l+360,t,r+360,b,0,0);
  bar3d(l+360,t+30,r+360,b+30,0,0);
  bar3d(l+360,t+60,r+360,b+60,0,0);
  bar3d(l+360,t+90,r+360,b+90,0,0);
  bar3d(l+360,t+120,r+360,b+120,0,0);
  bar3d(l+360,t+150,r+360,b+150,0,0);
  bar3d(l+360,t+180,r+360,b+150,0,0);
  settextstyle(1,0,2);
  setcolor(15);
  for(g=0;g<7;g++)
  {
     strcpy(st1,day[g]);
     outtextxy(x,y,st1);
     x+=60;
  }
}
initmouse()
{
  i.x.ax=0;
  int86(0x33,&i,&o);
  return(o.x.ax);
}
showmouse()
{
  i.x.ax=1;
  int86(0x33,&i,&o);
  return(o.x.ax);
}
hidemouse()
{
  i.x.ax=2;
  int86(0x33,&i,&o);
  return(o.x.ax);
}
void restrictmouse(int x1,int y1,int x2,int y2)
{
  i.x.ax=7;
  i.x.cx=x1;
  i.x.dx=x2;
  int86(0x33,&i,&o);
  i.x.ax=8;
  i.x.cx=y1;
  i.x.dx=y2;
  int86(0x33,&i,&o);
}
void getmousestatus(int *button,int *x,int *y)
{
  i.x.ax=3;
  int86(0x33,&i,&o);
  *button=o.x.bx;
  *x=o.x.cx;
  *y=o.x.dx;
}
