				/*calculator*/
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include<dos.h>
#include<string.h>
#include<math.h>

char ch[100];
double value1=0,value2;
int count=0,mo=0,dhori=0;

void equal(int);
int close();
float trigonometry();
int differentiation();
int integration();
int general();
int matrix();
void mouse_reset();
void mouse_on();
int right_button_pressed();
int left_button_pressed();
void mouse_off();
void mouse_position();
void menu();

void user_interface();

void main()
{
clrscr();
   int gdriver = DETECT, gmode, errorcode;

   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

user_interface();

menu();
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

 int poly[]={0,0,639,0,639,479,0,479};setfillstyle(1,16);fillpoly(4,poly);
  int left, top, right,bottom,x,y;
  char l5;
     setcolor(5);
   left = getmaxx() / 2 - 100;
   top = getmaxy() / 2 - 200;
   right = getmaxx() / 2 + 140;
   bottom = getmaxy() / 2 + 210;


		 /* draw a rectangle */

   rectangle(left,top,right,bottom);
   rectangle(left+15,top+20,right-15,bottom-320);
   rectangle(left,top+20,right,bottom-320);
   rectangle(left,top,right,bottom-280);
    setcolor(1);
   rectangle(left+10,top+160,right-200,bottom-270);
   rectangle(left+55,top+160,right-155,bottom-270);
   rectangle(left+100,top+160,right-110,bottom-270);
   rectangle(left+145,top+160,right-65,bottom-270);
   rectangle(left+190,top+160,right-10,bottom-270);

   rectangle(left+10,top+200,right-200,bottom-230);
   rectangle(left+55,top+200,right-155,bottom-230);
   rectangle(left+100,top+200,right-110,bottom-230);
   rectangle(left+145,top+200,right-65,bottom-230);
   rectangle(left+190,top+200,right-15,bottom-230);

   rectangle(left+10,top+240,right-200,bottom-190);
   rectangle(left+55,top+240,right-155,bottom-190);
   rectangle(left+100,top+240,right-110,bottom-190);
   rectangle(left+145,top+240,right-65,bottom-190);
   rectangle(left+190,top+240,right-15,bottom-190);

   rectangle(left+10,top+280,right-200,bottom-150);
   rectangle(left+55,top+280,right-155,bottom-150);
   rectangle(left+100,top+280,right-110,bottom-150);
   rectangle(left+145,top+280,right-65,bottom-150);
   rectangle(left+190,top+280,right-15,bottom-150);

   rectangle(left+10,top+320,right-200,bottom-110);
   rectangle(left+55,top+320,right-155,bottom-110);
   rectangle(left+100,top+320,right-110,bottom-110);
   rectangle(left+145,top+320,right-65,bottom-110);
   rectangle(left+190,top+320,right-15,bottom-110);

   rectangle(left+10,top+360,right-200,bottom-70);
   rectangle(left+55,top+360,right-155,bottom-70);
   rectangle(left+100,top+360,right-110,bottom-70);
   rectangle(left+145,top+360,right-65,bottom-70);
   rectangle(left+190,top+360,right-15,bottom-70);

   rectangle(left+10,top+400,right-200,bottom-30);
   rectangle(left+55,top+400,right-155,bottom-30);
   rectangle(left+100,top+400,right-110,bottom-30);
   rectangle(left+145,top+400,right-65,bottom-30);
   rectangle(left+190,top+400,right-15,bottom-30);

		      /*print function*/
    setcolor(7); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(233,185,"x-1"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(233,225,"Idx"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(229,263,"d/dx"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(240,305,"7"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(240,345,"4"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(240,386,"1");  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(240,425,"0"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

   outtextxy(283,185,"x2"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(285,225,"(");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(280,265,"MAT");  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(285,305,"8"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(285,345,"5");  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(285,386,"2");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(285,425,","); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

   outtextxy(328,185,"x3"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(330,225,")");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(323,265,"sin");  settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(330,305,"9");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(330,345,"6"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(330,386,"3"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(330,425,"."); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

   outtextxy(370,185,"CLR"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(368,225,"log"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(368,265,"cos"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(375,305,"%"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(375,345,"*");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(375,386,"+");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(368,425,"Ans"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);

   setcolor(14);
   outtextxy(419,184,"DEL");settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   setcolor(7);
   outtextxy(412,225,"root"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(416,265,"tan"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   setcolor(14);
   outtextxy(418,305,"AC"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   setcolor(7);
   outtextxy(422,345,"/"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(422,386,"-"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
   outtextxy(422,425,"="); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);


  outtextxy(5,215,"HINTS: \n"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,245,"\n For trigonometry use t:"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,255,"\n_______________________"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,265,"\n For sin  function use s"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,275,"\n For cos  function use c"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,285,"\n For tan  function use t"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,295,"\n For   cosec ||    use o"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,305,"\n For sec  function use e"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,315,"\n For cot  function use k"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,335,"\n For cube function use q"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,345,"\n For square  ||    use s"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,355,"\n For root function use r"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,365,"\n For log function  use l"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,375,"\n For matrix  ||    use m"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,385,"\n For differentiation   d"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,395,"\n For integration   use i"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,405,"\n For     inverse   use e"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,415,"\n For clear sreen   use a"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
  outtextxy(5,425,"\n For    exit     click X"); settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
	settextstyle(1,0,3);



 mouse_reset();
settextstyle(1,0,4);
	setcolor(4);
      outtextxy(545,-8,"x");
   setcolor(getmaxcolor());
   setfillstyle(5,3);
   mouse_on();

  general();
  gotoxy(32,5);
  scanf("%c",&l5);
  while(l5!='z')
  {
  general();

}
 //mou();
 //close();
   closegraph();
exit(0);


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
int general()
{
    float m,n;
    char ch;
    close();
    gotoxy(32,5);
	scanf("%f",&m);
	gotoxy(32,5);
	      printf("               ");

    while(1)
    {
		gotoxy(35,5);
		scanf("%c",&ch);
	if(ch=='a')
	{
	gotoxy(32,5);
	printf("                        ");
	gotoxy(32,8);
	printf("                        ");
	break;
	}
	switch(ch)
	{
	case'e':
	gotoxy(32,5);
	scanf("%f",&n);
	gotoxy(32,5);
	printf("                        ");
	m=1/n;
	gotoxy(45,8);
		 printf("%.2f",m);
	break;
	case't':
	trigonometry();
	break;
	case'd':
	differentiation();
	break;
	case'i':
	integration();
	break;
	case'm':
	matrix();
	break;
	case'q':
	gotoxy(32,5);
	     scanf("%f",&n);

	m=n*n*n;
	gotoxy(45,8);
		 printf("%.2f",m);
		break;
	 case'r':
	gotoxy(32,5);
	     scanf("%f",&n);
	     m=sqrt(n);
	gotoxy(45,8);
		 printf("%.2f",m);
		break;

	case's':
	gotoxy(32,5);
	     scanf("%f",&n);

	m=n*n;
	gotoxy(45,8);
		 printf("%.2f",m);
		break;


	  case '+':
	    gotoxy(32,5);
	     scanf("%f",&n);
	     gotoxy(32,5);
	      printf("                 ");
	     m=m+n;
	     gotoxy(32,5);
		 printf("Ans");
			 gotoxy(45,8);
			 printf("%.2f",m);
		break;
	  case '-':
	  gotoxy(32,5);
	     scanf("%f",&n);
	     gotoxy(32,5);
	      printf("             ");
			 m=m-n;
			  gotoxy(32,5);
		 printf("Ans");
			 gotoxy(45,8);
		 printf("%.2f",m);
		break;
	  case '*':
	  gotoxy(32,5);
	     scanf("%f",&n);
	     gotoxy(32,5);
	      printf("             ");
	     m=m*n;
	      gotoxy(32,5);
		 printf("Ans");
	     gotoxy(45,8);
		 printf("%.2f",m);
		break;
	  case '/':
	  gotoxy(32,5);
	     scanf("%f",&n);
	     gotoxy(32,5);
	      printf("             ");
	     m=m/n;
	      gotoxy(32,5);
		 printf("Ans");
	     gotoxy(45,8);
		 printf("%.2f",m);
		break;

	}
    }
	return 0;
}
int integration()
{
    int n;
    float f;
    char ch1,ch2;
    gotoxy(32,5);
    printf("Ix^");
    scanf("%d",&n);
    f=1/(float)(n+1);
    gotoxy(32,5);
    printf("Ix^");
    gotoxy(45,8);
    printf("%.3fx^%d\n\n",f,n+1);
    return 0;
}
int differentiation()
{
    int n;
    char ch1,ch2;
    gotoxy(32,5);
    printf("d/dx.x^");
    scanf("%d",&n);
    gotoxy(32,5);
    printf("d/dx.x^");
    gotoxy(45,8);
    printf("%dx^%d\n\n",n,(n-1));
    return 0;
}

int matrix()
{
int i,j,k,r1,c1,r2,c2,a[10][10],b[10][10],c[10][10],d[10][10],e[10][10];
char ch;
gotoxy(32,5);
printf("Row in A=");
gotoxy(42,5);
scanf("%d",&r1);
gotoxy(32,5);
	      printf("                   ");
gotoxy(32,5);
printf("column in A=");
gotoxy(45,5);
scanf("%d",&c1);
gotoxy(32,5);
	      printf("                  ");
gotoxy(32,5);
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)

scanf("%d",&a[i][j]);
 gotoxy(32,5);
	      printf("                 ");
 gotoxy(32,5);
printf("Row in B=");
gotoxy(43,5);
scanf("%d",&r2);
gotoxy(32,5);
	      printf("                 ");
gotoxy(32,5);
printf("column in B=");
gotoxy(45,5);
scanf("%d",&c2);
gotoxy(32,5);
	      printf("                 ");
gotoxy(32,5);
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&b[i][j]);
gotoxy(32,5);
	      printf("                  ");
 gotoxy(32,5);
printf("Which operation want:");
gotoxy(53,5);
scanf("%c%c",&ch,&ch);
gotoxy(32,5);
	      printf("                       ");


switch(ch)
{
    case'+':
	if(r1==r2 && c1==c2)
	{
	    for(i=0;i<r1;i++)
	    for(j=0;j<c1;j++)
	    c[i][j]=a[i][j]+b[i][j];
	    gotoxy(32,5);
	    printf("Matrix(A+B) is");
	    gotoxy(40,8);
	    for(i=0;i<r1;i++)
	    {
		for(j=0;j<c1;j++)
		printf("%4d",c[i][j]);
	    }
	    break;
	}
	else
	gotoxy(45,8);
	printf("Math ERROR");
	break;

    case'-':
	if(r1==r2 && c1==c2)
	{
	    for(i=0;i<r1;i++)
	    for(j=0;j<c1;j++)
	    e[i][j]=a[i][j]-b[i][j];
	    gotoxy(32,5);
	    printf("Matrix(A-B) is");
	    gotoxy(40,8);
	    for(i=0;i<r1;i++)
	    {
		for(j=0;j<c1;j++)
		printf("%4d",e[i][j]);

	    }
	     break;
	}
	else
	gotoxy(45,8);
	printf("Math ERROR");
	break;

    case'*':
	if(c1==r2)
	{
	    for(i=0;i<r1;i++)
	    for(j=0;j<c2;j++)
	    {
		d[i][j]=0;
		for(k=0;k<c1;k++)
		d[i][j]=d[i][j]+a[i][k]*b[k][j];
	    }
	    gotoxy(32,5);
	    printf("Matrix(A*B) is");
	    gotoxy(35,8);
	    for(i=0;i<r1;i++)
	    {
		for(j=0;j<c2;j++)
		printf("%4d",d[i][j]);
	    }
	break;
	}
	else
	gotoxy(45,8);
	printf("Math ERROR");
	break;
    }
    return 0;
}


float trigonometry()
{
float q,y,z;
char ch;
gotoxy(32,5);
scanf("%c%c",&ch,&ch);
 switch(ch)
 {
	case'c':
	gotoxy(32,5);
	printf("cos");
	scanf("%f",&z);
	q=(3.1416/180)*z;
	y=cos(q);
	 gotoxy(45, 8);
    printf("%.2f",y);
	break;
	case's':
	gotoxy(32,5);
	printf("sin");
	scanf("%f",&z);
	q=(3.1416/180)*z;
	y=sin(q);
	 gotoxy(45,8);
    printf("%.2f",y);
	break;
	case't':
	gotoxy(32,5);
	printf("tan");
	scanf("%f",&z);
	q=(3.1416/180)*z;
	y=tan(q);
	 gotoxy(45,8);
    printf("%.2f",y);
	break;
	case'o':
	gotoxy(32,5);
	printf("cosec");
	scanf("%f",&z);
	q=(3.1416/180)*z;
	y=1/sin(q);
	 gotoxy(45, 8);
    printf("%.2f",y);
	break;
	case'k':
	gotoxy(32,5);
	printf("cot");
	scanf("%f",&z);
	q=(3.1416/180)*z;
	y=1/tan(q);
	 gotoxy(45, 8);
    printf("%.2f",y);
	break;
	case'e':
	gotoxy(32,5);
	printf("sec");
	scanf("%f",&z);
	q=(3.1416/180)*z;
	y=1/cos(q);
	 gotoxy(45, 8);
    printf("%.2f",y);
	break;
	 case'l':
	gotoxy(32,5);
	printf("log");
	scanf("%f",&z);
	   y = log10(z);
	    gotoxy(45, 8);
    printf("%.2f",y);
	   break;
	   }
     return 0;
 }



  void user_interface()
{
	mouse_reset();

	int poly[]={0,0,639,0,639,479,0,479};setfillstyle(1,15);fillpoly(4,poly);
	delay(500); settextstyle(0,0,2);
	setcolor(39);
	outtextxy(57,100," WELCOME TO THE CALCULATOR PROJECT");
	setcolor(RED);
	outtextxy(53,97," WELCOME TO THE CALCULATOR PROJECT");
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

   //gotoxy(5,30);
  // printf("Xposi=%3d  Yposi=%3d",x,y);
   mouse_on();
 }

 }

 int close()
   {
   int w,num,con=0;
   char sym;
   while(!kbhit())
	 {

		mouse_position();
		if(left_button_pressed())
		{

	 if(x>=225&&x<=260&&y>=405&&y<=445)
	{
		count++;
		ch[con]='0';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;
	}

	if(x>225&&x<260&&y>375&&y<401)
	{
		count++;
		ch[con]='1';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;
	}

		if(x>265&&x<305&&y>366&&y<406)
		{
		count++;
		ch[con]='2';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;
		}
		if(x>310&&x<350&&y>366&&y<406)
		{
		count++;
		ch[con]='3';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;
		}
		if(x>220&&x<260&&y>325&&y<365)
		{
		count++;
		ch[con]='4';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;
		}
		if(x>265&&x<305&&y>325&&y<365)
		{count++;
		ch[con]='5';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;

		}
		if(x>310&&x<350&&y>325&&y<365)
		{
		count++;
		ch[con]='6';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;
		}
		if(x>225&&x<260&&y>285&&y<325)
		{
		count++;
		ch[con]='7';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;

		}
		if(x>265&&x<305&&y>285&&y<325)
		{
		count++;
		ch[con]='8';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;
		}
		if(x>310&&x<350&&y>285&&y<320)
		{
		count++;
		ch[con]='9';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;
		}
		if(x>310&&x<350&&y>405&&y<445)
		{
		count++;
		ch[con]='.';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;

		}

			if(x>265&&x<305&&y>405&&y<445)
			{
				gotoxy(32,5);
				printf(",");

			}

		if(x>355&&x<395&&y>366&&y<406)
		{
		count++;
		ch[con]='+';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		ch[con]='\0';
		value2=atof(ch);
		num=1;
		equal(num);
		strcpy(ch,"0");
		con=0;
		sym='+';
		}
		if(x>402&&x<442&&y>366&&y<406)
		{
		count++;
		ch[con]='-';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		ch[con]='\0';
		value2=atof(ch);
		num=2;
		equal(num);
		strcpy(ch,"0");
		con=0;
		sym='-';
		}

		if(x>355&&x<395&&y>325&&y<365)
		{
		count++;
		ch[con]='*';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		ch[con]='\0';
		value2=atof(ch);
		num=3;
		equal(num);
		strcpy(ch,"0");
		con=0;
		sym='*';

		}
		if(x>402&&x<442&&y>325&&y<365)
		{
		count++;
		ch[con]='/';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		ch[con]='\0';
		value2=atof(ch);
		num=4;
		equal(num);
		strcpy(ch,"0");
		con=0;
		sym='/';

		}
		if(x>303&&x<343&&y>245&&y<285)
		{
		gotoxy(32,5);
		printf("sin");

		}
		if(x>348&&x<388&&y>245&&y<285)
		{
		gotoxy(32,5);
		printf("cos");

		}
		if(x>396&&x<436&&y>245&&y<285)
		{
		gotoxy(32,5);
		printf("tan");

		}
		if(x>313&&x<343&&y>165&&y<205)
		{
		gotoxy(32,5);
		printf("x3");

		}
		if(x>263&&x<300&&y>165&&y<200)
		{
		gotoxy(32,5);
		printf("x2");

		}
		 if(x>233&&x<263&&y>165&&y<200)
		{
		gotoxy(32,5);
		printf("x-1");

		}
		if(x>233&&x<263&&y>205&&y<245)
		{
		gotoxy(32,5);
		printf("Idx");

		}
		if(x>265&&x<305&&y>205&&y<245)      //for )
		{
		count++;
		ch[con]='(';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;

		}
		if(x>310&&x<350&&y>205&&y<245)      //for (
		{
		count++;
		ch[con]=')';
		gotoxy(31+count,5);
		printf("%c",ch[con]);
		con++;

		}
		if(x>229&&x<279&&y>243&&y<283)
		{
		gotoxy(32,5);
		printf("d/dx");

		}
		if(x>280&&x<320&&y>245&&y<285)
		{
		gotoxy(32,5);
		printf("MAT");

		}
		if(x>360&&x<400&&y>205&&y<245)
		{
		gotoxy(32,5);
		printf("log");

		}
		if(x>412&&x<432&&y>205&&y<255)
		{
		gotoxy(32,5);
		printf("root");

		}
		if(x>405&&x<445&&y>285&&y<330)
		{                                   //for AC
		gotoxy(32,5);
		printf("                        ");
		gotoxy(32,8);
		printf("                        ");
		count=0;

		}
		if(x>415&&x<455&&y>164&&y<200)
		{
		ch[con-1]='\0';                     //for del
		--count;
		gotoxy(32+count,5);
		printf(" ");
		}

		if(x>365&&x<400&&y>165&&y<205)
		{
		gotoxy(32,5);
		printf("                        "); // for clr
		gotoxy(32,8);
		printf("                        ");
		count=0;

		}

		if(x>405&&x<440&&y>405&&y<445)    // =
		{
		dhori=1;
		ch[con]='\0';
		gotoxy(32,5);
		value2=atof(ch);
		if(sym=='+')
		num=1;
		if(sym=='-')
		num=2;
		if(sym=='*')
		num=3;
		if(sym=='/')
		num=4;
		equal(num);
		con=0;
		}

		if(x>510&&x<570&&y>=0&&y<30)
		exit(0);

	   mouse_off();
	   mouse_reset();
	   mouse_on();
	   }
       }
 return 0;
 }

void equal(int num)
{
	switch(num)
	{
		case 1:
			value1=value1+value2;
			if(dhori==1)
			{
				dhori=0;
				goto go;
			}
			break;
		case 2:
			if(mo==0)
			value2=(-1)*value2;

			value1=value1-value2;
			mo++;

			if(dhori==1)
			{
				dhori=0;
				goto go;
			}
			break;
		case 3:
			value1=value1*value2;
			if(dhori==1)
			{
				dhori=0;
				goto go;
			}
			break;
		case 4:
			value1=value1/value2;
			if(dhori==1)
			{
				dhori=0;
				goto go;
			}
			break;

		go:
			printf("Ans                ");
			gotoxy(45,8);
			printf("%.2lf",value1);
			count=3;
			break;

	}

}