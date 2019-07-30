#define R 5
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>
void main()

 {
   void orbit(void);
   int d=DETECT,m;
   initgraph(&d,&m,"e:\tcc\bgi");
   float xx,yy,aa=15,bb=50,x,y,X,Y,a=34,b=0,A=100,B=60,ex,sq;
   setcolor(14);
 //   orbit();

   for(float i=0;i<=720;i+=.1)
   {


    x=a*cos(i+10)-a*sin(i+10);
    y=b*sin(i+10)+a*cos(i+10);

    X=A*cos(i+20)-B*sin(i+20+90);
    Y=B*sin(i+20)+B*cos(i+20+90);

    xx=aa*cos(i);
    yy=bb*sin(i);

    setcolor(14);
    setfillstyle(1,14);
    circle(x+100,y+100,R);
    floodfill(x+100,y+100,14);

    setcolor(14);
    setfillstyle(1,14);
    circle(xx+100,yy+100,R);
    floodfill(xx+100,yy+100,14);

    setcolor(14);
    setfillstyle(1,14);
    circle(X+100,Y+100,R);
    floodfill(X+100,Y+100,14);

    putpixel(X+100,Y+100,4);
    delay(100);

    setcolor(0);
    setfillstyle(1,0);
    circle(x+100,y+100,R);
    floodfill(x+100,y+100,0);

    setcolor(0);
    setfillstyle(1,0);
    circle(xx+100,yy+100,R);
    floodfill(xx+100,yy+100,0);

    setcolor(0);
    setfillstyle(1,0);
    circle(X+100,Y+100,R);
    floodfill(X+100,Y+100,0);

    if(kbhit())
	exit(1);
    orbit();
   }


 getch();
 }

 void orbit()
 {
  for(float i=0;i<=60;i+=1)
   {
    float xx,yy,aa=15,bb=50,x,y,X,Y,a=34,b=0,A=100,B=60,ex,sq;
    x=a*cos(i)-a*sin(i);
    y=b*sin(i)+a*cos(i);

    X=A*cos(i)-B*sin(i+90);
    Y=B*sin(i)+B*cos(i+90);

    xx=aa*cos(i);
    yy=bb*sin(i);

    putpixel(x+100,y+100,14);
    putpixel(X+100,Y+100,14);
    putpixel(xx+100,yy+100,14);


   }
  }
