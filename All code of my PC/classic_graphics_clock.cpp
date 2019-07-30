#include<stdio.h>
#include<process.h>
#include<iostream.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
void draw()
{
setbkcolor(0);
setlinestyle(0,0,0);
setcolor(9);
circle(320,240,3);
setcolor(11);
setfillstyle(6,13);
circle(320,240,150);
circle(320,240,165);
floodfill(156,242,11);
settextstyle(2,0,5);
setcolor(14);
outtextxy(314,98,"12");
outtextxy(384,114,"1");
outtextxy(434,163,"2");
outtextxy(454,230,"3");
outtextxy(317,369,"6");
outtextxy(177,230,"9");
outtextxy(436,300,"4");
outtextxy(195,302,"8");
outtextxy(195,163,"10");
outtextxy(244,112,"11");
outtextxy(388,353,"5");
outtextxy(248,353,"7");
}
main()
{

int gd=0,gm;
initgraph(&gd,&gm,"c:\tc\bgi");

draw();
//line(320,240,320,130);
//line(320,240,320,150);
//getch();
float s;
float df;
//s=282*M_PI/180;
//float angle=4.712389;
//float an=4.712389;
float anf=4.712389;

//float angle=0;
int x,y;
int q,w;
int ta,d;

float as;
as=6*M_PI/180;

int c2=0;
int count=0;
struct  time t;
gettime(&t);
float angle=4.712389+t.ti_sec*.1047198;
float an=4.712389+t.ti_min*.1047198;
while(!kbhit())
{
draw();
gettime(&t);
gotoxy(5,5);
angle=4.712389+t.ti_sec*.1047198;
an=4.712389+t.ti_min*.1047198;
anf=4.712389+t.ti_hour*5*.1047198 ;
if(t.ti_min>=12&&t.ti_min<24)
{
anf=anf+2*.1047198;
}
if(t.ti_min>=24&&t.ti_min<36)
{
anf=anf+(3*.1047198);
}
if(t.ti_min>=36&&t.ti_min<48)
{
anf=anf+(4*.1047198);
}
if(t.ti_min>=48&&t.ti_min<60)
{
anf=anf+(5*.1047198);
}


gotoxy(2,2);
printf("The current time is: %d: %d: %d
",
       t.ti_hour, t.ti_min, t.ti_sec, t.ti_hund);

cout<<"   ";
setlinestyle(0,0,0);
setcolor(0);
line(320,240,x,y);
line(320,240,q,w);
line(320,240,ta,d);

x=320+140*cos(angle);
y=240+140*sin(angle);
q=320+122*cos(an);
w=240+122*sin(an);
ta=320+86*cos(anf);
d=240+86*sin(anf);
setcolor(10);
setlinestyle(0,0,0);
line(320,240,x,y);
setlinestyle(0,0,2);
setcolor(9);
line(320,240,q,w);
setlinestyle(0,0,3);
setcolor(4);
line(320,240,ta,d);
angle+=.1047198;
delay(1000);
count++;

/*if(c2==12)
{
setlinestyle(0,0,3);
c2=0;
anf+=.1047198;
} */
setcolor(count);
outtextxy(370,440,"MADE BY :- AAYUSH AWASTHI");
outtextxy(390,460,"BCA IIIrd YEAR");

}


getch();
}
