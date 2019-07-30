#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
#include<conio.h>

void grapic()
{
	mouse_off();
	int i,j,h;
//four corner box////////////////////////////////
	setfillstyle(1,2);
	bar3d(30,30,180,180,0,0);

	setfillstyle(1,14);
	bar3d(30,279,179,429,0,0);

	setfillstyle(1,4);
	bar3d(279,180,429,30,0,0);

	setfillstyle(1,1);
	bar3d(279,279,429,429,0,0);
//end of the corner box///////////////////////

//middle box/////////////////////////////////
	setfillstyle(1,3);
	bar3d(180,180,280,280,0,0);

	for(i=0,j=33;i<3;++i,j+=33)
	{
		setfillstyle(10,10);
		bar3d(30,147+j,180,180+j,0,0);
		bar3d(147+j,30,180+j,180,0,0);
		bar3d(429,147+j,279,180+j,0,0);
		bar3d(147+j,429,180+j,279,0,0);
	}
// coloring box beside on that bar//////////
	setfillstyle(1,4);
	bar3d(213,55,246,180,0,0);

	setfillstyle(1,2);
	bar3d(55,213,180,246,0,0);

	setfillstyle(1,14);
	bar3d(213,404,246,279,0,0);

	setfillstyle(1,1);
	bar3d(279,213,404,246,0,0);

	setfillstyle(1,2);
	bar3d(55,180,80,213,0,0);

	setfillstyle(1,4);
	bar3d(246,55,279,80,0,0);

	setfillstyle(1,14);
	bar3d(213,404,180,379,0,0);

	setfillstyle(1,1);
	bar3d(404,246,379,279,0,0);

//to create line//////////////////////////
	for(i=0,j=25;i<5;++i,j+=25)
	{
		line(180,30+j,279,30+j);
		line(30+j,180,30+j,279);
		line(180,279+j,279,279+j);
		line(279+j,180,279+j,279);
	}
	//////////score board bar//////////////
	setfillstyle(0,0);
	bar3d(435,30,605,429,0,0);

	////////write player no///////////
	settextstyle(SMALL_FONT,HORIZ_DIR,7);
	outtextxy(473,32,"player1");
	settextstyle(SMALL_FONT,HORIZ_DIR,7);
	outtextxy(473,82,"player2");
	settextstyle(SMALL_FONT,HORIZ_DIR,7);
	outtextxy(473,132,"player3");
	settextstyle(SMALL_FONT,HORIZ_DIR,7);
	outtextxy(473,182,"player4");

	////////////box under player///////////
	for(i=0,j=25;i<4;++i,j+=50)
	bar3d(457,32+j,581,57+j,0,0);
	/////////////////////////////////////

	///////////set guti in box///////////
	for(i=0,j=0;i<4;++i,j+=50)
	{
		if(i==0)
			setcolor(6);
		if(i==1)
		setcolor(9);
		if(i==2)
		setcolor(12);
		if(i==3)
		setcolor(10);
		for(h=0;h<9;++h)
		{
			circle(472,69+j,h);
			circle(503,69+j,h);
			circle(534,69+j,h);
			circle(565,69+j,h);
		}
	}
	////////////////////////////////////////
	setcolor(0);
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	outtextxy(32,412,"player1");
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	outtextxy(375,412,"player2");
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	outtextxy(375,31,"player3");
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	outtextxy(32,31,"player4");

	///////////////create press box in middle of box////////
	setfillstyle(1,15);
	bar3d(208,253,250,271,3,3);
	setcolor(4);
	settextstyle(SMALL_FONT,HORIZ_DIR,5);
	outtextxy(211,253,"press");
	mouse_on();

}
