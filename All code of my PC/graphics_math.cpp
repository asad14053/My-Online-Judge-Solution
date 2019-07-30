#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<string.h>
#include<fstream.h>
#include<dos.h>
int i;
////////////////this class will make the first page of my
program//////////
class firstpage
{
public:
void driver()
{
 /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;


   /* initialize graphics and local
   variables */
   initgraph(&gdriver, &gmode, "..\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      cout<<"Graphics error:
"<< grapherrormsg(errorcode);
      cout<<"Press any key to halt:";
      getch();

      exit(1);    /* terminate with an error code */
   }

}
void front()
{    int midx, midy;
 int stangle = 45, endangle = 135;
   int radius = 100;

 midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());
   midy-=150;
   midx-=120;
   int midx2=midx+65,midy2=midy;

   int n=5,m=6;
   for(int i=0;i<30;i++)
   /* draw arc */
  { setcolor(n);
   arc(midx-90, midy, stangle-10, endangle+10, radius-40);
   setcolor(m);

   arc(midx2-90,midy+=2,stangle-10,endangle+10,radius-40);

  }
  setcolor(10);
  settextstyle(0,0,2);
  outtextxy(midx-120,midy2-30,"Grapher");
  settextstyle(1,0,2);
  outtextxy(midx-90,midy2+30,"PARO SOFT");

  settextstyle(10,0,2);
  outtextxy(midx-20,midy2+45,"BASIC GRAPHS");


  settextstyle(0,0,1);
  outtextxy(midx+200,midy2+95," (ALL RIGHTS RESERVERD) ");

  int
xmove1=getmaxx()/4,ymove1=getmaxy()/2,xmove2=(getmaxx()/2)+130,ymove2=getm
axy()-150;
  settextstyle(0,0,1);
  setlinestyle(0,0,3);
   rectangle(0,0,632,479);
   rectangle(getmaxx()/32,getmaxy()-30,getmaxx()-27,getmaxy()-8);
   rectangle(xmove1,ymove1,xmove2,ymove2);
   xmove1+=20;ymove1+=10;
   outtextxy(xmove1,ymove1,"welcome to Graph Maker");
   ymove1+=20;
   outtextxy(xmove1,ymove1,"Version   :  1.0 ");
   ymove1+=20;
   outtextxy(xmove1,ymove1,"Developer :  Mamoon Ur Rasheed" );
   ymove1+=20;
   outtextxy(xmove1,ymove1,"E-mail    :  mamoonr@gmail.com");






int no1=24,no2=453,no3=48,no4=467;
   int a=50,b=457;
   for(i=0;i<=28;i++)
   {
    bar(no1,no2,no3,no4);
    setcolor(WHITE);
    outtextxy(a,b,"PLZ WAIT");

    delay(150);
    setcolor(0);
    outtextxy(a,b,"PLZ WAIT");
   // setcolor(0);
   // line(42,452,42,468);
    no3+=20;
  //  no1+=21;
    a+=20;

   }

   outtextxy(220,457,"press any key to continue");



}

};
//////////////////////////////////////////////////////////////////////////
/
//value class that contains information about the values of
//x axis and y axis values and have other protected data that is useful
for
//the drawing of graph and other calculation on the values of x and y
axis
//////////////////////////////////////////////////////////////////////////
/
class value
{
protected:
float x[24],y[24];
static float xmean,ymean;
int mnx,mny,mxx,mxy,xzero,yzero;
public:
	value()
	{ for(i=0;i<24;i++)
	  {x[i]=i-12;y[i]=i;} }

	value(int a)
	{ for(i=0;i<24;i++)
	{x[i]=i-12;y[i]=x[i];}	}

    void getvalue() ;
    void showvalue();
    void minmax() ;
    void xymean();
    void setxymean() ;
};
float value::xmean=0;
float value::ymean=0;
/////////////////////////////////////////////////////////////////////////
//class that will have the function to initialize the graphic drive
//
//and will draw the xy lines along wiht xy values. this class has the
//
//ability to draw two type of graph ,1.curve graph ,2.linegraph
//
/////////////////////////////////////////////////////////////////////////
class graph:public value
{ public:
  graph(): value()
  {}
  graph(int a): value(a)
  {}
  void graphicdriver();
  void xylines();
  void xyvalues();
  void linegraph();
  void curvegraph() ;
};

