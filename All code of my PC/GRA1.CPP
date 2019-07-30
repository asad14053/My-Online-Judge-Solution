#include<graphics.h>
#include<dos.h>
#include<conio.h>

void main()
 {
 clrscr();
  int gd=0,gm;
  int x=100,y=200;
  char ch;
  initgraph(&gd,&gm,"C:\\tc\\bgi");
  setfillstyle(1,1);
  bar(0,0,640,480);
  settextstyle(DEFAULT_FONT,HORIZ_DIR,10);
  setcolor(4);
  outtextxy(x,y,"NAJMUL");

   for(;;)
     {
      ch=getch();

      if(ch=='e')
	 break;
  switch(ch)
     {
       case'l':setcolor(1);
	       outtextxy(x,y,"NAJMUL");
	       x--;
	       setcolor(5);
	       outtextxy(x,y,"NAJMUL");
	       break;
       case'u':setcolor(1);
	       outtextxy(x,y,"NAJMUL");
	       y--;
	       setcolor(4);
	       outtextxy(x,y,"NAJMUL");
	       break;
       case'r':setcolor(1);
	       outtextxy(x,y,"NAJMUL");
	       x++;
	       setcolor(3);
	       outtextxy(x,y,"NAJMUL");
	       break;
       case'd':setcolor(1);
	       outtextxy(x,y,"NAJMUL");
	       y++;
	       setcolor(6);
	       outtextxy(x,y,"NAJMUL");
	       break;
	  }
       }
    closegraph();
    getch();
  }

