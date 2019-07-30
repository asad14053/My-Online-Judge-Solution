		  // Towers Of Hanoi //
				// By:	Rakesh Juyal //
			// I.T.S. Mohan Nagar, Gzb //
		 // mailme: juyalrules@yahoo.com //
		 // mailme: rakesh@mindless.com //

// [ You can use more than 10 Disks too, just change the value of MAX ]
//

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#define MAX	12
#define BegPos   105
#define AuxPos   305
#define EndPos   505

int width;
typedef struct disc
	   {
		 char val1[MAX];
		 char top,pos;
		};

void push(disc *tt,int x);
pop(disc *tt);
void tower(int,disc *,disc *,disc *);
void draw_stack(disc *beg,disc *,disc *);
int main(void)
{

   int gdriver = DETECT, gmode, errorcode;
   int i,x=2;
   disc beg,end,aux;
   printf("


			TOWER OF HANOI
");
   printf("=======================================================");
   printf("

How Many Disks[1-10]:-  ");
   scanf("%d",&x);

   initgraph(&gdriver, &gmode, "d:\TC\BGI");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
	  printf("Graphics error: %s
", grapherrormsg(errorcode));
	  printf("Press any key to halt:");
	  getch();
	  exit(1);
   }
	width=50/x;

	beg.top=end.top=aux.top=0;
	beg.pos=1;end.pos=3;aux.pos=2;

	for(i=0;i<x;i++)
		push(&beg,(x-i)+1);

	draw_stack(&beg,&end,&aux);
	tower(x,&beg,&end,&aux);

   closegraph();
   return 0;
}
void tower(int n,disc *beg,disc *aux,disc *end)
{
	if(n>0)
/*	{
		push(end,pop(beg));
		draw_stack(beg,end,aux);
	}
	else*/
	{
		tower(n-1,beg,end,aux);
		push(end,pop(beg));
		draw_stack(beg,end,aux);
		tower(n-1,aux,beg,end);
	}
//
}
void push(disc *tt,int x)
{
	tt->val1[tt->top]=x;
	tt->top++;
}

pop(disc *tt)
{
	int a;
	tt->top--;
	a=tt->val1[tt->top];
	tt->val1[tt->top]=0;
	return a;
}

void draw_stack(disc *beg,disc *end,disc *aux)
{
	int ypos=295,i,height=10,xpos;
	int ver=0;
	cleardevice();

	setfillstyle(1,2);
	bar(20,300,580,310);

	bar(100,100,110,300);
	bar(300,100,310,300);
	bar(500,100,510,300);

	rectangle(20,300,580,310);

	rectangle(100,100,110,300);
	rectangle(300,100,310,300);
	rectangle(500,100,510,300);

	/* END TOWER*/
	ypos=295;
	if(end->pos==1)
		xpos=BegPos;
	else if(end->pos==2)
		xpos=AuxPos;
	else if(end->pos==3)
		xpos=EndPos;

	for(i=0;i<end->top;i++)
	{
		setfillstyle(end->val1[i],end->val1[i]);

bar(xpos-(end->val1[i]*width),ypos,xpos+(end->val1[i]*width),ypos-height);

rectangle(xpos-(end->val1[i]*width),ypos,xpos+(end->val1[i]*width),ypos-height);
		ypos-=(height+2);
	}
	ver=end->pos;

	/* BEG TOWER*/
	if(beg->pos==1)
		xpos=BegPos;
	else if(beg->pos==2)
		xpos=AuxPos;
	else if(beg->pos==3)
		xpos=EndPos;

	ypos=295;
	for(i=0;i<beg->top;i++)
	{
		setfillstyle(beg->val1[i],beg->val1[i]);

bar(xpos-(beg->val1[i]*width),ypos,xpos+(beg->val1[i]*width),ypos-height);

rectangle(xpos-(beg->val1[i]*width),ypos,xpos+(beg->val1[i]*width),ypos-height);
		ypos-=(height+2);
	}

	/* AUX TOWER*/
	ver=ver*10+beg->pos;

	if(ver<20)
	{
		if(ver%10==2)
			xpos=EndPos;
		else
			xpos=AuxPos;
	}
	else if(ver<30)
	{
		if(ver%10==1)
			xpos=EndPos;
		else
			xpos=BegPos;
	}
	else if(ver<40)
	{
		if(ver%10==1)
			xpos=AuxPos;
		else
			xpos=BegPos;
	}

	ypos=295;
	for(i=0;i<aux->top;i++)
	{
		setfillstyle(aux->val1[i],aux->val1[i]);

bar(xpos-(aux->val1[i]*width),ypos,xpos+(aux->val1[i]*width),ypos-height);

rectangle(xpos-(aux->val1[i]*width),ypos,xpos+(aux->val1[i]*width),ypos-height);
		ypos-=(height+2);
	}
	getch();
}

