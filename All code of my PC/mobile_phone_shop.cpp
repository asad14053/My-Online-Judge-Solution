#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include<stdio.h>
#include<dos.h>

union REGS i,o;

initmouse();     // initializez the mouse

showmouseptr();  // shows the muse pointer on screen

restrictmouseptr(int,int,int,int); // restrict the pointer to specific
area

getmousepos(int [],int [],int []); // gets the (x,y) location of mouse
pointer


//-------------> void main()

void main()
{
	clrscr();

	int gd=DETECT,gm,x,y,button;    // }   graphics initialization


	int gDriver,gMode,errorCode;

	gDriver = DETECT;

	initgraph(&gDriver,&gMode,"c:\borlandc\bgi");

	initgraph(&gd,&gm,"c:\borlandc\bgi");   // }

	errorCode = graphresult();

	if(errorCode!=0)
	{
	 cout<<"Sorry Graphics couldn't Initialized";
//	 sound(790);
//    delay(1000);
	 getch();
	 exit(0);
	}
/*************************************************************************
*/

if (initmouse()==-1)
	{
	closegraph();
	restorecrtmode();
	cout<<"Mouse driver not loaded";
	exit(0);
	}

//restrictmouseptr(1,57,maxx-1,maxy-1);

showmouseptr();
while(!kbhit())
	{
	getmousepos(&button,&x,&y);
	gotoxy(5,3);
	gotoxy(20,3);
	gotoxy(65,2);
	}


/*************************************************************************
**/
	line(50,300,50,50);				//Left
	line(50,50,170,50);				//Up
	line(170,50,170,300);			//Right
	line(50,300,170,300);           //Down

	rectangle(60,150,160,60);       //LCD Screen
									/** Mobile Buttons **/
	rectangle(60,160,95,175);				//Yes
	rectangle(160,160,125,175);   			//No

	rectangle(60,210,83,195);				//1
	rectangle(120,210,95,195);				//2
	rectangle(135,210,160,195);				//3

	rectangle(60,237,83,221);				//4
	rectangle(120,237,95,221);				//5
	rectangle(135,237,160,221);				//6

	rectangle(60,264,83,247);				//7
	rectangle(120,264,95,247);				//8
	rectangle(135,264,160,247);				//9

	rectangle(60,291,83,273);				//*
	rectangle(120,291,95,273);				//0
	rectangle(135,291,160,273);				//#
/*************************************************************************
**/
			/****************    Buttons Text   **************/

   setcolor(6);
   outtextxy(66,164,"Yes");		//Yes
   outtextxy(137,165,"No");		//No

   outtextxy(68,199,"1");		//1
   outtextxy(105,199,"2");		//2
   outtextxy(145,199,"3");		//3

   outtextxy(68,226,"4");		//4
   outtextxy(105,226,"5");		//5
   outtextxy(145,226,"6");		//6

   outtextxy(68,253,"7");		//7
   outtextxy(105,253,"8");		//8
   outtextxy(145,253,"9");      //9

   outtextxy(68,279,"*");		//*
   outtextxy(105,279,"0");		//0
   outtextxy(145,279,"#");		//#
/*************************************************************************
**/
					/********  Mobile Name  *********/
   for(int i=1;i<=10;i++)
   {
	   setcolor(6);
	   settextstyle(1,HORIZ_DIR,1);
	   outtextxy(70,90,"SAMSUNG");		//SAMSUNG
	   delay(700);
	   setcolor(2);
	   settextstyle(1,HORIZ_DIR,1);
	   outtextxy(70,90,"SAMSUNG");
	   delay(700);
   }
/*************************************************************************
**/
				/************* Calling ****************/
	cleardevice();
	setcolor(15);
	settextstyle(11,HORIZ_DIR,1);
	line(50,300,50,50);				//Left
	line(50,50,170,50);				//Up
	line(170,50,170,300);			//Right
	line(50,300,170,300);           //Down

	rectangle(60,150,160,60);       //LCD Screen
									/** Mobile Buttons **/
	rectangle(60,160,95,175);				//Yes
	rectangle(160,160,125,175);   			//No

	rectangle(60,210,83,195);				//1
	rectangle(120,210,95,195);				//2
	rectangle(135,210,160,195);				//3

	rectangle(60,237,83,221);				//4
	rectangle(120,237,95,221);				//5
	rectangle(135,237,160,221);				//6

	rectangle(60,264,83,247);				//7
	rectangle(120,264,95,247);				//8
	rectangle(135,264,160,247);				//9

	rectangle(60,291,83,273);				//*
	rectangle(120,291,95,273);				//0
	rectangle(135,291,160,273);				//#
/*************************************************************************
**/
			/****************    Buttons Text   **************/

   setcolor(6);
   outtextxy(66,164,"Yes");		//Yes
   outtextxy(137,165,"No");		//No

   outtextxy(68,199,"1");		//1
   outtextxy(105,199,"2");		//2
   outtextxy(145,199,"3");		//3

   outtextxy(68,226,"4");		//4
   outtextxy(105,226,"5");		//5
   outtextxy(145,226,"6");		//6

   outtextxy(68,253,"7");		//7
   outtextxy(105,253,"8");		//8
   outtextxy(145,253,"9");      //9

   outtextxy(68,279,"*");		//*
   outtextxy(105,279,"0");		//0
   outtextxy(145,279,"#");		//#
/*************************************************************************
*/
				/************* Dialing ****************/
	outtextxy(100,100,"111");
	delay(5000);
/*************************************************************************
*/
	cleardevice();
	setcolor(15);
	settextstyle(11,HORIZ_DIR,1);
	line(50,300,50,50);				//Left
	line(50,50,170,50);				//Up
	line(170,50,170,300);			//Right
	line(50,300,170,300);           //Down

	rectangle(60,150,160,60);       //LCD Screen
									/** Mobile Buttons **/
	rectangle(60,160,95,175);				//Yes
	rectangle(160,160,125,175);   			//No

	rectangle(60,210,83,195);				//1
	rectangle(120,210,95,195);				//2
	rectangle(135,210,160,195);				//3

	rectangle(60,237,83,221);				//4
	rectangle(120,237,95,221);				//5
	rectangle(135,237,160,221);				//6

	rectangle(60,264,83,247);				//7
	rectangle(120,264,95,247);				//8
	rectangle(135,264,160,247);				//9

	rectangle(60,291,83,273);				//*
	rectangle(120,291,95,273);				//0
	rectangle(135,291,160,273);				//#
/*************************************************************************
**/
			/****************    Buttons Text   **************/

   setcolor(6);
   outtextxy(66,164,"Yes");		//Yes
   outtextxy(137,165,"No");		//No

   outtextxy(68,199,"1");		//1
   outtextxy(105,199,"2");		//2
   outtextxy(145,199,"3");		//3

   outtextxy(68,226,"4");		//4
   outtextxy(105,226,"5");		//5
   outtextxy(145,226,"6");		//6

   outtextxy(68,253,"7");		//7
   outtextxy(105,253,"8");		//8
   outtextxy(145,253,"9");      //9

   outtextxy(68,279,"*");		//*
   outtextxy(105,279,"0");		//0
   outtextxy(145,279,"#");		//#
/*************************************************************************
**/
			/**************** Dialing *************/

   outtextxy(82,97,"Dialing");
   outtextxy(100,115,"111");
   delay(3000);
/*************************************************************************
*/
	cleardevice();
	setcolor(15);
	settextstyle(11,HORIZ_DIR,1);
	line(50,300,50,50);				//Left
	line(50,50,170,50);				//Up
	line(170,50,170,300);			//Right
	line(50,300,170,300);           //Down

	rectangle(60,150,160,60);       //LCD Screen
									/** Mobile Buttons **/
	rectangle(60,160,95,175);				//Yes
	rectangle(160,160,125,175);   			//No

	rectangle(60,210,83,195);				//1
	rectangle(120,210,95,195);				//2
	rectangle(135,210,160,195);				//3

	rectangle(60,237,83,221);				//4
	rectangle(120,237,95,221);				//5
	rectangle(135,237,160,221);				//6

	rectangle(60,264,83,247);				//7
	rectangle(120,264,95,247);				//8
	rectangle(135,264,160,247);				//9

	rectangle(60,291,83,273);				//*
	rectangle(120,291,95,273);				//0
	rectangle(135,291,160,273);				//#
/*************************************************************************
**/
			/****************    Buttons Text   **************/

   setcolor(6);
   outtextxy(66,164,"Yes");		//Yes
   outtextxy(137,165,"No");		//No

   outtextxy(68,199,"1");		//1
   outtextxy(105,199,"2");		//2
   outtextxy(145,199,"3");		//3

   outtextxy(68,226,"4");		//4
   outtextxy(105,226,"5");		//5
   outtextxy(145,226,"6");		//6

   outtextxy(68,253,"7");		//7
   outtextxy(105,253,"8");		//8
   outtextxy(145,253,"9");      //9

   outtextxy(68,279,"*");		//*
   outtextxy(105,279,"0");		//0
   outtextxy(145,279,"#");		//#
/*************************************************************************
/
			/************ Calling **************/
	outtextxy(75,85,"Calling...");
	outtextxy(97,100,"Jazz");
	outtextxy(75,115,"Help Line");
	delay(4000);
/*************************************************************************
/
	cleardevice();
	setcolor(15);
	settextstyle(11,HORIZ_DIR,1);
	line(50,300,50,50);				//Left
	line(50,50,170,50);				//Up
	line(170,50,170,300);			//Right
	line(50,300,170,300);           //Down

	rectangle(60,150,160,60);       //LCD Screen
									/** Mobile Buttons **/
	rectangle(60,160,95,175);				//Yes
	rectangle(160,160,125,175);   			//No

	rectangle(60,210,83,195);				//1
	rectangle(120,210,95,195);				//2
	rectangle(135,210,160,195);				//3

	rectangle(60,237,83,221);				//4
	rectangle(120,237,95,221);				//5
	rectangle(135,237,160,221);				//6

	rectangle(60,264,83,247);				//7
	rectangle(120,264,95,247);				//8
	rectangle(135,264,160,247);				//9

	rectangle(60,291,83,273);				//*
	rectangle(120,291,95,273);				//0
	rectangle(135,291,160,273);				//#
/*************************************************************************
**/
			/****************    Buttons Text   **************/

   setcolor(6);
   outtextxy(66,164,"Yes");		//Yes
   outtextxy(137,165,"No");		//No

   outtextxy(68,199,"1");		//1
   outtextxy(105,199,"2");		//2
   outtextxy(145,199,"3");		//3

   outtextxy(68,226,"4");		//4
   outtextxy(105,226,"5");		//5
   outtextxy(145,226,"6");		//6

   outtextxy(68,253,"7");		//7
   outtextxy(105,253,"8");		//8
   outtextxy(145,253,"9");      //9

   outtextxy(68,279,"*");		//*
   outtextxy(105,279,"0");		//0
   outtextxy(145,279,"#");		//#
/*************************************************************************
/
				/***************** Connected *************/
	outtextxy(75,85,"Connected");
	outtextxy(97,100,"Jazz");
	outtextxy(75,115,"Help Line");
	delay(7000);
/*************************************************************************
*/
	cleardevice();
	setcolor(15);
	settextstyle(11,HORIZ_DIR,1);
	line(50,300,50,50);				//Left
	line(50,50,170,50);				//Up
	line(170,50,170,300);			//Right
	line(50,300,170,300);           //Down

	rectangle(60,150,160,60);       //LCD Screen
									/** Mobile Buttons **/
	rectangle(60,160,95,175);				//Yes
	rectangle(160,160,125,175);   			//No

	rectangle(60,210,83,195);				//1
	rectangle(120,210,95,195);				//2
	rectangle(135,210,160,195);				//3

	rectangle(60,237,83,221);				//4
	rectangle(120,237,95,221);				//5
	rectangle(135,237,160,221);				//6

	rectangle(60,264,83,247);				//7
	rectangle(120,264,95,247);				//8
	rectangle(135,264,160,247);				//9

	rectangle(60,291,83,273);				//*
	rectangle(120,291,95,273);				//0
	rectangle(135,291,160,273);				//#
/*************************************************************************
**/
			/****************    Buttons Text   **************/

   setcolor(6);
   outtextxy(66,164,"Yes");		//Yes
   outtextxy(137,165,"No");		//No

   outtextxy(68,199,"1");		//1
   outtextxy(105,199,"2");		//2
   outtextxy(145,199,"3");		//3

   outtextxy(68,226,"4");		//4
   outtextxy(105,226,"5");		//5
   outtextxy(145,226,"6");		//6

   outtextxy(68,253,"7");		//7
   outtextxy(105,253,"8");		//8
   outtextxy(145,253,"9");      //9

   outtextxy(68,279,"*");		//*
   outtextxy(105,279,"0");		//0
   outtextxy(145,279,"#");		//#
/*************************************************************************
*/
				/************** End Call ****************/
	outtextxy(71,100,"Call Ended");
	delay(4000);
/*************************************************************************
*/
	cleardevice();
	setcolor(15);
	settextstyle(11,HORIZ_DIR,1);
	line(50,300,50,50);				//Left
	line(50,50,170,50);				//Up
	line(170,50,170,300);			//Right
	line(50,300,170,300);           //Down

	rectangle(60,150,160,60);       //LCD Screen
									/** Mobile Buttons **/
	rectangle(60,160,95,175);				//Yes
	rectangle(160,160,125,175);   			//No

	rectangle(60,210,83,195);				//1
	rectangle(120,210,95,195);				//2
	rectangle(135,210,160,195);				//3

	rectangle(60,237,83,221);				//4
	rectangle(120,237,95,221);				//5
	rectangle(135,237,160,221);				//6

	rectangle(60,264,83,247);				//7
	rectangle(120,264,95,247);				//8
	rectangle(135,264,160,247);				//9

	rectangle(60,291,83,273);				//*
	rectangle(120,291,95,273);				//0
	rectangle(135,291,160,273);				//#
/*************************************************************************
**/
			/****************    Buttons Text   **************/

   setcolor(6);
   outtextxy(66,164,"Yes");		//Yes
   outtextxy(137,165,"No");		//No

   outtextxy(68,199,"1");		//1
   outtextxy(105,199,"2");		//2
   outtextxy(145,199,"3");		//3

   outtextxy(68,226,"4");		//4
   outtextxy(105,226,"5");		//5
   outtextxy(145,226,"6");		//6

   outtextxy(68,253,"7");		//7
   outtextxy(105,253,"8");		//8
   outtextxy(145,253,"9");      //9

   outtextxy(68,279,"*");		//*
   outtextxy(105,279,"0");		//0
   outtextxy(145,279,"#");		//#
/*************************************************************************
*/
					/********  Mobile Name  *********/
   for(i=1;i<=10;i++)
   {
	   setcolor(6);
	   settextstyle(1,HORIZ_DIR,1);
	   outtextxy(70,90,"SAMSUNG");		//SAMSUNG
	   delay(700);
	   setcolor(2);
	   settextstyle(1,HORIZ_DIR,1);
	   outtextxy(70,90,"SAMSUNG");
	   delay(700);
   }
/*************************************************************************
*/
	getch();
}

/*************************************************************************
/
// definition of functions used in program

//------> initmouse()
initmouse()
{

i.x.ax=0;
int86(0x33,&i,&o);
return (o.x.ax==0?-1:0);
}


//------> showmouseptr()
showmouseptr()
{
i.x.ax=1;
int86 (0x33, &i, &o);
return 0;
}


//------> restrictmouseptr(int,int,int,int)
restrictmouseptr(int x1,int y1,int x2,int y2)
{
i.x.ax=7;
i.x.cx=x1;
i.x.dx=x2;
int86 (0x33, &i,&o);
i.x.ax=8;
i.x.cx=y1;
i.x.dx=y2;
int86 (0x33, &i, &o);
return 0;
}


//------> getmousepos(int,int,int)
getmousepos(int *button, int *x, int *y)
{
i.x.ax=3;
int86(0x33, &i,&o);
*button=o.x.bx;
*x=o.x.cx;
*y=o.x.dx;
return 0;
}



