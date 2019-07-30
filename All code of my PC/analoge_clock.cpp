#include<stdio.h>
#include<math.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
//CLOCK CLASS
class clock
{
int h,m,s,thetamin,thetasec;
struct  time t;
public:
void time();
};
void clock::time()
{
int x=540,y=280,r=200,i;
char n[12][3]={"3","2","1","12","11","10","9","8","7","6","5","4"};
struct REGPACK reg;

setcolor(15);
circle(x,y,88);
circle(x,y,89);
setcolor(6);
settextstyle(5,0,1);
for(i=0;i<12;i++)
{
if(i!=3)
outtextxy(x+(r-132)*cos(M_PI/6*i)-8,y-(r-132)*sin(M_PI/6*i)-16,n[i]);
else
outtextxy(x+(r-132)*cos(M_PI/6*i)-10,y-(r-132)*sin(M_PI/6*i)-16,n[i]);
}
gettime(&t);

printf("

























");
printf("%2d:%02d:%02d",t.ti_hour, t.ti_min,t.ti_sec);

reg.r_ax=3;
intr(0x33,®);
while(reg.r_bx!=1)
{
reg.r_ax=3;
intr(0x33,®);
setcolor(5);
setfillstyle(1,3);
circle(x,y,4);
floodfill(x,y,5);
gettime(&t);
if(t.ti_min!=m)
{
setcolor(0);
line(x,y,x+(r-150)*cos(thetamin*(M_PI/180)),y-(r-150)*sin(thetamin*(M_PI/1
80)));
circle(x+(r-200)*cos(thetamin*(M_PI/180)),y-(r-200)*sin(thetamin*(M_PI/180
)),10);
line(x,y,x+(r-165)*cos(M_PI/6*h-((m/2)*(M_PI/180))),y-(r-165)*sin(M_PI/6*h
-((m/2)*(M_PI/180))));
circle(x+(r-200)*cos(M_PI/6*h-((m/2)*(M_PI/180))),y-(r-200)*sin(M_PI/6*h-(
(m/2)*(M_PI/180))),10);
	 }
if(t.ti_hour>12)
t.ti_hour=t.ti_hour-12;
if(t.ti_hour<4)
h=abs(t.ti_hour-3);
else
h=15-t.ti_hour;
m=t.ti_min;
if(t.ti_min<=15)
thetamin=(15-t.ti_min)*6;
else
thetamin=450-t.ti_min*6;
if(t.ti_sec<=15)
thetasec=(15-t.ti_sec)*6;
else
thetasec=450-t.ti_sec*6;
setcolor(3);
line(x,y,x+(r-165)*cos(M_PI/6*h-((m/2)*(M_PI/180))),y-(r-165)*sin(M_PI/6*h
-((m/2)*(M_PI/180))));
circle(x+(r-200)*cos(M_PI/6*h-((m/2)*(M_PI/180))),y-(r-200)*sin(M_PI/6*h-(
(m/2)*(M_PI/180))),5);
line(x,y,x+(r-150)*cos(thetamin*(M_PI/180)),y-(r-150)*sin(thetamin*(M_PI/1
80)));
circle(x+(r-200)*cos(thetamin*(M_PI/180)),y-(r-200)*sin(thetamin*(M_PI/180
)),5);
setcolor(15);
line(x,y,x+(r-145)*cos(thetasec*(M_PI/180)),y-(r-145)*sin(thetasec*(M_PI/1
80)));
delay(100);
setcolor(0);
line(x,y,x+(r-145)*cos(thetasec*(M_PI/180)),y-(r-145)*sin(thetasec*(M_PI/1
80)));
}

}
//CALENADAR CLASS
class calendar
{
int mon,year,d;
static int s;
clock t;
public:
calendar()
{
year=2006;
mon=5;
   }
   int tday();
   void reqmon();
   void cal();
   void chose();
   displaymenu(char **month,int count,int x1,int y1);
   getresponse(char **month,int width,int count,int x1,int y1);
   highlight(char **month,int ch,int h,int x1,int y1,int width);
   dehighlight(char **month,int ch,int h,int x1,int y1,int width);
};
int calendar:: tday()
{
int t,total=1;
int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
   for(t=1;t<year;t++)
   {
    if(t%4==0)
    total=total+366;
    else
    total=total+365;
    }
  if(year%4==0)
  days[1]=29;
     for(t=0;t<mon-1;t++)
     {
     total=total+days[t];
     }
  d=total%7;
  return d;
  }
void calendar::reqmon()
{

int q,r,x1=40,y1=210;
int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
char st2[3],st3[9],st4[5];

  q=days[mon-1];
  settextstyle(1,0,2);
  setcolor(YELLOW);
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
	x1=40;
	s=0;
	continue;
     }
     outtextxy(x1,y1,st2);
     x1+=60;
     s++;
  }
  s=0;
  chose();

}
 void calendar::cal()
 {
  cleardevice();
  setgraphmode(getgraphmode());
  int l=17,t=175,r=70,b=235,g,x=25,y=177;
  char *day[]={"SUN","MON","TUE","WED","THU","FRI","SAT"};
  char st1[4];
  setbkcolor(0);
  setcolor(5);
  settextstyle(1,0,7);
  outtextxy(40,5,"Calendar & Clock");
  setfillstyle(3,BLUE);
  bar(10,165,440,395);
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
  setcolor(GREEN);
  for(g=0;g<7;g++)
  {
     strcpy(st1,day[g]);
     outtextxy(x,y,st1);
     x+=60;
  }
 }
