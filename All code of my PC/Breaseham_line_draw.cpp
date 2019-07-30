#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
class lines
	{
	private:
	       int length,x1,y1,x2,y2,x,y,dx,dy,wx,wy,w,width;
	public:
	      lines();      //Constructor
	      void showline();
	      int sign(int);
	};

int lines::sign(int xx)
		{
		if(xx<0)
		return -1;
		if(xx==0)
		return 0;
		if(xx>0)
		return 1;
		return 0;
		}
lines::lines()
		{
		x=0;y=0;
		cout<<"
	"Enter The Co-Ordinates (x1,y1) ":=";
		cin>>x1>>y1;
		cout<<"
	"Enter The Co-Ordinates (x2,y2) ":=";
		cin>>x2>>y2;
		cout<<"
	"Enter The Width Of The Line ":=";
		cin>>width;
		}

void lines::showline()
		{
		char *s;
		int s1,s2,ic;
		float temp;
		x=x1;y=1;
		w=width;
		if(y2-y1)
		wx=((w-1)/2)*(sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))/abs(y2-y1));
		if(x2-x1)
		wy=((w-1)/2)*(sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))/abs(x2-x1));
		dx=abs(x2-x1);
		dy=abs(y2-y1);
		s1=sign(x2-x1);
		s2=sign(y2-y1);
		if(dy>dx)
		wy=wx;
		if(dy>dx)
			{
			temp=dy;
			dy=dx;
			dx=temp;
			ic=1;
			}
		else
		ic=0;
		float d=2*dy-dx;
		setcolor(0);
		for(int i=1;i<=dx;i++)
			{
			for(int j=0;j<wy;j++)
			putpixel((x+320),480-(y+240+j),5);
			for(j=0;j<wy;j++)
			putpixel((x+320),480-(y+240-j),5);
			putpixel((x+320),480-(y+240),5);
			while(d>=0)
				{
				if(ic==1)
				x+=s1;
				else
				y+=s2;
				d-=2*dx;
				}
			if(ic==1)
				y+=s2;
			else
				x+=s1;
			d+=2*dy;
			}
		setcolor(15);
		outtextxy(20,10,"The Points Are:=");
		sprintf(s,"A(%d,%d)",x1,y1);
		outtextxy(20,20,s);
		sprintf(s,"B(%d,%d)",x2,y2);
		outtextxy(20,30,s);
		getch();
		}
void main()
	{
	int gd=DETECT,gm,i,j,xx=200,xxx=470;
	clrscr();
	lines a;
	char *mess[]={"B","R","E","S","E","N","H","A","M","'","S"," ","L","I","N","E"," ","A","L","G","O","R","I","T","H","M"};
	initgraph(&gd,&gm,"..\bgi");
	cleardevice();
	rectangle(120,40,320,240);
	rectangle(320,40,520,240);
	rectangle(120,240,320,440);
	rectangle(320,240,520,440);
	for(i=0,j=25;i<14,j>=12;i++,j--)
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
	a.showline();
	closegraph();
	}
