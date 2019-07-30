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
	int x,y,r,d,x1,y1,minor,major,dtheta,ratio,a,b,x2,y2;
	public:
	myCircle();      //Constructor
	void showCircle();
	};

myCircle::myCircle()
		{
		x=0;y=0;
		cout<<"
	"Enter The Major & Minor Axis Of Ellipse ":=";
		cin>>major>>minor;
		cout<<"
	"Enter The Center Of The Ellipse ":=";
		cin>>x>>y;
		}

void myCircle::showCircle()
		{
		char *s;
                int ax,ay;
                float ar;
                x1=1;
                ratio=major/minor;
                getaspectratio(&ax,&ay);
		ar=1;
//                ar=ay/ax;
		while(x1<=major)
			{
			y1=minor*sqrt((1-(x1*x1/major*major)));
			putpixel((x+x1*ar+320),(y+y1+240),5);
			putpixel((x+x1*ar+320),(y-y1+240),5);
			putpixel((x-x1*ar+320),(y-y1+240),5);
			putpixel((x-x1*ar+320),(y+y1+240),5);
                        dtheta=1/sqrt(x1*x1+y1*y1);
//                        x2=x1+cos(dtheta)-ratio*y1*sin(dtheta);
//                        y2=y1+cos(dtheta)+1/ratio*x1*sin(dtheta);
                        x1++;
//                        y1=y2;
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
	}

