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
setbkcolor(5);
setcolor(RED);
settextstyle(7,0,6);
outtextxy(20,50,"wellcome to");
setcolor(3);
settextstyle(3,1,7);
outtextxy(40,150,"semester");
settextstyle(1,1,6);
outtextxy(100,195,"result");
settextstyle(1,1,5);
outtextxy(150,200,"system");
settextstyle(1,0,1);
outtextxy(439,440,"press any key to exit");
  }

