#include"stdio.h"
#include"graphics.h"
#include"conio.h"
#include"dos.h"
#include"math.h"
#include"stdlib.h"


void main()
{
	int gd=DETECT,gm;
	float
i=0,j=100,me=75,ve=23,ma=105,ju=175,sa=10,ur=300,ne=200,pl=175,s=0;
	int x,y,k,tri[8],si,sx=random(300),sy=random(400),X,Y,ss;
	unsigned int
earth,moon,mercury,venus,mars,jupiter,saturn,uranus,neptune,pluto,sunsize,
ship,ship2;
	void
*ear,*moo,*mer,*ven,*mar,*jup,*sat,*ura,*nep,*plu,*sun,*ships,*ships2;
	x=300;
	y=210;

	initgraph(&gd,&gm,"c:\tc\bgi");

	setfillstyle(1,10);
	setcolor(2);
	fillellipse(50,50,13,13);
	earth=imagesize(35,35,65,65);
	ear=malloc(earth);
	getimage(35,35,65,65,ear);
	cleardevice();

	setfillstyle(1,15);
	setcolor(15);
	fillellipse(25,25,5,5);
	moon=imagesize(15,15,35,35);
	moo=malloc(moon);
	getimage(15,15,35,35,moo);
	cleardevice();

	setfillstyle(1,4);
	setcolor(4);
	fillellipse(15,15,4,4);
	mercury=imagesize(10,10,20,20);
	mer=malloc(mercury);
	getimage(10,10,20,20,mer);
	cleardevice();


	setfillstyle(1,11);
	setcolor(11);
	fillellipse(15,15,7,7);
	venus=imagesize(7,7,23,23);
	ven=malloc(venus);
	getimage(7,7,23,23,ven);
	cleardevice();


	setfillstyle(1,6);
	setcolor(6);
	fillellipse(20,20,14,14);
	mars=imagesize(5,5,35,35);
	mar=malloc(mars);
	getimage(5,5,35,35,mar);
	cleardevice();


	setfillstyle(1,7);
	setcolor(7);
	fillellipse(25,25,18,18);
	jupiter=imagesize(5,5,45,45);
	jup=malloc(jupiter);
	getimage(5,5,45,45,jup);
	cleardevice();


	setfillstyle(1,8);
	setcolor(8);
	fillellipse(50,50,12,12);
	uranus=imagesize(35,35,65,65);
	ura=malloc(uranus);
	getimage(35,35,65,65,ura);
	cleardevice();

	setfillstyle(1,12);
	setcolor(12);
	fillellipse(50,50,11,11);
	neptune=imagesize(35,35,65,65);
	nep=malloc(neptune);
	getimage(35,35,65,65,nep);
	cleardevice();

	setfillstyle(1,1);
	setcolor(1);
	fillellipse(50,50,8,8);
	pluto=imagesize(35,35,65,65);
	plu=malloc(pluto);
	getimage(35,35,65,65,plu);
	cleardevice();


	setcolor(14);
	setfillstyle(1,14);
	fillellipse(40,40,25,25);
	for(si=0; si<25; si++)
	{
	tri[0]=(40+25*cos(s));
	tri[1]=(40+25*sin(s));
	s=s+0.3;
	tri[2]=(40+25*cos(s));
	tri[3]=(40+25*sin(s));

	tri[4]=(40+40*cos((2*s-0.3)/2));
	tri[5]=(40+40*sin((2*s-0.3)/2));

	tri[6]=tri[0];
	tri[7]=tri[1];

	fillpoly(4,tri);

	}

	sunsize=imagesize(0,0,80,80);
	sun=malloc(sunsize);
	getimage(0,0,80,80,sun);
	cleardevice();

	setfillstyle(1,15);
	setcolor(15);
	fillellipse(40,40,33,16);
	fillellipse(40,25,15,10);
	setfillstyle(1,2);
	fillellipse(14,37,5,5);
	fillellipse(35,40,5,5);
	fillellipse(55,39,5,5);
	setfillstyle(1,4);
	fillellipse(25,39,5,5);
	fillellipse(46,40,5,5);
	fillellipse(65,37,5,5);
	setfillstyle(1,0);
	fillellipse(30,20,2,2);
	fillellipse(35,20,2,2);
	fillellipse(40,20,2,2);
	fillellipse(45,20,2,2);
	fillellipse(50,20,2,2);
	ship=imagesize(0,0,80,80);
	ships=malloc(ship);
	getimage(0,0,80,80,ships);
	cleardevice();

	setfillstyle(1,15);
	setcolor(15);
	fillellipse(40,40,33,16);
	fillellipse(40,25,15,10);
	setfillstyle(1,4);
	fillellipse(14,37,5,5);
	fillellipse(35,40,5,5);
	fillellipse(55,39,5,5);
	setfillstyle(1,2);
	fillellipse(25,39,5,5);
	fillellipse(46,40,5,5);
	fillellipse(65,37,5,5);
	setfillstyle(1,0);
	fillellipse(30,20,2,2);
	fillellipse(35,20,2,2);
	fillellipse(40,20,2,2);
	fillellipse(45,20,2,2);
	fillellipse(50,20,2,2);
	ship2=imagesize(0,0,80,80);
	ships2=malloc(ship2);
	getimage(0,0,80,80,ships2);
	cleardevice();



	setfillstyle(1,9);
	setcolor(9);
	fillellipse(45,45,16,16);
	setcolor(8);
	ellipse(45,45,125,390,20,7);
	setcolor(1);
	ellipse(45,45,120,400,23,8);
	setcolor(4);
	ellipse(45,45,120,400,25,9);
	setcolor(5);
	ellipse(45,45,120,424,28,10);
	setcolor(6);
	ellipse(45,45,115,425,30,11);
	saturn=imagesize(0,0,50,50);
	sat=malloc(saturn);
	getimage(0,0,75,75,sat);
	cleardevice();
	setcolor(15);


	for(i=0; i<1000 && !kbhit(); i++)
	{
		moveto(getmaxx()/2,getmaxy()/2);

lineto(random(600)+random(600)*cos(i),random(600)+random(600)*sin(i));
//		setcolor(i);
		delay(10);
	}
	cleardevice();

	delay(300);
	setlinestyle(0,0,3);
	rectangle(0,0,getmaxx(),getmaxy());
	delay(700);
	for(i=0; i<1000; i++)
	{
		putpixel(random(630),random(530),15);
		putpixel(random(630),random(530),11);
		delay(5);
	}
	setlinestyle(3,0,1);

//	ellipse(x,y,0,360,10+cos(0.2)+13,8+sin(0.2)+13);
	setlinestyle(0,0,1);

	for(k=0; k<200; k++)
	{
		i=i+0.2;
		j=j+0.7;
		me=me+0.1;
		ve=ve+0.3;
		ma=ma+0.1;
		ju=ju+0.08;
		sa=sa+0.07;
		ur=ur+0.06;
		ne=ne+0.05;
		pl=pl+0.04;
		putpixel(x+100*cos(i)+13,y+80*sin(i)+13,10);
//
putpixel(x+(100*cos(i))+(30*cos(j))+5,y+(80*sin(i))+(25*sin(j))+5,1);
		putpixel(x+60*cos(me)+4,y+40*sin(me)+4,4);
		putpixel(x+80*cos(ve)+7,y+60*sin(ve)+7,3);
		putpixel(x+125*cos(ma)+14,y+110*sin(ma)+14,6);
		putpixel(x+165*cos(ju)+18,y+130*sin(ju)+18,7);
		putpixel(x+220*cos(sa)+30+16,y+170*sin(sa)+30+16,9);
		putpixel(x+250*cos(ur)+12,y+200*sin(ur)+12,8);
		putpixel(x+280*cos(ne)+11,y+230*sin(ne)+11,12);
		putpixel(x+310*cos(pl)+8,y+250*sin(pl)+8,1);


	}


		setfillstyle(1,14);
		setcolor(14);
		fillellipse(x,y,25,25);
		delay(250);
		putimage(x-40,y-40,sun,XOR_PUT);
		setlinestyle(0,0,1);
		setfillstyle(1,14);
		setcolor(14);
		fillellipse(x,y,25,25);
		delay(250);
		putimage(x+100*cos(i),y+80*sin(i),ear,XOR_PUT);
		delay(250);

putimage(x+(100*cos(i))+(30*cos(j)),y+(80*sin(i))+(25*sin(j)),moo,XOR_PUT)
;
		delay(250);
		putimage(x+60*cos(me),y+40*sin(me),mer,XOR_PUT);
		delay(250);
		putimage(x+80*cos(ve),y+60*sin(ve),ven,XOR_PUT);
		delay(250);
		putimage(x+125*cos(ma),y+110*sin(ma),mar,XOR_PUT);
		delay(250);
		putimage(x+165*cos(ju),y+130*sin(ju),jup,XOR_PUT);
		delay(250);
		putimage(x+220*cos(sa),y+170*sin(sa),sat,XOR_PUT);
		delay(250);
		putimage(x+250*cos(ur),y+200*sin(ur),ura,XOR_PUT);
		delay(250);
		putimage(x+280*cos(ne),y+230*sin(ne),nep,XOR_PUT);
		delay(250);
		putimage(x+310*cos(pl),y+250*sin(pl),plu,XOR_PUT);


		putimage(x-40,y-40,sun,XOR_PUT);
		setlinestyle(0,0,1);
		setfillstyle(1,14);
		setcolor(14);
		fillellipse(x,y,25,25);

		putimage(x+100*cos(i),y+80*sin(i),ear,XOR_PUT);

putimage(x+(100*cos(i))+(30*cos(j)),y+(80*sin(i))+(25*sin(j)),moo,XOR_PUT)
;
		putimage(x+60*cos(me),y+40*sin(me),mer,XOR_PUT);
		putimage(x+80*cos(ve),y+60*sin(ve),ven,XOR_PUT);
		putimage(x+125*cos(ma),y+110*sin(ma),mar,XOR_PUT);
		putimage(x+165*cos(ju),y+130*sin(ju),jup,XOR_PUT);
		putimage(x+220*cos(sa),y+170*sin(sa),sat,XOR_PUT);
		putimage(x+250*cos(ur),y+200*sin(ur),ura,XOR_PUT);
		putimage(x+280*cos(ne),y+230*sin(ne),nep,XOR_PUT);
		putimage(x+310*cos(pl),y+250*sin(pl),plu,XOR_PUT);

	for(k=0; k<200; k++)
	{
		i=i+0.2;
		j=j+0.7;
		me=me+0.1;
		ve=ve+0.3;
		ma=ma+0.1;
		ju=ju+0.08;
		sa=sa+0.07;
		ur=ur+0.06;
		ne=ne+0.05;
		pl=pl+0.04;
		putpixel(x+100*cos(i)+13,y+80*sin(i)+13,10);
//
putpixel(x+(100*cos(i))+(30*cos(j))+5,y+(80*sin(i))+(25*sin(j))+5,1);
		putpixel(x+60*cos(me)+4,y+40*sin(me)+4,4);
		putpixel(x+80*cos(ve)+7,y+60*sin(ve)+7,3);
		putpixel(x+125*cos(ma)+14,y+110*sin(ma)+14,6);
		putpixel(x+165*cos(ju)+18,y+130*sin(ju)+18,7);
		putpixel(x+220*cos(sa)+30+16,y+170*sin(sa)+30+16,9);
		putpixel(x+250*cos(ur)+12,y+200*sin(ur)+12,8);
		putpixel(x+280*cos(ne)+11,y+230*sin(ne)+11,12);
		putpixel(x+310*cos(pl)+8,y+250*sin(pl)+8,1);


	}

	i=0;j=100;me=75;ve=23;ma=105;ju=175;sa=10;ur=300;ne=200;pl=175;


	while(!kbhit())

	{
		i=i+0.2;
		j=j+0.7;
		me=me+0.1;
		ve=ve+0.3;
		ma=ma+0.1;
		ju=ju+0.08;
		sa=sa+0.07;
		ur=ur+0.06;
		ne=ne+0.05;
		pl=pl+0.04;

		putimage(x-40,y-40,sun,XOR_PUT);
		setlinestyle(0,0,1);
		setfillstyle(1,14);
		setcolor(14);
		fillellipse(x,y,25,25);

		putimage(x+100*cos(i),y+80*sin(i),ear,XOR_PUT);

putimage(x+(100*cos(i))+(30*cos(j)),y+(80*sin(i))+(25*sin(j)),moo,XOR_PUT)
;
		putimage(x+60*cos(me),y+40*sin(me),mer,XOR_PUT);
		putimage(x+80*cos(ve),y+60*sin(ve),ven,XOR_PUT);
		putimage(x+125*cos(ma),y+110*sin(ma),mar,XOR_PUT);
		putimage(x+165*cos(ju),y+130*sin(ju),jup,XOR_PUT);
		putimage(x+220*cos(sa),y+170*sin(sa),sat,XOR_PUT);
		putimage(x+250*cos(ur),y+200*sin(ur),ura,XOR_PUT);
		putimage(x+280*cos(ne),y+230*sin(ne),nep,XOR_PUT);
		putimage(x+310*cos(pl),y+250*sin(pl),plu,XOR_PUT);

		for(ss=0; ss<7; ss++)
		{
			X=random(10);
			Y=random(10);

			if(X>3)
				sx=sx+5;
			else
				sx=sx-5;

			if(Y>3)
				sy=sy+5;
			else
				sy=sy-5;

			if(ss%2==0)
			{
				putimage(sx,sy,ships,XOR_PUT);
				delay(100);
				putimage(sx,sy,ships,XOR_PUT);
			}
			else
			{
				putimage(sx,sy,ships2,XOR_PUT);
				delay(100);
				putimage(sx,sy,ships2,XOR_PUT);
			}

		}
		if(sx>getmaxx() || sx<=0)
			sx=random(300);

		if(sy>getmaxy() || sy<=0)
			sy=random(300);
		putimage(x+100*cos(i),y+80*sin(i),ear,XOR_PUT);

putimage(x+(100*cos(i))+(30*cos(j)),y+(80*sin(i))+(25*sin(j)),moo,XOR_PUT)
;
		putimage(x+60*cos(me),y+40*sin(me),mer,XOR_PUT);
		putimage(x+80*cos(ve),y+60*sin(ve),ven,XOR_PUT);
		putimage(x+125*cos(ma),y+110*sin(ma),mar,XOR_PUT);
		putimage(x+165*cos(ju),y+130*sin(ju),jup,XOR_PUT);
		putimage(x+220*cos(sa),y+170*sin(sa),sat,XOR_PUT);
		putimage(x+250*cos(ur),y+200*sin(ur),ura,XOR_PUT);
		putimage(x+280*cos(ne),y+230*sin(ne),nep,XOR_PUT);
		putimage(x+310*cos(pl),y+250*sin(pl),plu,XOR_PUT);


	}


	getch();
	closegraph();
}
