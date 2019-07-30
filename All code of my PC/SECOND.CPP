#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
#include<conio.h>
  int poly[]={0,0,639,0,639,479,0,479};
int i,o1=0,o2=0,o3=0,o4=0,o5=0,o6=0,o7=0,o8=0,o9=0,o10=0,o11=0,o12=0,o13=0,o14=0,o15=0,o16=0,la,x,y;
void second()
{
	mouse_off();
	 setbkcolor(7);
	 setfillstyle(8,7);
	 fillpoly(4,poly);
	//Dip boundary//

		setcolor(10);
	settextstyle(0,HORIZ_DIR,3);
       //	setcolor(5);
//	bar3d(48,88,310,110,0,0);
//	bar3d(48,128,310,150,0,0);
	outtextxy(50,50,"PLAYER CATAGORY");
	settextstyle(0,HORIZ_DIR,2);
	setcolor(6);
	outtextxy(50,90,"Choose Any One :");
	setcolor(10);
	outtextxy(50,130,"YOU Vs 1 PLAYER");
	outtextxy(50,170,"YOU Vs 3 PLAYERS");
	mouse_on();
	delay(20);

		while(1)
		{
			get_position(&x,&y);
			gotoxy(1,1);
		       //	printf("X=%d Y=%d",x,y);
			if(left_button_pressed())
			{
				if(x>48 && x<310 && y>128 &&y<150)
				{
					mouse_off();
					setcolor(4);
					settextstyle(0,HORIZ_DIR,2);
					outtextxy(50,90,"YOU Vs 1 PLAYER");
					delay(10);
					mouse_on();
					la=1;
					break;

				}
				else if(x>48 && x<310 && y>168 &&y<190)
				{
					mouse_off();
					setcolor(4);
					settextstyle(0,HORIZ_DIR,2);
					outtextxy(50,130,"YOU Vs 3 PLAYERS");
					delay(10);
					mouse_on();
					la=0;
					break;
				}
			}
		}
		mouse_off();
	setfillstyle(1,0);
	bar(0,0,639,479);
/*	bar3d(48,88,150,110,0,0);
	bar3d(48,128,150,150,0,0);
	bar3d(48,168,150,190,0,0);
	bar3d(48,208,150,230,0,0);    */
	settextstyle(0,HORIZ_DIR,2);
	setcolor(5);
	outtextxy(50,50,"WHICH DICE DO YOU WANT TO SELECT");
	settextstyle(0,HORIZ_DIR,2);
	setcolor(14);
	outtextxy(50,90,"YELLOW");
	setcolor(1);
	outtextxy(50,130,"BLUE");
	setcolor(4);
	outtextxy(50,170,"RED");
	setcolor(2);
	outtextxy(50,210,"GREEN");
	mouse_on();
	while(1)
	{
			get_position(&x,&y);
			gotoxy(1,1);
			//printf("X=%d Y=%d",x,y);
		if(left_button_pressed())
			{
				if(x>48 && x<150 && y>88 &&y<110)
				{
					if(la==1)
					{
					o1=1;o2=2;o3=3;o4=4;o5=9;o6=10;o7=11;o8=12;
					}
					else
					{
					o1=1;o2=2;o3=3;o4=4;o5=5;o6=6;o7=7;o8=8;o9=9;o10=10;o11=11;o12=12;o13=13;o14=14;o15=15;o16=16;
					}
					mouse_off();
					settextstyle(0,HORIZ_DIR,2);
					setcolor(15);
					outtextxy(50,90,"YELLOW");
					delay(10);
					mouse_on();
					break;

				}

				if(x>48 && x<150 && y>128 &&y<150)
				{
					if(la==1)
					{
					o1=5;o2=6;o3=7;o4=8;o5=13;o6=14;o7=15;o8=16;
					}
					else
					{
					o1=5;o2=6;o3=7;o4=8;o5=9;o6=10;o7=11;o8=12;o9=13;o10=14;o11=15;o12=16;o13=1;o14=2;o15=3;o16=4;
					}
					mouse_off();
					setcolor(15);
					outtextxy(50,130,"BLUE");
					delay(10);
					mouse_on();
					break;

				}

			   if(x>48 && x<150 && y>168 &&y<190)
				{
					if(la==1)
					{
					o1=9;o2=10;o3=11;o4=12;o5=1;o6=2;o7=3;o8=4;
					}
					else
					{
					o1=9;o2=10;o3=11;o4=12;o5=13;o6=14;o7=15;o8=16;o9=1;o10=2;o11=3;o12=4;o13=5;o14=6;o15=7;o16=8;
					}
					mouse_off();
					setcolor(4);
					outtextxy(50,170,"RED");
					delay(10);
					mouse_on();
					break;
				}
												/*	bar3d(48,88,150,110,0,0);
	bar3d(48,128,150,150,0,0);
	bar3d(48,168,150,190,0,0);
	bar3d(48,208,150,230,0,0);    */
			   if(x>48 && x<150 && y>208 &&y<230)
				{
					if(la==1)
					{
					o1=13;o2=14;o3=15;o4=16;o5=5;o6=6;o7=7;o8=8;
					}
					else
					{
					o1=13;o2=14;o3=15;o4=16;o5=1;o6=2;o7=3;o8=4;o9=5;o10=6;o11=7;o12=8;o13=9;o14=10;o15=11;o16=12;
					}
					mouse_off();
						setcolor(15);
					outtextxy(50,210,"GREEN");
					delay(700);
					mouse_on();
					break;
				}

			}
		}
	setfillstyle(1,0);
	bar(0,0,639,479);
	setcolor(15);
	mouse_on();


}