#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/////////////////////////////////////////////////////////////////////////
/////////////////VARIABLR DICLARATIONS///////////////////////////////////
/////////////////////////////////////////////////////////////////////////
int f0,f1,f2,f3,f4,f5,f6,f7,f8,f9;


/////////////////////////////////////////////////////////////////////////
////////////////////////MAIN FUNCTION////////////////////////////////////
/////////////////////////////////////////////////////////////////////////
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int left, top, right, bottom;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:/tc/bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   left = getmaxx() / 2-150 ;
   top = getmaxy() / 2-200 ;
   right = getmaxx() / 2 + 100;
   bottom = getmaxy() / 2 + 160;
  // printf("%d %d %d %d",left,top,right,bottom);

	     /* draw a rectangle */

    setcolor(5);
   rectangle(left,top,right,bottom);
   setcolor(1);
   rectangle(left+17,top+330,right-203,bottom-10);
   rectangle(left+64,top+330,right-156,bottom-10);
   rectangle(left+111,top+330,right-109,bottom-10);
   rectangle(left+158,top+330,right-62,bottom-10);
   rectangle(left+205,top+330,right-15,bottom-10);


   rectangle(left+17,top+300,right-203,bottom-40);
   rectangle(left+64,top+300,right-156,bottom-40);
   rectangle(left+111,top+300,right-109,bottom-40);
   rectangle(left+158,top+300,right-62,bottom-40);
   rectangle(left+205,top+300,right-15,bottom-40);

   rectangle(left+17,top+270,right-203,bottom-70);
   rectangle(left+64,top+270,right-156,bottom-70);
   rectangle(left+111,top+270,right-109,bottom-70);
   rectangle(left+158,top+270,right-62,bottom-70);
   rectangle(left+205,top+270,right-15,bottom-70);

   rectangle(left+17,top+240,right-203,bottom-100);
   rectangle(left+64,top+240,right-156,bottom-100);
   rectangle(left+111,top+240,right-109,bottom-100);
   rectangle(left+158,top+240,right-62,bottom-100);
   rectangle(left+205,top+240,right-15,bottom-100);


   rectangle(left+17,top+210,right-203,bottom-130);
   rectangle(left+64,top+210,right-156,bottom-130);
   rectangle(left+111,top+210,right-109,bottom-130);
   rectangle(left+158,top+210,right-62,bottom-130);
   rectangle(left+205,top+210,right-15,bottom-130);

   rectangle(left+17,top+180,right-203,bottom-160);
   rectangle(left+64,top+180,right-156,bottom-160);
   rectangle(left+111,top+180,right-109,bottom-160);
   rectangle(left+158,top+180,right-62,bottom-160);
   rectangle(left+205,top+180,right-15,bottom-160);

		      /*print function*/
   setcolor(7); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(196,376,"0"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(243,376,"."); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(285,376,"EXP"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(332,376,"Ans"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(384,376,"="); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);


   outtextxy(196,346,"1");  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(243,346,"2"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(290,346,"3"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(337,346,"+");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(384,346,"-");  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);


   outtextxy(196,316,"4"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(243,316,"5");  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(290,316,"6");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(337,316,"*"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(384,316,"/"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);


   outtextxy(196,286,"7");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(243,286,"8");  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(290,286,"9");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(337,286,"%"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    setcolor(4); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(384,286,"AC"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);


   setcolor(7); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(190,256,"sin"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(237,256,"cos"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(284,256,"tan"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(334,256,"x2"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(380,256,"x3"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

    outtextxy(190,226,"root"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(237,226,"log"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(284,226,"("); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(334,226,")"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    setcolor(4); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
    outtextxy(380,226,"Del"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);







   /* clean up */
   getch();
   closegraph();
   return 0;
}