void calendar::chose()
{
int width=0,i,count,xx,yy;
char st[5];
char
*month[]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST
","SEPTEMBER","OCTOBER","NOVEMBER","DECEMEBER"};
struct REGPACK reg;

rectangle(0,0,getmaxx(),getmaxy());
count=sizeof(month)/sizeof(char *);
setcolor(BROWN);
settextstyle(1,0,1);
rectangle(40,90,225,125);
setcolor(CYAN);
outtextxy(45,95,month[mon-1]);
setcolor(BROWN);
rectangle(180,95,220,120);
settextstyle(1,1,1);
setcolor(CYAN);
outtextxy(185,100,"<");

itoa(year,st,10);
settextstyle(1,0,1);
rectangle(250,85,380,130);
setcolor(BROWN);
outtextxy(255,95,st);

setcolor(CYAN);
rectangle(340,90,375,105);
setcolor(BROWN);
settextstyle(1,1,1);
outtextxy(345,91,">");

setcolor(CYAN);
rectangle(340,110,375,125);
setcolor(BROWN);
settextstyle(1,1,1);
outtextxy(345,111,"<");

xx=getmaxx();
yy=30;
setfillstyle(1,3);
rectangle(xx-30,yy-25,xx-4,yy);
settextstyle(0,0,2);
outtextxy(xx-24,yy-20,"x");
reg.r_ax=1;
intr(0x33,®);
t.time();
while(!kbhit())
{
reg.r_ax=3;
intr(0x33,®);
if(reg.r_bx==1)
{
while(reg.r_bx==1)
{
reg.r_ax=3;
intr(0x33,®);
}
 if( reg.r_cx<=220 && reg.r_cx>=180 && reg.r_dx<=120 && reg.r_dx>=95 )
 {
  settextstyle(3,0,3);
  displaymenu(month,count,45,130);
  for(i=0;i<count;i++)
  {
  if(textwidth(month[i])>width)
  width=textwidth(month[i]);
  }
  while(mon!=13)
  {
  mon=getresponse(month,width,count,45,130);
  tday();
  cal();
  reqmon();

  }
  }
  if(reg.r_cx>=340 && reg.r_cx<=375 && reg.r_dx>=90 && reg.r_dx<=105)
  {
  if(year<2060)
  year++;
  itoa(year,st,10);
  setfillstyle(SOLID_FILL, BLACK);
  bar(251,86,320,129);
  settextstyle(1,0,1);
  outtextxy(255,95,st);
  tday();
  cal();
  reqmon();
  }

 if(reg.r_cx>=340 && reg.r_cx<=375 && reg.r_dx>=110 && reg.r_dx<=125)
 {
  if(year>0)
  year--;
  itoa(year,st,10);
  setfillstyle(SOLID_FILL, BLACK);
  bar(251,86,320,129);
  settextstyle(1,0,1);
  outtextxy(255,95,st);
  tday();
  cal();
  reqmon();
  }
 if(reg.r_cx>=610 && reg.r_cx<=635 && reg.r_dx>=5 && reg.r_dx<=30)
   {
	   reg.r_ax=2;
	   intr(0x33,®);
	   cleardevice();

	   setbkcolor(11);

	   setcolor(BROWN);
	   settextstyle(1,0,5);
	   outtextxy(100,200,"EXITING");
	   int o=0;
	   for(int n=0;n<6;n++)
	   {
	      outtextxy(350+o,200,".." );
	      o+=20;
	      delay(200);
	   }
	   exit(0);
	}

      }
    }

  }

