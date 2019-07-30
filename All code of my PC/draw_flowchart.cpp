#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>

int flag=0;
int xval;

class shape
{
	protected:
	static int line0;
	static int line1;

	public:

	shape()                /* Constructor used for initialisation */
	{
		line0=1;
		line1=0;
	}

	output(char *text,int a,int b,int ln)
	{
		outtextxy(b+95+xval,line0+a,text);
		getch();
			line0 =line0 + ln;

		if(flag==1)
			line1=line1+ln;
	}


	void adjust()
	{
		line0 = line0 - line1;
		line1=0;
	}
};
int shape::line0 = 0;
int shape::line1 = 0;

class rect:public shape
{
	public:

	void draw(char *in)
	{
		rectangle(xval+50,line0+20,xval+200,line0+40);
		output(in,25,0,40);
	}
};

class cir:public shape
{
	public:

	void draw(char *in)
	{
		circle(xval+120,line0+40,20
		);
		output(in,36,22,60);
	}
};

class isos:public shape
{
	public:

	void draw(char *in)
	{
		line(xval+50,line0+20,xval+200,line0+20);
		line(xval+40,line0+40,xval+190,line0+40);
		line(xval+50,line0+20,xval+40,line0+40);
		line(xval+200,line0+20,xval+190,line0+40);

		output(in,25,0,40);
	}
};

class diamond:public shape
{
	public:

	draw(char *in)
	{
		line(xval+120,line0+20,xval+50,line0+40);
		line(xval+120,line0+20,xval+190,line0+40);
		line(xval+50,line0+40,xval+120,line0+60);
		line(xval+190,line0+40,xval+120,line0+60);
		outtextxy(xval+100,line0+62,"Y");
		outtextxy(xval+195,line0+25,"N");

		output(in,35,0,60);

	}
};

class myline:public shape
{
	public:

	void draw()
	{
		line(xval+120,line0,xval+120,line0+20);
	}
};

class myline1:public shape
{
	public:

	void draw()
	{
		line(xval+190,line0-20,xval+290,line0-20);
		line(xval+290,line0-20,xval+290,line0+20);

	}
};

class myline2:public shape
{
	public:

	void draw()
	{
		line(xval+120,line0,xval+120,line0+10);
		line(xval+120,line0+10,xval-50,line0+10);

	}
};

class myline3:public shape
{
	public:

	void draw()
	{
		line(xval+120,line0,xval+120,line0+20);
	}
};

   class graph
      {
	public:
	 void close()
	    {
		closegraph();
		restorecrtmode();
	    }
    }g;

    int  main(void)
     {
       int gdriver, gmode,errorcode;
       clrscr();
       gdriver = DETECT;
		/* initialize graphics mode */
       initgraph(&gdriver, &gmode, " ");

		/* read result of initialization */
       errorcode = graphresult();

	if (errorcode != grOk)  /* an error occurred */
		{
		   printf("Graphics error: %s
", grapherrormsg(errorcode));
		   printf("Press any key to halt:");
		   getch();
		   exit(1);             /* return with error code */
		}
	shape s;
	rect r;
	cir c;
	isos i;
	diamond d;
	myline l;
	myline1 l1;
	myline2 l2;
	myline3 l3;
	cleardevice();
	c.draw("B");                 /* Begin  */
	l.draw();
	i.draw("Input a");
	l.draw();
	i.draw("Input b");
	l.draw();
	r.draw("c = a+b");
	l.draw();
	d.draw("Is c > 100");
	l.draw();
	l1.draw();

	flag=1;
	xval=170;
	i.draw("Print NO");
	l2.draw();
	s.adjust();
	flag=0;
	xval=0;

	i.draw("print YES");
	l.draw();
	c.draw("F");      /* Finish */

	outtextxy(240,50,"Flowchart to be read in downward direction. ");
	getch();
	g.close();
	return(0);
	     }
