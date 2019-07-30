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
	float x,y,r,d,x1,y1;
	public:
	myCircle();      //Constructor
	void showCircle();
	int sign(int);
	};

int myCircle::sign(int xx)
		{
		if(xx<0)
		return -1;
		if(xx==0)
		return 0;
		if(xx>0)
		return 1;
		return 0;
		}
myCircle::myCircle()
		{
		x=0;y=0;
		cout<<"
	"Enter The Co-Ordinates Of The Circle ":=";
		cin>>x1>>y1;
		cout<<"
	"Enter The Radius Of The Circle ":=";
		cin>>r;
		}

void myCircle::showCircle()
		{
		char *s;
		int s1,s2,ic;
		x=x1;y=y1;
		float i=0;
		while(i<=360)
			{
			x=x1+r*cos(i);
			y=y1+r*sin(i);
			putpixel((x+320),480-(y+240),6);
			i+=0.5;
			}
		setcolor(15);
		sprintf(s,"Center(%d,%d)",x1,y1);
		outtextxy(40,10,"The Center Is At :=");
		outtextxy(40,20,s);
		sprintf(s,"Radius=%g",r);
		outtextxy(40,30,s);
		getch();
		}
void main()
	{
	int gd=DETECT,gm,i,j,xx=220,xxx=430;
	clrscr();
	myCircle a;
	char *mess[]={"D","D","A"," ","C","I","R","C","L","E"," ","A","L","G","O","R","I","T","H","M"};
	initgraph(&gd,&gm,"..\bgi");
	cleardevice();
	rectangle(120,40,320,240);
	rectangle(320,40,520,240);
	rectangle(120,240,320,440);
	rectangle(320,240,520,440);
	for(i=0,j=19;i<12,j>=10;i++,j--)
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
	closegraph();
	}

