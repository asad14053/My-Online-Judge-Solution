


	     /****************** Headers ****************/


#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<math.h>

	    /****************** Function declarations *********/
//music(int);
void close();
 float ex(float a);
float tri(float a,int s);
float general(int s,float a,float f);
int g=0,cou=0;
float l,q,d,w,sinsin=0;
void user_interface();
void menu();
void mouse_reset();
void mouse_on();
int right_button_pressed();
int left_button_pressed();
void mouse_off();
void mouse_position();


	    /************** End of function declarations **********/



void main()
{
clrscr();
   int driver=DETECT,mode;
   initgraph(&driver,&mode,"c:\\TC\\BGI");
   user_interface();
   closegraph();
}




void menu()
{
   cleardevice();
   setfillstyle(1,7);
     floodfill(10,10,getmaxcolor());
     settextstyle(1,0,3);
     outtextxy(150,220,"LOADING ......................");
	setcolor(14);
	rectangle(150,250,383,250);
	settextstyle(1,0,3);
     outtextxy(150,250,"Please,Wait..................");
     setcolor(4);
     for(int l=150;l<=383;l++){
     line(l,250,l,250);
     delay(10);
     }

   int x,y,i,maxx,maxy,color=8;
   maxx=getmaxx();
   maxy=getmaxy();

     for(y=0;y<maxy;y++)
	    for(x=0;x<maxx;x++)
	       putpixel(x,y,color);
	       mouse_reset();
   mouse_on();


int midx, midy;
   int stangle =360, endangle =0;
   int xradius =100, yradius = 50;
   int left,b,s, top, right, bottom,xx,yy;
    int xpoly[8]={530,0,550,0,550,20,530,20};
   char str[5];
   float a,f;
   int xmax, ymax,number;
      setcolor(1);
  fillpoly(4,xpoly);
   setcolor(1);
   xmax = getmaxx()/3+6;
   setcolor(10);
   ymax = getmaxy()/6+201;
   midx = getmaxx()/2;
   midy = getmaxy()/6 ;
   left = getmaxx() / 2 - 100;
   top = getmaxy() / 2 - 110;
   right = getmaxx() / 2 + 100;
   bottom = getmaxy() / 2 + 100;
   setfillstyle(1,8);
   bar3d(left,top,right,bottom,6,1);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(230,290,"1");
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(230,320,"0"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(230,260,"5"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(230,220,"9"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(225,180,"x3");  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(300,320,"-"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(350,320,"+"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(390,320,"=");  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(390,290,"/");
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(395,260,"*"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(265,260,"6"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(305,260,"7");
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(350,260,"8");  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(300,220,"sin");
    settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(260,180,"tan"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(305,180,"^"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(340,180,"root"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(383,180,"x-1");
   setcolor(3);
   settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(260,145,"eX"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(300,145,"log"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(343,145,"("); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(390,145,")");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(340,220,"cos");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(380,220,"shift"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(265,220,"x2");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(270,290,"2"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(310,290,"3"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(350,290,"4"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(225,145,"AC"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(270,320,".");
  outtextxy(25,355,"HINTS: \n For ex function use x           \n For sin function use s"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(25,365,"       \n For cos function use c          \n For tan function use t"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(25,375,"       \n For inverse sin function use o  \n For inverse cos function use e"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(25,385,"       \n For inverse tan function use k  \n For log function use l"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(25,395,"       \n For ln function use n           \n To reset use z "); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(25,405,"       \n For root function use r         \n To inverse any number use i"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(25,415,"       \n For cube function use q         \n For square function use p"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	settextstyle(1,0,3);
	setcolor(4);
      outtextxy(535,-8,"x");
   setcolor(getmaxcolor());
   setfillstyle(5,3);
   ellipse(midx, midy, stangle, endangle, xradius, yradius);
    fillellipse(midx, midy, xradius, yradius);
   for(x=236;x<xmax+186;x++)
   for(y=70;y<ymax-179;y++)
   putpixel(x,y,8);
     setfillstyle(1,0);
int lpoly[8]={400,70,235,70,235,100,400,100};
    fillpoly(4,lpoly);
   rectangle(left/6+200,top-60,right-15,bottom/200+100);
   setcolor(3);
   line(418,280, xmax, ymax);
   line(420,200, xmax, ymax/2+60);
   line(420,160, xmax, ymax/2+20);
   line(420,240, xmax, ymax/2+100);
   line(420,310, xmax, ymax/2+170);
   line(250,130,  xmax/2+141, ymax/2+200);
   line(290,129,  xmax/2+181, ymax/2+200);
   line(330,128,  xmax/2+221, ymax/2+200);
   line(375,129,  xmax/2+266, ymax/2+200);
   F:
    gotoxy(31, 6);
    printf("                ");
   g=0;
   cou=0;
   d=0;
   l=0;
   a=0;
   for(;;)
   {
   close();
   if(g!=1)
   {
    close();
    gotoxy(31, 6);
    scanf("%f",&a);
    close();
     gotoxy(31, 6);
     printf("                ");
     close();
      }
    gotoxy(31, 6);
    scanf("%s",&s);
     close();
    if(s=='z')
    {
    l=a;
     //closegraph();
     //exit(0);
    //break;
    goto F;
    }
    else if(s=='p')
    {
    close();
    if(cou==0)
    {
    cou++;
    d=a*a;
    l=d;
    }
    else
    {
    d=l*l;
    l=d;
    }
     gotoxy(31, 6);
    printf("%.2f",d);

    getch();
     l=d;
    gotoxy(31, 6);
  printf("                ");
    }
    else if(s=='q')
    {
    close();
    if(cou==0)
    {
    cou++;
    d=a*a*a;
    l=d;
    }
    else
    {
     d=l*l*l;
     l=d;
    }

     gotoxy(31, 6);
    printf("%.2f",d);

    getch();
     l=d;
    gotoxy(31, 6);
  printf("                ");
    }
     else if(s=='i')
    {

     close();
     if(cou==0)
     {
      sinsin=1;
      cou++;
      d=1/a;
      w=d;
     }
     else
     {
     if(sinsin==0)
     w=l;
      sinsin=1;
     d=1/w;
     w=d;
     }
       gotoxy(31, 6);
    printf("%.2f",d);

    getch();
    gotoxy(31, 6);
  printf("                ");

    }
       else if(s=='r')
    {

     close();
     if(cou==0)
     {
      //sinsin=1;
      cou++;
      d=sqrt(a);
      l=d;
     }
     else
     {
    // if(sinsin==0)
    // w=l;
     // sinsin=1;
     d=sqrt(l);
     l=d;
     }
       gotoxy(31, 6);
    printf("%.2f",d);

    getch();
    gotoxy(31, 6);
  printf("                ");

    }

   else if((s=='+')||(s=='-')||(s=='*')||(s=='/'))
    {
    close();
    general(s,a,f);
      }
   else if((s=='s')||(s=='t')||(s=='c')||(s=='o')||(s=='k')||(s=='e')||(s=='l')||(s=='n'))
   {
   close();
   if(cou==0)
    tri (a,s);
    else
    tri (l,s);
   }
   else if(s=='x')
   {
   close();
   ex (a);
   }
    g=1;
   gotoxy(31, 6);
    printf("%.2f",d);

    getch();
     l=d;
    gotoxy(31, 6);
  printf("                ");
    }
//     mouse_on();

}

	 /*********Start functions for operations*******/

  float tri(float a,int s )
{
 switch(s)
 {    cou++;
     close();
	case'c':
	q=(3.1416/180)*a;
	d=cos(q);
	 gotoxy(31, 6);
    printf("%.2f",d);

    getch();
     l=d;
    gotoxy(31, 6);
  printf("                ");
	break;
	case's':
	q=(3.1416/180)*a;
	d=sin(q);
	 gotoxy(31, 6);
    printf("%.2f",d);

    getch();
     l=d;
    gotoxy(31, 6);
  printf("                ");
	break;
	case't':
	q=(3.1416/180)*a;
	d=tan(q);
	 gotoxy(31, 6);
    printf("%.2f",d);

    getch();
     l=d;
    gotoxy(31, 6);
  printf("                ");
	break;
	case'o':
	q=(3.1416/180)*a;
	d=1/sin(q);
	 gotoxy(31, 6);
    printf("%.2f",d);

    getch();
     l=d;
    gotoxy(31, 6);
  printf("                ");
	break;
	case'k':
	q=(3.1416/180)*a;
	d=1/tan(q);
	 gotoxy(31, 6);
    printf("%.2f",d);

    getch();
     l=d;
    gotoxy(31, 6);
  printf("                ");
	break;
	case'e':
	q=(3.1416/180)*a;
	d=1/cos(q);
	 gotoxy(31, 6);
    printf("%.2f",d);

    getch();
     l=d;
    gotoxy(31, 6);
  printf("                ");
	break;
	case'l':
	 d=log10(a);
	  gotoxy(31, 6);
    printf("%.2f",d);

    getch();
     l=d;
    gotoxy(31, 6);
  printf("                ");
	 break;
	 case'n':
	   d = log(a);
	    gotoxy(31, 6);
    printf("%.2f",d);

    getch();
     l=d;
    gotoxy(31, 6);
  printf("                ");
	   break;
	   }
     return d;
 }
 float general(int s,float a,float f)
  {
  cou++;
  close();
   gotoxy(31, 6);
     printf("                ");
    gotoxy(31, 6);
    scanf("%f",&f);
     switch(s)
   {
   //close();
    case '+':
   if(g!=1)
    d=a+f;
    else
    d+=f;
    break;
    case '-':
    if(g!=1)
    d=a-f;
    else
    d-=f;
   break;
    case '*':
    if(g!=1)
    d=a*f;
    else
    d*=f;
   break;
    case '/':
    if(g!=1)
    d=a/f;
    else
    d/=f;
   break;
   }
   return d;
  }
 float ex(float a)
 {
	int n;
	float term;
	n=term=d=1;
	while(n<=100)
	{
	term=term*a/n;
	d+=term;
	if(term<.0001)
	n=999;
	else
	n=n+1;
	}
	return d;
}



void mouse_reset()
{
	union REGS r;
	r.x.ax=0;            //reset function
	int86(0x33, &r, &r);

}

void mouse_on()
{
	union REGS r;
	r.x.ax=1;            //1 represents mouse is on
	int86(0x33, &r, &r);
}

void mouse_off()
{
 union REGS r;
 r.x.ax =2;
 int86(0x33,&r,&r);
}

int left_button_pressed()
{
	union REGS r;
	r.x.ax=3;
	int86(0x33,&r,&r);
	return (r.x.bx &1);
}


int right_button_pressed()
{
	union REGS r;
	r.x.ax=3;
	int86(0x33,&r,&r);
	return (r.x.bx &2);
}

int button,x,y,i;

void mouse_position()
  {
	union REGS i,o;
	i.x.ax=3;
	int86(0x33,&i,&o);
	button=o.x.bx;
	x=o.x.cx;
	y=o.x.dx;
  }

	 /*****End of mouse related functions******/

void user_interface()
{
	mouse_reset();

	int poly[]={0,0,639,0,639,479,0,479};setfillstyle(1,15);fillpoly(4,poly);
	delay(500); settextstyle(0,0,2);
	setcolor(39);outtextxy(57,100," WELCOME TO THE CALCULATOR PROJECT");
	setcolor(RED);outtextxy(53,97," WELCOME TO THE CALCULATOR PROJECT");
	delay(500);
	setcolor(BLUE);
	settextstyle(5,0,2);
	outtextxy(190,200,"What do you want........?");



	delay(200);

	setcolor(GREEN);
	setfillstyle(1, GREEN);
	bar3d(160,340,220,360,5,1);  //for opening button
	settextstyle(2,0,5);
	setcolor(0);
	outtextxy(175,342,"ENTER");
	setcolor(GREEN);
	 setfillstyle(1, GREEN);
	 bar3d(380,340,440,360,5,1);   //for closing button
	 setcolor(0);
	 outtextxy(396,342,"EXIT");
	 delay(200);

		 while(1)
	 {

		 mouse_position();
		if(left_button_pressed())
		if(x>159&&x<221&&y>339&&y<361)
	 {
	  mouse_off();
	  cleardevice();

		 menu();

		 }
		 if(left_button_pressed())
		if(x>379&&x<441&&y>339&&y<361)
	 {
		exit(0);

	 }


gotoxy(5,30);
printf("Xposi=%3d  Yposi=%3d",x,y);
mouse_on();


}


}
  void close()
   {
    while(!kbhit())
	 {

		 mouse_position();
		if(left_button_pressed())
		if(x>530&&x<550&&y>0&&y<20)
	 {
		exit(0);

	 }
    }
    }