//////////////////////////////////////////////////////////////////////////
//
//this class contains such  type of function that can get the values of
///
//yaxis from an entered fuction from the
user///////////////////////////////
//////////////////////////////////////////////////////////////////////////
//
class func_value_extr:public graph
{
public:
func_value_extr(): graph()
{}
void getfunctype();
void ax();
void ax_c();
void ax_bx_c();
void write_obj(char*);
void write_obj_multi(func_value_extr*,int);
void copy_data(char*);
void read_obj(char *);
};

	//////////function belongs to the value class////////////////////
	void value::getvalue()
	{
	cout<<"enter the value of x and y (max 24 each) "<<endl;
	for(i=0;i<24;i++)
	cin>>x[i]>>y[i];
	xzero=-3000;yzero=-3000;
	}



			void value::showvalue()
			{
			cout<<"values of x and y "<<endl;
			cout<<"x		y"<<endl;
			for(i=0;i<24;i++)
			cout<<"			"<<x[i]<<"		"<<y[i]<<endl;
			cout<<"			x axis value = "<<xmean<<"y axix value = "
<<ymean<<endl;
			}


	void value::minmax()
	{
	mnx=x[23];mxx=x[23];mny=y[23];mxy=y[23];
	for(i=0;i<24;i++)
	{if(x[i]<mnx)
	mnx=x[i];
	if(x[i]>mxx)
	mxx=x[i];
	if(y[i]<mny)
	mny=y[i];
	if(y[i]>mxy)
	mxy=y[i];
	if(x[i]==0)
	xzero=i;
	if(y[i]==0)
	yzero=i; }
	}

		      void value::xymean()
		      {
		      float temp;
			if(mxx>(-mnx))
			temp=mxx;
			else
			temp=-mnx;

			xmean=temp/12;

			if(mxy>(-mnx))
			temp=mxy;
			else
			temp=-mny;

			ymean=temp/12;

			int no;
			float expo;
			no=xmean;
			expo=xmean-no;
			if(expo<0.1)
			xmean=xmean-expo;

			if(expo>=0.5)
			{xmean=xmean-expo; xmean++;}
			else
			if(expo>=0.1)
			{xmean-=expo;xmean+=0.5;}
			if(xmean<1)
			xmean=1;

			no=ymean; expo=ymean-no;
			if(expo<0.1)
			ymean=ymean-expo;

			if(expo>=0.5)
			{ymean=ymean-expo; ymean++;}
			if(expo>=0.1)
			{ymean-=expo; ymean+=0.5;}

			if(ymean<1)
			ymean=1;
		    }


	void value::setxymean()
	{
	cout<<"enter the value for x-axis "<<endl;
	cin>>xmean;
	cout<<"enter the value for y-axis "<<endl;
	cin>>ymean;
	}

//////////////////////////////////////////////////////////////////////////
/
 ////////////////////////end of value class
functions///////////////////////

//////////////////////////////////////////////////////////////////////////
/
 ///////////////////////starting of graph calss
function////////////////////