calendar::displaymenu(char **month,int count,int x1,int y1)
{
int i,h;
setfillstyle(SOLID_FILL,BLACK);
bar(x1-4,y1-4,225,getmaxy()) ;
setcolor(BLUE);
h=textheight(month[0]);
for(i=0;i<count;i++)
{
outtextxy(x1,y1+i*(h+5),month[i]);
delay(10);
}
return 0;
}
calendar::getresponse(char **month,int width,int count,int x1,int y1)
{
int choice=1,premon=0,x2,y2;
int i,h;
struct REGPACK reg;
h=textheight(month[0]);
y2=y1+count*(h+5);
x2=x1+width;
//setcolor(15);

setcolor(BROWN);
rectangle(x1-5,y1-5,x2+57,y2+1);

reg.r_ax=1;
intr(0x33,®);
while(!kbhit())
{
reg.r_ax=3;
intr(0x33,®);
if( reg.r_cx>=x1 && reg.r_cx<=x2 && reg.r_dx>=y1 && reg.r_dx<=y2 )
{
 for(i=1;i<=count;i++)
 {
  if(reg.r_dx<=y1+i*(h+5))
  {
  choice=i;
  break;
  }
 }
  if(premon!=choice)
  {
  reg.r_ax=2;
  intr(0x33,®);
  highlight(month,choice,h,x1,y1,width);
  if(premon)
   dehighlight(month,premon,h,x1,y1,width);
  premon=choice;
  }
  reg.r_ax=1;
  intr(0x33,®);
  if(reg.r_bx==1)
  {
  while(reg.r_bx==1)
  {
   reg.r_ax=3;
   intr(0x33,®);
   }
   if( reg.r_cx>=x1 && reg.r_cx<=x2 && reg.r_dx>=y1 && reg.r_dx<=y2 )
   mon=choice;
   return(mon);
   }
  }
  else if(reg.r_cx>=40 && reg.r_cx<=225 && reg.r_dx>=90 &&
reg.r_dx<=125)
  {
  reg.r_ax=1;
  intr(0x33,®);
  if(reg.r_bx==1)
  {
  while(reg.r_bx==1)
  {
   reg.r_ax=3;
   intr(0x33,®);
   }
   if( reg.r_cx<=220 && reg.r_cx>=180 && reg.r_dx<=120 && reg.r_dx>=95
)
  {
  setfillstyle(SOLID_FILL, BLACK);
  bar(40,139,226,469);
  return(mon);
  }
  }
  }
  }
    return 0;
 }

 calendar::highlight(char **month,int ch,int h,int x1,int y1,int width)
 {
  setfillstyle(SOLID_FILL,RED);
  bar(x1,y1+(ch-1)*(h+5),x1+width,y1+ch*(h+5));
  setcolor(0);
  settextstyle(TRIPLEX_FONT,0,3);
  outtextxy(x1,y1+(ch-1)*(h+5),month[ch-1]);
  return 0;
 }
calendar::dehighlight(char **month,int ch,int h,int x1,int y1,int
width)
 {
  setfillstyle(SOLID_FILL,BLACK);
  bar(x1,y1+(ch-1)*(h+5),x1+width,y1+ch*(h+5));
  setcolor(1);
  settextstyle(TRIPLEX_FONT,0,3);
  outtextxy(x1,y1+(ch-1)*(h+5),month[ch-1]);
  return 0;
 }


//main class

class windoo
{
calendar c;

public:

void menu();

};
void windoo::menu()
{
  c.tday();
  c.cal();
  c.reqmon();
  c.chose();

}

int calendar::s=0;
void main()
{
clrscr();
int gd=DETECT,gm;
struct REGPACK reg;
initgraph(&gd,&gm,"c:\tc\bgi ");

cleardevice();
setcolor(BLUE) ;
rectangle(20,20,580,450);
setcolor(18);
settextstyle(1,0,1);
outtextxy(60,40,"*********************************************************
********");
outtextxy(60,420,"********************************************************
*********");
setcolor(18);
settextstyle(1,1,1);
outtextxy(50,5,"*******************************************************");
outtextxy(500,10,"******************************************************")
;

setcolor(RED);
settextstyle(1,0,4);
outtextxy(90,100,"Fedral Urdu University");
setcolor(YELLOW);
settextstyle(3,0,5);
outtextxy(100,150,"Nazia & Rida");
setcolor(5);
outtextxy(150,220,"BSCS_3B");
setcolor(9);
settextstyle(4,0,5);
outtextxy(65,300,"AnalogClock & Calendar");
delay(2000);

getch();

reg.r_ax=0;
intr(0x33,®);
reg.r_ax=1;
intr(0x33,®);
reg.r_ax=2;
intr(0x33,®);
windoo w;
w.menu();
getch();

}
