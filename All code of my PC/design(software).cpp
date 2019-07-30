#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
void main()
{
int year,month,date,days,m,daysfab,a,n;
int total,week,c,d,e;
int p,q;
char date1[7][3]={"1","8","15","22","29"};
char date2[7][3]={"2","9","16","23","30"};
char date3[7][3]={"3","10","17","24","31"};
char date4[7][3]={"4","11","18","25"};
char date5[7][3]={"5","12","19","26"} ;
char date6[7][3]={"6","13","20","27"};
char date7[7][3]={"7","14","21","28"};
void drawcal();
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:	cgi");
setbkcolor(0);
printf("Enter the Year ------------:") ;
scanf("%d",&year);
printf("Enter the Month [1-12] ----:") ;
scanf("%d",&month);
n=month;
if(month>12)
{
printf("
!!!!! Invalid input");
getch();
exit(1);
}

a=year%400;
 c=(a%100)-1;
 d=c/4;
 e= (a/100)*5+(d*2)+(c-d);    //total//
 m=(n-1);
 if(m==1)
 days=31;
 if (m==2);
 {
  if(year%4==0)
    daysfab=29;
else daysfab=28;
}
days=31+daysfab;
 if(m==3)
days=31+31+daysfab;
 if(m==4)
days =92+daysfab;
 if(m==5)
days=123+daysfab;
 if(m==6)
days=153+daysfab;
 if(m==7)
days=184+daysfab;
 if(m==8)
days=215+daysfab;
 if(m==9)
days=245+daysfab;
 if(m==10)
days=276+daysfab;
 if(m==11)
days=306+daysfab;
  if(m==0)
  days=0;
 total=days+e+1;
 week=total%7;


drawcal();
for(p=0,q=0;p<=260,q<=5;p+=50,q++)
{
setcolor(11);
if(week==0)
{
outtextxy(110+p,60,date1[q]);
outtextxy(110+p,110,date2[q]);
outtextxy(110+p,160,date3[q]);
outtextxy(110+p,210,date4[q]);
outtextxy(110+p,260,date5[q]);
outtextxy(110+p,310,date6[q]);
outtextxy(110+p,360,date7[q]);
}
if(week==1)
{
outtextxy(110+p,110,date1[q]);
outtextxy(110+p,160,date2[q]);
outtextxy(110+p,210,date3[q]);
outtextxy(110+p,260,date4[q]);
outtextxy(110+p,310,date5[q]);
outtextxy(110+p,360,date6[q]);
outtextxy(160+p,60,date7[q]);
}
if(week==2)
{
outtextxy(110+p,160,date1[q]);
outtextxy(110+p,210,date2[q]);
outtextxy(110+p,260,date3[q]);
outtextxy(110+p,310,date4[q]);
outtextxy(110+p,360,date5[q]);
outtextxy(160+p,60,date6[q]);
outtextxy(160+p,110,date7[q]);
}
if(week==3)
{
outtextxy(110+p,210,date1[q]);
outtextxy(110+p,260,date2[q]);
outtextxy(110+p,310,date3[q]);
outtextxy(110+p,360,date4[q]);
outtextxy(160+p,60,date5[q]);
outtextxy(160+p,110,date6[q]);
outtextxy(160+p,160,date7[q]);
}
if(week==4)
{
outtextxy(110+p,260,date1[q]);
outtextxy(110+p,310,date2[q]);
outtextxy(110+p,360,date3[q]);
outtextxy(160+p,60,date4[q]);
outtextxy(160+p,110,date5[q]);
outtextxy(160+p,160,date6[q]);
outtextxy(160+p,210,date7[q]);
}
if(week==5)
{
outtextxy(110+p,310,date1[q]);
outtextxy(110+p,360,date2[q]);
outtextxy(160+p,60,date3[q]);
outtextxy(160+p,110,date4[q]);
outtextxy(160+p,160,date5[q]);
outtextxy(160+p,210,date6[q]);
outtextxy(160+p,260,date7[q]);
}
if(week==6)

{
outtextxy(110+p,360,date1[q]);
outtextxy(160+p,60,date2[q]);
outtextxy(160+p,110,date3[q]);
outtextxy(160+p,160,date4[q]);
outtextxy(160+p,210,date5[q]);
outtextxy(160+p,260,date6[q]);
outtextxy(160+p,310,date7[q]);
}
}
setfillstyle(1,0);
if((n==4||n==6||n==9||n==11) && week==0)
floodfill(310,190,10);
if((n==4||n==6||n==9||n==11) && week==1)
floodfill(310,240,10);
if((n==4||n==6||n==9||n==11) && week==2)
floodfill(310,290,10);
if((n==4||n==6||n==9||n==11) && week==3)
floodfill(310,340,10);
if((n==4||n==6||n==9||n==11) && week==4)
floodfill(310,390,10);
if((n==4||n==6||n==9||n==11) && week==5)
floodfill(360,60,10);
if((n==4||n==6||n==9||n==11) && week==6)
floodfill(360,110,10);
if(n==2 &&year%4!=0 && week==0)
{
floodfill(310,60,10);
floodfill(310,110,10);
floodfill(310,160,10);
}
if(n==2 && year%4!=0 && week==1)
{
 floodfill(310,110,10);
 floodfill(310,160,10);
 floodfill(310,210,10);
 }
if(n==2 && year%4!=0 && week==2)
{
floodfill(310,160,10);
floodfill(310,210,10);
floodfill(310,260,10);
}
if(n==2 &&year%4!=0&&week==3)
{
floodfill(310,210,10);
floodfill(310,260,10);
floodfill(310,310,10);
}
if(n==2&&year%4!=0&&week==4)
{
floodfill(310,260,10);
floodfill(310,310,10);
floodfill(310,360,10);
}
if(n==2&&year%4!=0&&week==5)
{
floodfill(310,310,10);
floodfill(310,360,10);
floodfill(360,60,10);
}
if(n==2&&year%4!=0&&week==6)
{
floodfill(310,360,10);
floodfill(360,60,10);
floodfill(360,110,10);
}
if(n==2 &&year%4==0 && week==0)
{
floodfill(310,110,10);
floodfill(310,160,10);
}
if(n==2 && year%4==0 && week==1)
{
  floodfill(310,160,10);
 floodfill(310,210,10);
 }
if(n==2 && year%4==0 && week==2)
{
floodfill(310,210,10);
floodfill(310,260,10);
}
if(n==2 &&year%4==0&&week==3)
{
floodfill(310,260,10);
floodfill(310,310,10);
}
if(n==2&&year%4==0&&week==4)
{
floodfill(310,310,10);
floodfill(310,360,10);
}
if(n==2&&year%4==0&&week==5)
{
floodfill(310,360,10);
floodfill(360,60,10);
}
if(n==2&&year%4==0&&week==6)
{
floodfill(360,60,10);
floodfill(360,110,10);
}
settextstyle(0,0,1);
setcolor(12);
gotoxy (5,2);
if(n==1)
{
printf(" JANUARY--%d ",year);
if(year>=1950)
outtextxy(430,100,"26--Republic Day");
}
if(n==2)
{
printf(" FEBRUARY--%d ",year);
outtextxy(430,100,"14-Valentaince Day");
}
if(n==3)
printf(" MARCH--%d ",year);
if(n==4)
{
printf(" APRIL--%d ",year);
if(year>1950)
outtextxy(430,100,"14-Ambedkar Day");
}
if(n==5)
{
printf(" MAY--%d ",year);
outtextxy(430,100,"01-Labour's Day");
}
if(n==6)
{
printf(" JUNE--%d ",year);
outtextxy(430,100,"05-World Environmental Day");
}
if(n==7)
{
printf(" JULY--%d ",year);
outtextxy(430,100,"11-World Population Day");
}
if(n==8)
{
printf(" AUGUST--%d ",year);
if(year>=1947)
outtextxy(430,100,"15-Independence Day");
}
if(n==9)
{
printf(" SEPTEMBER--%d ",year);
if(year>=1960)
outtextxy(430,100,"05-Teacher's Day");
outtextxy(430,110,"15-Engineer's Day");
}
if(n==10)
{
printf(" OCTOBER--%d ",year);
if(year>1869)
outtextxy(430,100,"02-Gandhi Jayanthi");
}
if(n==11)
{
printf(" NOVEMBER--%d ",year);
if(year>1947)
outtextxy(430,100,"14-Children's Day");
if(year>1600)
outtextxy(430,110,"15--Guru Nanak Birthday");
}
if(n==12)
{
printf(" DECEMBER--%d ",year);
outtextxy(430,100,"03-World Handicap's Day");
outtextxy(430,110,"25-Christmas");
}
getch();
}
void drawcal()
{
int i,j,x;
cleardevice();
setcolor(10);
for(i=50;i<=310;i+=50)
for(j=50;j<=350;j+=50)
rectangle(50+i,0+j,100+i,50+j);
settextstyle(1,0,2);
for(x=0;x<=300;x+=50)
rectangle(20,50+x,100,100+x);
setcolor(7);
outtextxy(30,60,"SUN");
outtextxy(30,110,"MON");
outtextxy(30,160,"TUE");
outtextxy(30,210,"WED");
outtextxy(30,260,"THU");
outtextxy(30,310,"FRI");
outtextxy(30,360,"SAT");
setcolor(13);
settextstyle(5,0,1);
outtextxy(170,4,"DINESH KUMAR");
outtextxy(170,5,"_______________");
}