//////////////////////////////////////////////////////////////////////////
/


		void graph::graphicdriver()
		{
		int gdriver = DETECT, gmode, errorcode;
		/* initialize graphics and local variables */
		initgraph(&gdriver, &gmode, "c:\tc\bgi");

		 /* read result of initialization */
		errorcode = graphresult();
		/* an error occurred */

		if (errorcode != grOk)
		{
		 cout<<"Graphics error:
"<< grapherrormsg(errorcode);
		 cout<<"Press any key to halt:";
		 getch();
		 exit(1);
		}
		}



	void graph::xylines()
	{
	setbkcolor(9);
	setcolor(4);
	setlinestyle(0,0,3);
	line(7,getmaxy()/2,getmaxx()-7,getmaxy()/2);
	line(getmaxx()/2,7,getmaxx()/2,getmaxy()-7);
	setlinestyle(0,0,1);
	int n=7,n2=getmaxy()/2,n3=5;
	for(i=0;i<25;i++)
	{setcolor(1);
	 circle(n,n2,2);
	 circle(getmaxx()/2,n3,2);
	 n+=26;
	 n3+=26;}
	}


		void graph::xyvalues()
		{
		float xval=0,yval=0;
		char xptr[25];
		char yptr[25];
		int no,expo;
		float expo_float;
		char temp[10];
		int xmove=(getmaxx()/2)+26;
		int ymove=(getmaxy()/2)-26;
		outtextxy((getmaxx()/2)-9,(getmaxy()/2)+4,"0");
		setcolor(15);
		for(i=0;i<12;i++)
		{xval+=xmean;
		no=xval;
		expo_float=xval-no;
		expo_float*=100;
		expo=expo_float;
			if(expo!=0)
			{itoa(no,xptr,10);
			strcat(xptr,".");
			itoa(expo,temp,10);
			strcat(xptr,temp);}
				else
				itoa(xval,xptr,10);
			if(expo==0)
			{settextstyle(0,0,1);
			outtextxy(xmove,(getmaxy()/2)+5,xptr); 	}
				else
				{ settextstyle(0,1,1);
				outtextxy(xmove,(getmaxy()/2)+5,xptr);	}
		xmove+=26;
		yval+=ymean;
		no=yval;
		expo_float=yval-no;
		expo_float*=100;
		expo=expo_float;

			if(expo!=0)
			{itoa(no,yptr,10);
			strcat(yptr,".");
			itoa(expo,temp,10);
			strcat(yptr,temp); }
				else
				itoa(yval,yptr,10);

		settextstyle(0,0,1);
		outtextxy((getmaxx()/2)-10,ymove,yptr);
		outtextxy((getmaxx()/2)-10,ymove,yptr);
		ymove-=26;
		}



		xval=0;yval=0;
		xmove=(getmaxx()/2)-26;
		ymove=(getmaxy()/2)+26;

		for(i=0;i<12;i++)
		{xval-=xmean;
		no=xval;
		expo_float=-(xval-no);
		expo_float*=100;
		expo=expo_float;

			if(expo!=0)
			{itoa(no,xptr,10);
			strcat(xptr,".");
			itoa(expo,temp,10);
			strcat(xptr,temp);}
				else
				itoa(xval,xptr,10);

			if(expo==0)
			{settextstyle(0,0,1);
			outtextxy(xmove,(getmaxy()/2)+5,xptr);}
				else
				{settextstyle(0,1,1);
				outtextxy(xmove,(getmaxy()/2)+5,xptr);}

		xmove-=26;
		yval-=ymean;
		no=yval;
		expo_float=-(yval-no);
		expo_float*=100;
		expo=expo_float;

		if(expo!=0)
		{itoa(no,yptr,10);
		strcat(yptr,".");
		itoa(expo,temp,10);
		strcat(yptr,temp);}
			else
			itoa(yval,yptr,10);

		settextstyle(0,0,1);
		outtextxy((getmaxx()/2)-18,ymove,yptr);
		ymove+=26;
		}
		}





	void graph::linegraph()
	{
	float xline_val,yline_val;
	float x1,y1,x2,y2;
	setcolor(222);
		for(i=1;i<24;i++)
		{
		if(x[i]>=0 )
		{xline_val=x[i]/xmean;
		 xline_val*=26;
		 yline_val=y[i]/ymean;
		 yline_val*=26;
		 x1=(getmaxx()/2)+xline_val;
		 y1=getmaxy()/2;
		 x2=x1;
		 y2=(getmaxy()/2)-yline_val;
		 line(x1,y1,x2,y2); delay(200);}

			else
			if(x[i]<0 )
			{xline_val=-(x[i]/xmean);
			xline_val*=26;
			yline_val=y[i]/ymean;
			yline_val*=26;
			x1=(getmaxx()/2)-xline_val;
			y1=getmaxy()/2;
			x2=x1;
			y2=(getmaxy()/2)-yline_val;
			line(x1,y1,x2,y2);delay(200);}
		    }
	}



			void graph::curvegraph()
			{
			float xline_val,yline_val,x1,y1,x2,y2;

			xline_val=x[0]/xmean;
			xline_val*=26;
			yline_val=y[0]/ymean;
			yline_val*=26;

			x1=(getmaxx()/2)+xline_val;
			y1=(getmaxy()/2)-yline_val;
			for(i=1;i<24;i++)
			{xline_val=x[i]/xmean;
			xline_val*=26;
			yline_val=y[i]/ymean;
			yline_val*=26;

			x2=(getmaxx()/2)+xline_val;
			y2=(getmaxy()/2)-yline_val;
			line(x1,y1,x2,y2);
			delay(200);
			 x1=x2;y1=y2;
			}
			}
//////////////////////////////////////////////////////////////////////////
/
//////////////////end of value graph functions
////////////////////////////
//////////////////////////////////////////////////////////////////////////
/
///////////starting of func_value_extr class
functions/////////////////////
//////////////////////////////////////////////////////////////////////////
/

void func_value_extr::getfunctype()
{
cout<<"			choose function type "<<endl;
cout<<"			1.ax^n
			2.ax^n+c
			3.ax^n+bx^n+c "<<endl;
char choic[20],c='y';
int choice;

i=0;
while(c=='y')
{

cin>>choic;
clrscr();
if(choic[0]=='1'||choic[0]=='2'||choic[0]=='3')
{if(choic[1]=='
