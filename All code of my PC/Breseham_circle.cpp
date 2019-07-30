#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
class myCircle
	{
	private:
	int x,y,r,d,x1,y1;
	public:
	myCircle();      //Constructor
	void showCircle();
	};

myCircle::myCircle()
		{
		x=0;y=0;
		cout<<"
	"Enter The Co-Ordinates Of The Circle ":=";
		cin>>x>>y;
		cout<<"
	"Enter The Radius Of The Circle ":=";
		cin>>r;
		}

void myCircle::showCircle()
		{
		char *s;
		x1=0;y1=r;
		d=3-2*r;
		while(x1<=y1)
			{
			putpixel((x+x1+320),(y+y1+240),5);
			putpixel((x-x1+320),(y+y1+240),5);
			putpixel((x+x1+320),(y-y1+240),5);
			putpixel((x-x1+320),(y-y1+240),5);
			putpixel((x+y1+320),(y+x1+240),5);
			putpixel((x-y1+320),(y+x1+240),5);
			putpixel((x+y1+320),(y-x1+240),5);
			putpixel((x-y1+320),(y-x1+240),5);
			if(d<0)
			d+=4*x1+6;
			else
				{
				d+=4*(x1-y1)+10;
				y1--;
				}
			x1++;
			}
		setcolor(5);
		outtextxy(318+x,235+y,".");
		setcolor(15);
		sprintf(s,"Center(%d,%d)",x,y);
		outtextxy(20,10,"The Center Is At");
		outtextxy(20,20,s);
		sprintf(s,"Radius=%d",r);
		outtextxy(20,30,s);
		getch();
		}
void main()
	{
	int gd=DETECT,gm,i,j,xx=190,xxx=480;
	clrscr();
	myCircle a;
	char *mess[]={"B","R","E","S","E","N","H","A","M","'","S"," ","C","I","R","C","L","E"," ","A","L","G","O","R","I","T","H","M"};
	initgraph(&gd,&gm,"..\bgi");
	cleardevice();
	rectangle(120,40,320,240);
	rectangle(320,40,520,240);
	rectangle(120,240,320,440);
	rectangle(320,240,520,440);
	for(i=0,j=27;i<16,j>=14;i++,j--)
		{
		xx+=10;
		outtextxy(xx,10,mess[i]);
		xxx-=10;
		outtextxy(xxx,10,mess[j]);
		delay(100);
		}
	for(i=130;i<=510;i+=10)
		for(j=50;j<=430;j+=10)
		putpixel(i,j,15);
	for(i=130;i<=510;i+=10)
		{
		if(i==320)
		continue;
		outtextxy(i,237,"+");
		}
	for(i=50;i<=430;i+=10)
		{
		if(i==240)
		continue;
		outtextxy(317,i,"-");
		}
	outtextxy(310,230,"O");
	outtextxy(530,240,"X");
	outtextxy(320,450,"-Y");
	outtextxy(100,240,"-X");
	outtextxy(320,30,"Y");
	a.showCircle();
//	closegraph();
	}

