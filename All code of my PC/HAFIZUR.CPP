#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
void graph();

void main()
{clrscr();
int gd=DETECT,gm,maxx,maxy,x,y,button,prevx,prevy;
initgraph(&gd,&gm,"c:\\tc\\bgi");
graph();
getch();
}

void graph()
{
settextstyle(1,0,9);
outtextxy(20,50,"wellcome to");
settextstyle(2,1,8);
outtextxy(5,100,"semester result system");

  }

