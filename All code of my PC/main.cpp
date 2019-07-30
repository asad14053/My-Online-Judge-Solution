#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<process.h>
#include<conio.h>
#include<string.h>
#include <time.h>
#include<stdlib.h>
#include "mouse.cpp"
#include "get_coor.cpp"
#include "ludu_gra.cpp"
#include "second.cpp"

int random_value=0,count=0,c,k[10],arry[10];
int i1,j1,z=0,g2=0,g1=0,w1=0,t1=0,c1=0,b1=0,count1=0,pa=0,c2=0,u1,u2,sl1=0;
int p1_condition=0,p[100]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},ans[100];
void grapic();
void random1(int,int,int,int,int);
void graphic_move(int,int);
void get_coordinate();
void dice_k(int,int,int,int,int,int,int,int,int,int,int,int,int);
void create_guti();
void player1(int,int,int,int);
void play(int,int,int,int,int);
void guti_con();
void stand_col();
void guti_move();
void stand_com();
void color();
void com_eat(int i);
void central_value(int,int,int,int);
firstpage()
 {
	mouse_off();
	 int i,k;
	 int poly[]={0,0,639,0,639,479,0,479};

	 setbkcolor(0);
	 setfillstyle(1,1);
	 fillpoly(4,poly);
	//Dip boundary//
	 setcolor(3);
	 for(i=0;i<5;i++)
	 rectangle(2+i,2+i,1000+i,500+i);

	 settextstyle(10,0,3);
	 setcolor(25);

	 outtextxy(60,52,"WELLCOME TO EVERYBODY");

	 settextstyle(10,0,3);
	 setcolor(25);
	 outtextxy(130,125," TO THE GAME ZONE");

      //	 settextstyle(8,0,4);
	// setcolor(10);
	// outtextxy(240,200,"LUDU GAME");
	  settextstyle(3,0,4);
	 setcolor(12);
	 outtextxy(110,250,"Submitted To: Md. Ashraf Uddin");
	 outtextxy(110,280,"           Lecturer            ");
	 outtextxy(110,310,"      Department Of CSE       ") ;
	settextstyle(4,0,4);
	setcolor(14);
	outtextxy(80,360,"Developed By- Anwar,Jafor & Aziz");

do
 {

   for(k=0;k<12;k++)
   {
	if(kbhit())
	break;
	settextstyle(0,0,2);
	setcolor(k);
	//outtextxy(80,370,"Developed By- Anwar,Jafor & Aziz");
	settextstyle(0,0,2);
	outtextxy(120,430,"PRESS ANY KEY TO CONTINUE");
	 settextstyle(0,0,4);
	 setcolor(k+1);
	 outtextxy(190,200,"LUDU GAME");
	delay(200);
	}
 }while(!kbhit());

	setfillstyle(1,0);
	 bar(0,0,639,479);
	 setcolor(15);
	 mouse_on();
	 getch();
	 return 0;

 }
void exit_position()
{
	mouse_off();
	settextstyle(SMALL_FONT,HORIZ_DIR,7);
	setfillstyle(1,0);
	bar3d(559,400,604,428,0,0);
	setcolor(5);
	bar3d(490,270,532,295,2,2);
	setcolor(4);
	outtextxy(564,400,"Exit");
	setcolor(5);
	settextstyle(2,HORIZ_DIR,6);
	outtextxy(493,270,"MOVE");
		settextstyle(0,HORIZ_DIR,1);
	outtextxy(445,243,"CLICK HERE FOR DICE");
	mouse_on();
}
void degine()
{
	mouse_off();
	if(g1==1)
		setfillstyle(1,2);
	if(g1==2)
		setfillstyle(1,4);
	if(g1==3)
		setfillstyle(1,12);
	if(g1==4)
		setfillstyle(1,15);
	setcolor(5);
	bar3d(490,270,532,295,2,2);
	settextstyle(2,HORIZ_DIR,6);
	setcolor(5);
	outtextxy(493,270,"MOVE");
	delay(400);
	setfillstyle(1,0);
	bar3d(490,270,532,295,2,2);
	settextstyle(2,HORIZ_DIR,6);
	outtextxy(493,270,"MOVE");
	mouse_on();
}

void main()
{
	int gmode,gd=DETECT;
	char ch;
	initgraph(&gd,&gmode,"c:\\tc\\bgi");
	mouse_reset();
	get_coordinate();
	mouse_on();
	firstpage();
	second();
	grapic();

	exit_position();
	mouse_on();
	while(1)
	{
		get_position(&x,&y);
		gotoxy(1,1);
		//printf("X=%d Y=%d",x,y);
		delay(100);
		setcolor(5);
		settextstyle(0,0,2);
		outtextxy(179,3,"YOUR TURN");
		if(left_button_pressed()&&pa==0)
		{
			if(x>208 && x<250 && y>253 &&y<271)
			{
				delay(500);
				setcolor(15);
				setfillstyle(10,4);
				if(count==count1)
				random1(o1,o2,o3,o4,1);
			}

			c2=c2+random_value/6;
			if(c2!=0&&random_value%6!=0)
				player1(o1,o2,o3,o4);

			if(x>559 && x<605 && y>400 && y<439)
			{
				exit(0);
			}

		}
		if(pa==1)
		{
				delay(1500);
				setfillstyle(0,1);
				bar(179,3,350,28);
				random1(o5,o6,o7,o8,2);
				c2=c2+random_value/6;
				if(c2!=0&&random_value%6!=0)
				play(o5,o6,o7,o8,2);
		}
		if(pa==2&&la!=1)
		{
				delay(1500);
				setfillstyle(0,1);
				bar(179,3,350,28);
				random1(o9,o10,o11,o12,3);
				c2=c2+random_value/6;
				if(c2!=0&&random_value%6!=0)
				play(o9,o10,o11,o12,3);
		}
		if(pa==3&&la!=1)
		{
				delay(1500);
				setfillstyle(0,1);
				bar(179,3,350,28);
				random1(o13,o14,o15,o16,4);
				c2=c2+random_value/6;
				if(c2!=0&&random_value%6!=0)
				play(o13,o14,o15,o16,4);
		}

	}

}
void stand_com(int i)
{
	int m1,m2,m3,m4,m5;
	if(i>=9&&i<=12)
	{
		m1=4;m2=1;m3=14;m4=2;
	}
	if(i>=5&&i<=8)
	{
		m1=1;m2=14;m3=2;m4=4;
	}
	if(i>=13&&i<=16)
	{
		m1=2;m2=4;m3=1;m4=14;
	}
	if(i>=1&&i<=4)
	{
		m1=14;m2=2;m3=4;m4=1;
	}
		if(p[i]==2)
		setfillstyle(1,m1);
		if(p[i]==15)
		setfillstyle(1,m2);
		if(p[i]==28)
		setfillstyle(1,m3);
		if(p[i]==41)
		setfillstyle(1,m4);

		if(p[i]==2||p[i]==15||p[i]==28||p[i]==41)
			bar(array1[i][p[i]],array2[i][p[i]],array3[i][p[i]],array4[i][p[i]]);
		else
		{
			setcolor(15);
			setfillstyle(10,10);
			if(p[i]>52&&p[i]<58)
			setfillstyle(1,m1);
			bar3d(array1[i][p[i]],array2[i][p[i]],array3[i][p[i]],array4[i][p[i]],0,0);
	}
}
void com_eat(int i)
{
	if(la!=1)
	{
		if(i>=1&&i<=4)
			dice_k(i,5,6,7,8,9,10,11,12,13,14,15,16);
		 if(i>=5&&i<=8)
			dice_k(i,9,10,11,12,13,14,15,16,1,2,3,4);
		 if(i>=9&&i<=12)
			dice_k(i,13,14,15,16,1,2,3,4,5,6,7,8);
		 if(i>=13&&i<=16)
			dice_k(i,1,2,3,4,5,6,7,8,9,10,11,12);
	 }
	 if(la==1)
	 {
		if(i>=1&&i<=4)
			dice_k(i,9,10,11,12,0,0,0,0,0,0,0,0);
		 if(i>=5&&i<=8)
			dice_k(i,13,14,15,16,0,0,0,0,0,0,0,0);
		 if(i>=9&&i<=12)
			dice_k(i,1,2,3,4,0,0,0,0,0,0,0,0);
		 if(i>=13&&i<=16)
			dice_k(i,5,6,7,8,0,0,0,0,0,0,0,0);
	 }
}
void play(int z1,int z2,int z3,int z4,int z5)
{
	mouse_off();
	int sl,i,j,h1;
	if(z1==1)
		sl=6;
	if(z1==9)
		sl=12;
	if(z1==5)
		sl=9;
	if(z1==13)
		sl=10;
	if(p[z1]==1&&p[z4]==1)
	{
		setfillstyle(1,0);
		bar(array1[z1][p[z1]],array2[z1][p[z1]],array3[z1][p[z1]],array4[z1][p[z1]]);
		setcolor(sl);
		p[z1]=p[z1]+1;
		central_value(array1[z1][p[z1]],array2[z1][p[z1]],array3[z1][p[z1]],array4[z1][p[z1]]);
		for(i=0;i<9;++i)
		circle(i1,j1,i);
		count=count-6;
	}
	if(p[z2]==1&&count>6)
	{
		setfillstyle(1,0);
		bar(array1[z2][p[z2]],array2[z2][p[z2]],array3[z2][p[z2]],array4[z2][p[z2]]);
		setcolor(sl);
		p[z2]=p[z2]+1;
		central_value(array1[z2][p[z2]],array2[z2][p[z2]],array3[z2][p[z2]],array4[z2][p[z2]]);
		for(i=0;i<9;++i)
		circle(i1,j1,i);
		count=count-6;
	}
	if(p[z3]==1&&count>6)
	{
		setfillstyle(1,0);
		bar(array1[z3][p[z3]],array2[z3][p[z3]],array3[z3][p[z3]],array4[z3][p[z3]]);
		setcolor(sl);
		p[z3]=p[z3]+1;
		central_value(array1[z3][p[z3]],array2[z3][p[z3]],array3[z3][p[z3]],array4[z3][p[z3]]);
		for(i=0;i<9;++i)
		circle(i1,j1,i);
		count=count-6;
	}
	if(p[z4]==1&&count>6)
	{
		setfillstyle(1,0);
		bar(array1[z4][p[z4]],array2[z4][p[z4]],array3[z4][p[z4]],array4[z4][p[z4]]);
		setcolor(sl);
		p[z4]=p[z4]+1;
		central_value(array1[z4][p[z4]],array2[z4][p[z4]],array3[z4][p[z4]],array4[z4][p[z4]]);
		for(i=0;i<9;++i)
		circle(i1,j1,i);
		count=count-6;
	}

	int n,m;
	n=count/6;
	m=count%6;
	for(i=0;i<n;++i)
	{
		if(p[z1]!=1&&p[z1]<58&&p[z1]+6<=58&&count!=0)
		{
			com_eat(z1);
			stand_com(z1);
			setcolor(sl);
			p[z1]=p[z1]+6;
			central_value(array1[z1][p[z1]],array2[z1][p[z1]],array3[z1][p[z1]],array4[z1][p[z1]]);
			for(i=0;i<9;++i)
				circle(i1,j1,i);
			count=count-6;
			com_eat(z1);

		 }
		else if(p[z2]!=1&&p[z2]<58&&p[z2]+6<=58&&count!=0)
		{
			com_eat(z2);
			stand_com(z2);
			setcolor(sl);
			p[z2]=p[z2]+6;
			central_value(array1[z2][p[z2]],array2[z2][p[z2]],array3[z2][p[z2]],array4[z2][p[z2]]);
			for(i=0;i<9;++i)
				circle(i1,j1,i);
			count=count-6;
		  com_eat(z2);

		}
		else if(p[z3]!=1&&p[z3]<58&&p[z3]+6<=58&&count!=0)
		{
			com_eat(z3);
			stand_com(z3);
			setcolor(sl);
			p[z3]=p[z3]+6;
			central_value(array1[z3][p[z3]],array2[z3][p[z3]],array3[z3][p[z3]],array4[z3][p[z3]]);
			for(i=0;i<9;++i)
				circle(i1,j1,i);
			count=count-6;
			com_eat(z3);                                                                            \
		}
		else if(p[z4]!=1&&p[z4]<58&&p[z4]+6<=58&&count!=0)
		{
			com_eat(z4);
			stand_com(z4);
			setcolor(sl);
			p[z4]=p[z4]+6;
			central_value(array1[z4][p[z4]],array2[z4][p[z4]],array3[z4][p[z4]],array4[z4][p[z4]]);
			for(i=0;i<9;++i)
				circle(i1,j1,i);
			count=count-6;
		   com_eat(z4);
		 }
	}
		if(p[z1]!=1&&p[z1]<58&&p[z1]+m<=58&&count!=0)
		{
			com_eat(z1);
			stand_com(z1);
			setcolor(sl);
			p[z1]=p[z1]+m;
			central_value(array1[z1][p[z1]],array2[z1][p[z1]],array3[z1][p[z1]],array4[z1][p[z1]]);
			for(i=0;i<9;++i)
				circle(i1,j1,i);
			count=count-m;
			com_eat(z1);
		 }
		if(p[z2]!=1&&p[z2]<58&&p[z2]+m<=58&&count!=0)
		{
			com_eat(z2);
			stand_com(z2);
			setcolor(sl);
			p[z2]=p[z2]+m;
			central_value(array1[z2][p[z2]],array2[z2][p[z2]],array3[z2][p[z2]],array4[z2][p[z2]]);
			for(i=0;i<9;++i)
				circle(i1,j1,i);
			count=count-m;
			com_eat(z2);
		}
		if(p[z3]!=1&&p[z3]<58&&p[z3]+m<=58&&count!=0)
		{
			com_eat(z3);
			stand_com(z3);
			setcolor(sl);
			p[z3]=p[z3]+m;
			central_value(array1[z3][p[z3]],array2[z3][p[z3]],array3[z3][p[z3]],array4[z3][p[z3]]);
			for(i=0;i<9;++i)
				circle(i1,j1,i);
			count=count-m;
			com_eat(z3);                                                                            \
		}
		if(p[z4]!=1&&p[z4]<58&&p[z4]+m<=58&&count!=0)
		{
			com_eat(z4);
			stand_com(z4);
			setcolor(sl);
			p[z4]=p[z4]+m;
			central_value(array1[z4][p[z4]],array2[z4][p[z4]],array3[z4][p[z4]],array4[z4][p[z4]]);
			for(i=0;i<9;++i)
				circle(i1,j1,i);
			count=count-m;
			com_eat(z4);
		 }
	count1=0;
	if(count==0&&z5==1)
	{
		c2=0;
		pa=1;
	}
	if(count==0&&z5==2)
	{
		c2=0;
		pa=2;
		if(la==1)
		pa=0;
	}
	if(count==0&&z5==3)
	{
		c2=0;
		pa=3;
	}
	if(count==0&&z5==4)
	{
		c2=0;
		pa=0;
	}
mouse_on();
}
void guti_con()
{
			  if((c1!=g1)&&count%6==0)
			  {
					k[2]=6;k[3]=6;
					c1=g1;
			  }
			  else if((c1!=g1)&&count%6!=0)
			  {
					k[3]=c;k[4]=6-c;k[5]=c;
					c1=g1;
			  }
			  else if(count%6!=0)
			  {
					k[1]=c;k[2]=6-c;k[3]=c;k[4]=6-c;k[5]=c;
			  }
}
void stand_col(int i)
{
	int m1,m2,m3,m4,m5;
	if(i>=9&&i<=12)
	{
		m1=4;m2=1;m3=14;m4=2;
	}
	if(i>=5&&i<=8)
	{
		m1=1;m2=14;m3=2;m4=4;
	}
	if(i>=13&&i<=16)
	{
		m1=2;m2=4;m3=1;m4=14;
	}
	if(i>=1&&i<=4)
	{
		m1=14;m2=2;m3=4;m4=1;
	}
				if(p[i]==2)
				setfillstyle(1,m1);
				if(p[i]==15)
				setfillstyle(1,m2);
				if(p[i]==28)
				setfillstyle(1,m3);
				if(p[i]==41)
				setfillstyle(1,m4);
				if(p[i]==2||p[i]==15||p[i]==28||p[i]==41)
				bar(array1[g1][p[i]],array2[g1][p[i]],array3[g1][p[i]],array4[g1][p[i]]);
				else
				{
					setcolor(15);
					setfillstyle(10,10);
					if(p[i]>52&&p[i]<58)
					setfillstyle(1,m1);
					bar3d(array1[g1][p[i]],array2[g1][p[i]],array3[g1][p[i]],array4[g1][p[i]],0,0);
				}
}
void guti_move(int k,int g,int z1)
{
	if(z1==1)
	{
		setcolor(0);
		bar(array1[k][g],array2[k][g],array3[k][g],array4[k][g]);
	}
	setcolor(6);
	int i;
	for(i=0;i<9;++i)
	circle(k,g,i);
}
void central_value(int q1,int q2,int q3,int q4)
{

		i1=(q1-q3);
		if(i1<0)
			i1=i1*(-1);
			i1=i1/2;
		i1=i1+q1;
		j1=(q2-q4);
		if(j1<0)
			j1=j1*(-1);
			j1=j1/2;
		j1=j1+q2;
}

void create_guti(int f9)
{
	int in;
	central_value(array1[f9][p[f9]],array2[f9][p[f9]],array3[f9][p[f9]],array4[f9][p[f9]]);

	if(f9>=1&&f9<=4)
		sl1=6;
	if(f9>=9&&f9<=12)
		sl1=12;
	if(f9>=5&&f9<=8)
		sl1=9;
	if(f9>=13&&f9<=16)
		sl1=10;

	setcolor(sl1);

	if(count==0)
	{
	sound(100);
	delay(1000);
	nosound();

	p[f9]=1;
	central_value(array1[f9][p[f9]],array2[f9][p[f9]],array3[f9][p[f9]],array4[f9][p[f9]]);
		for(in=0;in<9;++in)
			circle(i1,j1,in);
	}
	else
	{
		for(in=0;in<9;++in)
			circle(i1,j1,in);
	}
}
void dice_k(int i,int oo5,int oo6,int oo7,int oo8,int oo9,int oo10,int oo11,int oo12,int oo13,int oo14,int oo15,int oo16)
{
	int que1;
	if(la!=1)
	{
		if(p[oo5]>15&&p[oo5]<=52)
		{
			if(((p[i]+13==p[oo5]))&&p[oo5]!=1&&p[oo5]!=2&&p[oo5]<=52&&p[oo5]!=15&&p[oo5]!=28&&p[oo5]!=41)
				create_guti(oo5);
		}
		else if(p[oo5]<14)
		{
			if(p[i]==(p[oo5]+39)&&p[oo5]!=1&&p[oo5]!=2&&p[oo5]<=52&&p[oo5]!=15&&p[oo5]!=28&&p[oo5]!=41)
				create_guti(oo5);
		}
		if(p[oo6]>15&&p[oo6]<=52)
		{
			if(((p[i]+13==p[oo6]))&&p[oo6]!=1&&p[oo6]!=2&&p[oo6]<=52&&p[oo6]!=15&&p[oo6]!=28&&p[oo6]!=41)
				create_guti(oo6);
		}
		else if(p[oo6]<14)
		{
			if(p[i]==(p[oo6]+39)&&p[oo6]!=1&&p[oo6]!=2&&p[oo6]<=52&&p[oo6]!=15&&p[oo6]!=28&&p[oo6]!=41)
				create_guti(oo6);
		}
		if(p[oo7]>15&&p[oo7]<=52)
		{
			if(((p[i]+13==p[oo7]))&&p[oo7]!=1&&p[oo7]!=2&&p[oo7]<=52&&p[oo7]!=15&&p[oo7]!=28&&p[oo7]!=41)
			   create_guti(oo7);
		}
		else if(p[oo7]<14)
		{
			if(p[i]==(p[oo7]+39)&&p[oo7]!=1&&p[oo7]!=2&&p[oo7]<=52&&p[oo7]!=15&&p[oo7]!=28&&p[oo7]!=41)
				create_guti(oo7);
		}
		if(p[oo8]>15&&p[oo8]<=52)
		{
			if(((p[i]+13==p[oo8]))&&p[oo8]!=1&&p[oo8]!=2&&p[oo8]<=52&&p[oo8]!=15&&p[oo8]!=28&&p[oo8]!=41)
				create_guti(oo8);
		}
		else if(p[oo8]<14)
		{
			if(p[i]==(p[oo8]+39)&&p[oo8]!=1&&p[oo8]!=2&&p[oo8]<=52&&p[oo8]!=15&&p[oo8]!=28&&p[oo8]!=41)
				create_guti(oo8);
		}
		if(p[oo9]>28&&p[oo9]<=52)
		{
			if(p[i]+26==p[oo9]&&p[oo9]!=1&&p[oo9]!=2&&p[oo9]<=52&&p[oo9]!=15&&p[oo9]!=28&&p[oo9]!=41)
				create_guti(oo9);
		}
		else if(p[oo9]<27)
		{
			if(p[i]==(p[oo9]+26)&&p[oo9]!=1&&p[oo9]!=2&&p[oo9]<=52&&p[oo9]!=15&&p[oo9]!=28&&p[oo9]!=41)
				create_guti(oo9);
		}
		if(p[oo10]>28&&p[oo10]<=52)
		{
			if(p[i]+26==p[oo10]&&p[oo10]!=1&&p[oo10]!=2&&p[oo10]<=52&&p[oo10]!=15&&p[oo10]!=28&&p[oo10]!=41)
				create_guti(oo10);
		}
		else if(p[oo10]<27)
		{
			if(p[i]==(p[oo10]+26)&&p[oo10]!=1&&p[oo10]!=2&&p[oo10]<=52&&p[oo10]!=15&&p[oo10]!=28&&p[oo10]!=41)
				create_guti(oo10);
		}
		if(p[oo11]>28&&p[oo11]<=52)
		{
			if(p[i]+26==p[oo11]&&p[oo11]!=1&&p[oo11]!=2&&p[oo11]<=52&&p[oo11]!=15&&p[oo11]!=28&&p[oo11]!=41)
				create_guti(oo11);
		}
		else if(p[oo11]<27)
		{
			if(p[i]==(p[oo11]+26)&&p[oo11]!=1&&p[oo11]!=2&&p[oo11]<=52&&p[oo11]!=15&&p[oo11]!=28&&p[oo11]!=41)
				create_guti(oo11);
		}
		if(p[oo12]>28&&p[oo12]<=52)
		{
			if(p[i]+26==p[oo12]&&p[oo12]!=1&&p[oo12]!=2&&p[oo12]<=52&&p[oo12]!=15&&p[oo12]!=28&&p[oo12]!=41)
				create_guti(oo12);
		}
		else if(p[oo12]<27)
		{
			if(p[i]==(p[oo12]+26)&&p[oo12]!=1&&p[oo12]!=2&&p[oo12]<=52&&p[oo12]!=15&&p[oo12]!=28&&p[oo12]!=41)
				create_guti(oo12);
		}
		if(p[oo13]>41&&p[oo13]<=52)
		{
			if(p[i]+39==p[oo13]&&p[oo13]!=1&&p[oo13]!=2&&p[oo13]<=52&&p[oo13]!=15&&p[oo13]!=28&&p[oo13]!=41)
				create_guti(oo13);
		}
		else if(p[oo13]<40)
		{
			if(p[i]==(p[oo13]+13)&&p[oo13]!=1&&p[oo13]!=2&&p[oo13]<=52&&p[oo13]!=15&&p[oo13]!=28&&p[oo13]!=41)
				create_guti(oo13);
		}
		if(p[oo14]>41&&p[oo14]<=52)
		{
			if(p[i]+39==p[oo14]&&p[oo14]!=1&&p[oo14]!=2&&p[oo14]<=52&&p[oo14]!=15&&p[oo14]!=28&p[oo14]!=41)
				create_guti(oo14);
		}
		else if(p[oo14]<40)
		{
			if(p[i]==(p[oo14]+13)&&p[oo14]!=1&&p[oo14]!=2&&p[oo14]<=52&&p[oo14]!=15&&p[oo14]!=28&&p[oo14]!=41)
				create_guti(oo14);
		}

		if(p[oo15]>41&&p[oo15]<=52)
		{
			if(p[i]+39==p[oo15]&&p[oo15]!=1&&p[oo15]!=2&&p[oo15]<=52&&p[oo15]!=15&&p[oo15]!=28&&p[oo15]!=41)
				create_guti(oo15);
		}
		else if(p[oo15]<40)
		{
			if(p[i]==(p[oo15]+13)&&p[oo15]!=1&&p[oo15]!=2&&p[oo15]<=52&&p[oo15]!=15&&p[oo15]!=28&&p[oo15]!=41)
				create_guti(oo15);
		}
		if(p[oo16]>41&&p[oo16]<=52)
		{
			if(p[i]+39==p[oo16]&&p[oo16]!=1&&p[oo16]!=2&&p[oo16]<=52&&p[oo16]!=15&&p[oo16]!=28&&p[oo16]!=41)
				create_guti(oo16);
		}
		else if(p[oo16]<40)
		{
			if(p[i]==(p[oo16]+13)&&p[oo16]!=1&&p[oo16]!=2&&p[oo16]<=52&&p[oo16]!=15&&p[oo16]!=28&&p[oo16]!=41)
				create_guti(oo16);
		}
	}
	if(la==1)
	{
		if(p[oo5]>28&&p[oo5]<=52)
		{
			if(p[i]+26==p[oo5]&&p[oo5]!=1&&p[oo5]!=2&&p[oo5]<=52)
				create_guti(oo5);
		}
		else if(p[oo5]<27)
		{
			if(p[i]==(p[oo5]+26)&&p[oo5]!=1&&p[oo5]!=2&&p[oo5]<=52)
				create_guti(oo5);
		}
		if(p[oo6]>28&&p[oo6]<=52)
		{
			if(p[i]+26==p[oo6]&&p[oo6]!=1&&p[oo6]!=2&&p[oo6]<=52)
				create_guti(oo6);
		}
		else if(p[oo6]<27)
		{
			if(p[i]==(p[oo6]+26)&&p[oo6]!=1&&p[oo6]!=2&&p[oo6]<=52)
				create_guti(oo6);
		}
		if(p[oo7]>28&&p[oo7]<=52)
		{
			if(p[i]+26==p[oo7]&&p[oo7]!=1&&p[oo7]!=2&&p[oo7]<=52)
				create_guti(oo7);
		}
		else if(p[oo7]<27)
		{
			if(p[i]==(p[oo7]+26)&&p[oo7]!=1&&p[oo7]!=2&&p[oo7]<=52)
				create_guti(oo7);
		}
		if(p[oo8]>28&&p[oo8]<=52)
		{
			if(p[i]+26==p[oo8]&&p[oo8]!=1&&p[oo8]!=2&&p[oo8]<=52)
				create_guti(oo8);
		}
		else if(p[oo8]<27)
		{
			if(p[i]==(p[oo8]+26)&&p[oo8]!=1&&p[oo8]!=2&&p[oo8]<=52)
			create_guti(oo8);
		}
	}

}
void player1(int z1,int z2,int z3,int z4)
{
	int b,z,i,j,m,sl;
	if(z1==1)
		sl=6;
	if(z1==9)
		sl=12;
	if(z1==5)
		sl=9;
	if(z1==13)
		sl=10;
	if(count>18)
		count=count-18;


	char ch[5];

	count1=0;
	setcolor(0);
	if(left_button_pressed())
	{
		if(x>array1[z1][p[z1]] && x<array3[z1][p[z1]] && y>array2[z1][p[z1]] &&y<array4[z1][p[z1]])
		{
			  delay(500);
			  g1=z1;
			  if(t1==0)
			  {
				c1=g1;
				++t1;
			  }

		}
	}
	if(left_button_pressed())
	{
		if(x>array1[z2][p[z2]] && x<array3[z2][p[z2]] && y>array2[z2][p[z2]] &&y<array4[z2][p[z2]])
		{
			  delay(500);
			  g1=z2;
			  if(t1==0)
			  {
				c1=g1;
				++t1;
			  }
		}
	}
	if(left_button_pressed())
	{
		if(x>array1[z3][p[z3]] && x<array3[z3][p[z3]] && y>array2[z3][p[z3]] &&y<array4[z3][p[z3]])
		{
			  delay(500);
			  g1=z3;
			  if(t1==0)
			  {
				c1=g1;
				++t1;
			  }
		}
	}
	if(left_button_pressed())
	{
		if(x>array1[z4][p[z4]] && x<array3[z4][p[z4]] && y>array2[z4][p[z4]] &&y<array4[z4][p[z4]])
		{
			  delay(500);
			  g1=z4;
			  if(t1==0)
			  {
				c1=g1;
				++t1;
			  }
		}
	}

	if((g1==z1)&&p[z1]==1&&count>=6)
	{
		if(left_button_pressed())
		{
			if(x>490 && x<532 && y>270 && y<295||(x>array1[g1][p[z1]+1]&&x<array3[g1][p[z1]+1]&&y>array2[g1][p[z1]+1]&&y<array4[g1][p[z1]+1]))
			{
				mouse_off();
				degine();
				setfillstyle(1,0);
				bar(array1[g1][p[z1]],array2[g1][p[z1]],array3[g1][p[z1]],array4[g1][p[z1]]);
				++p[z1];
				central_value(array1[g1][p[z1]],array2[g1][p[z1]],array3[g1][p[z1]],array4[g1][p[z1]]);
				setcolor(sl);
				for(i=0;i<9;++i)
					circle(i1,j1,i);
				count=count-6;
				g1=0;
				mouse_on();
			}
		}
	}
	if((g1==z2)&&p[z2]==1&&count>=6)
	{
		if(left_button_pressed())
		{
			if((x>490 && x<532 && y>270 && y<295)||(x>array1[g1][p[z2]+1]&&x<array3[g1][p[z2]+1]&&y>array2[g1][p[z2]+1]&&y<array4[g1][p[z2]+1]))
			{
				mouse_off();
				degine();
				setfillstyle(1,0);
				bar(array1[g1][p[z2]],array2[g1][p[z2]],array3[g1][p[z2]],array4[g1][p[z2]]);
				++p[z2];
				central_value(array1[g1][p[z2]],array2[g1][p[z2]],array3[g1][p[z2]],array4[g1][p[z2]]);
				setcolor(sl);
				for(i=0;i<9;++i)
					circle(i1,j1,i);
				count=count-6;
				g1=0;
				mouse_on();
			}
		}
	}
	if((g1==z3)&&p[z3]==1&&count>=6)
	{
		if(left_button_pressed())
		{
			if((x>490 && x<532 && y>270 && y<295)||(x>array1[g1][p[z3]+1]&&x<array3[g1][p[z3]+1]&&y>array2[g1][p[z3]+1]&&y<array4[g1][p[z3]+1]))
			{
				mouse_off();
				degine();
				setfillstyle(1,0);
				bar(array1[g1][p[z3]],array2[g1][p[z3]],array3[g1][p[z3]],array4[g1][p[z3]]);
				++p[z3];
				central_value(array1[g1][p[z3]],array2[g1][p[z3]],array3[g1][p[z3]],array4[g1][p[z3]]);
				setcolor(sl);
				for(i=0;i<9;++i)
					circle(i1,j1,i);
				count=count-6;
				g1=0;
				mouse_on();
			}
		}
	}
	if((g1==z4)&&p[z4]==1&&count>=6)
	{
		if(left_button_pressed())
		{
			if((x>490 && x<532 && y>270 && y<295)||(x>array1[g1][p[z4]+1]&&x<array3[g1][p[z4]+1]&&y>array2[g1][p[z4]+1]&&y<array4[g1][p[z4]+1]))
			{
				mouse_off();
				degine();
				setfillstyle(1,0);
				bar(array1[g1][p[z4]],array2[g1][p[z4]],array3[g1][p[z4]],array4[g1][p[z4]]);
				++p[z4];
				central_value(array1[g1][p[z4]],array2[g1][p[z4]],array3[g1][p[z4]],array4[g1][p[z4]]);
				setcolor(sl);
				for(i=0;i<9;++i)
					circle(i1,j1,i);
				count=count-6;
				g1=0;
				mouse_on();
			}
		}
	}
		if((g1==z1)&&p[z1]!=1&&count!=0&&p[z1]+b1<=58)
	{
		if(left_button_pressed())
		{
			if((x>490 && x<532 && y>270 && y<295)||(x>array1[g1][p[z1]+k[w1+1]]&&x<array3[g1][p[z1]+k[w1+1]]&&y>array2[g1][p[z1]+k[w1+1]]&&y<array4[g1][p[z1]+k[w1+1]]))
			{
				mouse_off();
				degine();
				guti_con();
				++w1;
				b1=k[w1+1];
				stand_col(z1);
				setcolor(sl);
				central_value(array1[g1][p[z1]],array2[g1][p[z1]],array3[g1][p[z1]],array4[g1][p[z1]]);
				if((p[z1]==p[z2]||p[z1]==p[z3]||p[z1]==p[z4])&&p[z1]!=1&&p[z1]!=2&&p[z1]<58&&p[z1]!=15&&p[z1]!=28&&p[z1]!=41)
				{
					for(i=0;i<9;++i)
						circle(i1,j1,i);
				}
				dice_k(z1,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16);
				setcolor(sl);
				p[z1]=p[z1]+k[w1];
			   //	answer();

			   //	if(l==1&&(p[z1]==p[o5]+39||p[z1]==p[o6]-13||p[z1]==p[o7]-13!!p[z1]==p[o8]-13||p[z1]==p[o9]-26||p[z1]==p[o10]-26||p[z1]==p[o11]-26||p[z1]==p[o12]-26||p[z1]-13==p[o13]||p[z1]-13==p[o14]||p[z1]-13==p[o15]||p[z1]-13==p[o16])&&p[z1]!=1&&p[z1]!==2&&p[z1]<=52)


		   //		dice_k(z1);
				central_value(array1[g1][p[z1]],array2[g1][p[z1]],array3[g1][p[z1]],array4[g1][p[z1]]);
				for(i=0;i<9;++i)
					circle(i1,j1,i);
				count=count-k[w1];
				if((p[z2]==1||p[z2]>57)&&(p[z3]==1||p[z3]>57)&&(p[z4]==1||p[z4]>57))
					b1=count;

				g1=0;
				dice_k(z1,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16);
				mouse_on();
			}
		}
	}
			if((g1==z2)&&p[z2]!=1&&count!=0&&p[z2]+b1<=58)
	{
		if(left_button_pressed())
{
			if((x>490 && x<532 && y>270 && y<295)||(x>array1[g1][p[z2]+k[w1+1]]&&x<array3[g1][p[z2]+k[w1+1]]&&y>array2[g1][p[z2]+k[w1+1]]&&y<array4[g1][p[z2]+k[w1+1]]))
			{
				mouse_off();
				degine();
				guti_con();
				++w1;
				b1=k[w1+1];
				stand_col(z2);
				setcolor(sl);
				central_value(array1[g1][p[z2]],array2[g1][p[z2]],array3[g1][p[z2]],array4[g1][p[z2]]);
				if((p[z2]==p[z1]||p[z2]==p[z3]||p[z2]==p[z4])&&p[z2]!=1&&p[z2]!=2&&p[z2]<58&&p[z2]!=15&&p[z2]!=28&&p[z2]!=41)
				{
					for(i=0;i<9;++i)
						circle(i1,j1,i);
				}
				dice_k(z2,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16);
				setcolor(sl);
				p[z2]=p[z2]+k[w1];
			//	dice_k(z2);
				central_value(array1[g1][p[z2]],array2[g1][p[z2]],array3[g1][p[z2]],array4[g1][p[z2]]);
				for(i=0;i<9;++i)
					circle(i1,j1,i);
				count=count-k[w1];
				if((p[z1]==1||p[z1]>57)&&(p[z3]==1||p[z3]>57)&&(p[z4]==1||p[z4]>57))
					b1=count;
				g1=0;
				dice_k(z2,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16);
				mouse_on();
			}
		}
	}
	if((g1==z3)&&p[z3]!=1&&count!=0&&p[z3]+b1<=58)
	{
		if(left_button_pressed())
		{
			if((x>490 && x<532 && y>270 && y<295)||(x>array1[g1][p[z3]+k[w1+1]]&&x<array3[g1][p[z3]+k[w1+1]]&&y>array2[g1][p[z3]+k[w1+1]]&&y<array4[g1][p[z3]+k[w1+1]]))
			{
				mouse_off();
				degine();
				guti_con();
				++w1;
				b1=k[w1+1];
				stand_col(z3);
				setcolor(sl);
				central_value(array1[g1][p[z3]],array2[g1][p[z3]],array3[g1][p[z3]],array4[g1][p[z3]]);
				if((p[z3]==p[z1]||p[z3]==p[z2]||p[z3]==p[z4])&&p[z3]!=1&&p[z3]!=2&&p[z3]<58&&p[z3]!=15&&p[z3]!=28&&p[z3]!=41)
				{
					for(i=0;i<9;++i)
						circle(i1,j1,i);
				}
				dice_k(z3,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16);
				setcolor(sl);
				p[z3]=p[z3]+k[w1];
			 //	dice_k(z3);
				central_value(array1[g1][p[z3]],array2[g1][p[z3]],array3[g1][p[z3]],array4[g1][p[z3]]);
				for(i=0;i<9;++i)
					circle(i1,j1,i);
				count=count-k[w1];
				if((p[z2]==1||p[z2]>57)&&(p[z1]==1||p[z1]>57)&&(p[z4]==1||p[z4]>57))
					b1=count;
				g1=0;
				dice_k(z3,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16);
				mouse_on();
			}
		}
	}

	if((g1==z4)&&p[z4]!=1&&count!=0&&p[z4]+b1<=58)
	{
		if(left_button_pressed())
		{
			if((x>490 && x<532 && y>270 && y<295&&p[4]+c<=58)||(x>array1[g1][p[z4]+k[w1+1]]&&x<array3[g1][p[z4]+k[w1+1]]&&y>array2[g1][p[z4]+k[w1+1]]&&y<array4[g1][p[z4]+k[w1+1]]))
			{
			mouse_off();
				degine();
				guti_con();
				++w1;
				b1=k[w1+1];
				stand_col(z4);
				setcolor(sl);
				central_value(array1[g1][p[z4]],array2[g1][p[z4]],array3[g1][p[z4]],array4[g1][p[z4]]);
				if((p[z4]==p[z1]||p[z4]==p[z2]||p[z4]==p[z3])&&p[z4]!=1&&p[z4]!=2&&p[z4]<58&&p[z4]!=15&&p[z4]!=28&&p[z4]!=41)
				{
					for(i=0;i<9;++i)
						circle(i1,j1,i);
				}
				dice_k(z4,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16);
				setcolor(sl);
				p[z4]=p[z4]+k[w1];
			 //	dice_k(z4);
				central_value(array1[g1][p[z4]],array2[g1][p[z4]],array3[g1][p[z4]],array4[g1][p[z4]]);
				for(i=0;i<9;++i)
					circle(i1,j1,i);
				count=count-k[w1];
				if((p[z2]==1||p[z2]>57)&&(p[z3]==1||p[z3]>57)&&(p[z1]==1||p[z1]>57))
					b1=count;
				g1=0;
				dice_k(z4,o5,o6,o7,o8,o9,o10,o11,o12,o13,o14,o15,o16);
				mouse_on();
			}
		}
	}
	b=count/6;
	m=count%6;
	if(count==0)
	{
		c2=0;
		pa=1;
	}
	setcolor(5);
	settextstyle(0,HORIZ_DIR,1);
	outtextxy(445,313,"YOU HAVE REMAIN");
	settextstyle(0,0,4);
	strcpy(ch,'\0');
	gcvt(b,5,ch);
	setfillstyle(1,0);
	bar(440,328,479,362);
	outtextxy(445,332,ch);
	settextstyle(0,HORIZ_DIR,1);
	outtextxy(486,343,"SIX AND");
	strcpy(ch,'\0');
	gcvt(m,5,ch);
	setfillstyle(1,0);
	bar(546,328,585,362);
	settextstyle(0,0,4);
	outtextxy(548,332,ch);
}

void random1(int z1,int z2,int z3,int z4,int z5)
{
	mouse_off();
	int i,j;
	char ch[5];
	setfillstyle(1,4);
	bar3d(213,213,246,246,0,0);
	randomize();
	random_value=rand() % 6;
	random_value=random_value+1;
	count=count+random_value;
		c=count%6;
		if(count>18)
		count=count-18;
	//....................if no guti present............//
	if(count<6&&(p[z1]==1&&p[z2]==1&&p[z3]==1&&p[z4]==1))
		count=0;
	//...........1 guti utar por chal na thakle.............//
	if(((p[z1]==1&&p[z2]==1&&p[z3]==1&&p[z4]+count>58)&&count<6)||((p[z1]==1&&p[z2]==1&&p[z4]==1&&p[z3]+count>58)&&count<6)||((p[z1]==1&&p[z3]==1&&p[z4]==1&&p[z2]+count>58)&&count<6)||((p[z2]==1&&p[z3]==1&&p[z4]==1&&p[z1]+count>58)&&count<6))
		count=0;
	//....................1 paka 2 stand then....................//
	if(((p[z1]>57&&p[z2]==1&&p[z3]==1&&p[z4]+count>58)&&count<6)||((p[z1]==1&&p[z2]>57&&p[z3]==1&&p[z4]+count>58)&&count<6)||((p[z1]==1&&p[z3]==1&&p[z3]>57&&p[z4]+count>58)&&count<6))
		count=0;
	if(((p[z1]>57&&p[z2]==1&&p[z4]==1&&p[z3]+count>58)&&count<6)||((p[z1]==1&&p[z2]>57&&p[z4]==1&&p[z3]+count>58)&&count<6)||((p[z1]==1&&p[z3]==1&&p[z4]>57&&p[z3]+count>58)&&count<6))
		count=0;
	if(((p[z1]>57&&p[z4]==1&&p[z3]==1&&p[z2]+count>58)&&count<6)||((p[z1]==1&&p[z4]>57&&p[z3]==1&&p[z2]+count>58)&&count<6)||((p[z1]==1&&p[z4]==1&&p[z3]>57&&p[z2]+count>58)&&count<6))
		count=0;
	if(((p[z4]>57&&p[z2]==1&&p[z3]==1&&p[z1]+count>58)&&count<6)||((p[z4]==1&&p[z2]>57&&p[z3]==1&&p[z1]+count>58)&&count<6)||((p[z4]==1&&p[z3]==1&&p[z3]>57&&p[z1]+count>58)&&count<6))
		count=0;
	if((p[z1]>57&&p[z2]>57&&p[z3]>57&&p[z4]+count>58)||(p[z1]>57&&p[z2]>57&&p[z4]>57&&p[z3]+count>58)||(p[z1]>57&&p[z3]>57&&p[z4]>57&&p[z2]+count>58)||(p[z2]>57&&p[z3]>57&&p[z4]>57&&p[z1]+count>58))
		count=0;
		//................... 2 paka 1 stand then.................//
	if((p[z1]>57&&p[z2]>57&&p[z3]==1&&p[z4]+count>58&&count<6)||(p[z1]>57&&p[z2]>57&&p[z4]==1&&p[z3]+count>58&&count<6)||(p[z1]>57&&p[z3]>57&&p[z4]==1&&p[z2]+count>58&&count<6)||(p[z1]>57&&p[z3]>57&&p[z2]==1&&p[z4]+count>58&&count<6)||(p[z1]>57&&p[z4]>57&&p[z2]==1&&p[z3]+count>58&&count<6)||(p[z1]>57&&p[z4]>57&&p[z3]==1&&p[z2]+count>58&&count<6))
		count=0;
	if((p[z2]>57&&p[z1]>57&&p[z3]==1&&p[z4]+count>58&&count<6)||(p[z2]>57&&p[z1]>57&&p[z4]==1&&p[z3]+count>58&&count<6)||(p[z2]>57&&p[z3]>57&&p[z4]==1&&p[z1]+count>58&&count<6)||(p[z2]>57&&p[z3]>57&&p[z1]==1&&p[z4]+count>58&&count<6)||(p[z2]>57&&p[z4]>57&&p[z1]==1&&p[z3]+count>58&&count<6)||(p[z2]>57&&p[z4]>57&&p[z3]==1&&p[z1]+count>58&&count<6))
		count=0;
	if((p[z3]>57&&p[z1]>57&&p[z2]==1&&p[z4]+count>58&&count<6)||(p[z3]>57&&p[z1]>57&&p[z4]==1&&p[z2]+count>58&&count<6)||(p[z3]>57&&p[z2]>57&&p[z4]==1&&p[z1]+count>58&&count<6)||(p[z3]>57&&p[z2]>57&&p[z1]==1&&p[z4]+count>58&&count<6)||(p[z3]>57&&p[z4]>57&&p[z2]==1&&p[z1]+count>58&&count<6)||(p[z3]>57&&p[z4]>57&&p[z1]==1&&p[z2]+count>58&&count<6))
		count=0;
	if((p[z4]>57&&p[z1]>57&&p[z3]==1&&p[z2]+count>58&&count<6)||(p[z4]>57&&p[z1]>57&&p[z2]==1&&p[z3]+count>58&&count<6)||(p[z4]>57&&p[z2]>57&&p[z1]==1&&p[z3]+count>58&&count<6)||(p[z4]>57&&p[z2]>57&&p[z3]==1&&p[z1]+count>58&&count<6)||(p[z4]>57&&p[z3]>57&&p[z2]==1&&p[z1]+count>58&&count<6)||(p[z4]>57&&p[z3]>57&&p[z1]==1&&p[z2]+count>58&&count<6))
		count=0;
	   //.................2 ta guti baire thakle abong baki duitar chal na thakle..................//
	if(((p[z1]!=1&&p[z1]!=2&&p[z1]+c>58)&&(p[z2]!=1&&(p[z2]!=2&&(p[z2]+count-c)>58&&p[z2]<58))&&p[z3]!=1&&p[z3]!=2&&p[z3]>57&&p[z4]!=1&&p[z4]!=2&&p[z4]>57)||((p[z1]!=1&&p[z1]!=2&&p[z1]+c>58)&&(p[z3]!=1&&(p[z3]!=2&&(p[z3]+count-c)>58&&p[z3]<58))&&p[z2]!=1&&p[z2]!=2&&p[z2]>57&&p[z4]!=1&&p[z4]!=2&&p[z4]>57)||((p[z1]!=1&&p[z1]!=2&&p[z1]+c>58)&&(p[z4]!=1&&(p[z4]!=2&&(p[z4]+count-c)>58&&p[z4]<58))&&p[z2]!=1&&p[z2]!=2&&p[z2]>57&&p[z3]!=1&&p[z3]!=2&&p[z3]>57))
		count=0;
	if(((p[z2]!=1&&p[z2]!=2&&p[z2]+c>58)&&(p[z1]!=1&&(p[z1]!=2&&(p[z1]+count-c)>58&&p[z1]<58))&&p[z3]!=1&&p[z3]!=2&&p[z3]>57&&p[z4]!=1&&p[z4]!=2&&p[z4]>57)||((p[z2]!=1&&p[z2]!=2&&p[z2]+c>58)&&(p[z3]!=1&&(p[z3]!=2&&(p[z3]+count-c)>58&&p[z3]<58))&&p[z1]!=1&&p[z1]!=2&&p[z1]>57&&p[z4]!=1&&p[z4]!=2&&p[z4]>57)||((p[z2]!=1&&p[z2]!=2&&p[z2]+c>58)&&(p[z4]!=1&&(p[z4]!=2&&(p[z4]+count-c)>58&&p[z4]<58))&&p[z1]!=1&&p[z1]!=2&&p[z1]>57&&p[z3]!=1&&p[z3]!=2&&p[z3]>57))
		count=0;
	if(((p[z3]!=1&&p[z3]!=2&&p[z3]+c>58)&&(p[z2]!=1&&(p[z2]!=2&&(p[z2]+count-c)>58&&p[z2]<58))&&p[z1]!=1&&p[z1]!=2&&p[z1]>57&&p[z4]!=1&&p[z4]!=2&&p[z4]>57)||((p[z3]!=1&&p[z3]!=2&&p[z3]+c>58)&&(p[z1]!=1&&(p[z1]!=2&&(p[z1]+count-c)>58&&p[z1]<58))&&p[z2]!=1&&p[z2]!=2&&p[z2]>57&&p[z4]!=1&&p[z4]!=2&&p[z4]>57)||((p[z3]!=1&&p[z3]!=2&&p[z3]+c>58)&&(p[z4]!=1&&(p[z4]!=2&&(p[z4]+count-c)>58&&p[z4]<58))&&p[z1]!=1&&p[z1]!=2&&p[z1]>57&&p[z2]!=1&&p[z2]!=2&&p[z2]>57))
		count=0;
	if(((p[z4]!=1&&p[z4]!=2&&p[z4]+c>58)&&(p[z2]!=1&&(p[z2]!=2&&(p[z2]+count-c)>58&&p[z2]<58))&&p[z1]!=1&&p[z1]!=2&&p[z1]>57&&p[z3]!=1&&p[z3]!=2&&p[z3]>57)||((p[z4]!=1&&p[z4]!=2&&p[z4]+c>58)&&(p[z3]!=1&&(p[z3]!=2&&(p[z3]+count-c)>58&&p[z3]<58))&&p[z1]!=1&&p[z1]!=2&&p[z1]>57&&p[z2]!=1&&p[z2]!=2&&p[z2]>57)||((p[z4]!=1&&p[z4]!=2&&p[z4]+c>58)&&(p[z1]!=1&&(p[z1]!=2&&(p[z1]+count-c)>58&&p[z1]<58))&&p[z2]!=1&&p[z2]!=2&&p[z2]>57&&p[z3]!=1&&p[z3]!=2&&p[z3]>57))
		count=0;

		g2=count;
		w1=0;
		t1=0;
		c1=0;
		c=count%6;
		b1=c;
		k[1]=c;k[2]=6-c;k[3]=c;k[4]=6-c;k[5]=c;
		arry[1]=c;arry[2]=6;arry[3]=6;
		count1=count;
	c2=count%6;
	if(count==0&&z5==1)
	{
		c2=0;
		pa=1;
	}
	if(count==0&&z5==2)
	{
		c2=0;
		pa=2;
		if(la==1)
		pa=0;
	}
	if(count==0&&z5==3)
	{
		c2=0;
		pa=3;
	}
	if(count==0&&z5==4)
	{
		c2=0;
		pa=0;
	}

	setcolor(15);
	settextstyle(0,0,4);
	setfillstyle(1,0);
	for(int n=1;n<=6;++n)
	{
		delay(100);
		strcpy(ch,'\0');
		gcvt(n,5,ch);
		bar3d(213,213,246,246,0,0);
		outtextxy(215,219,ch);
	}
	strcpy(ch,'\0');
	gcvt(random_value,5,ch);
	bar3d(213,213,246,246,0,0);
	outtextxy(215,219,ch);
	if(count>=6&&c%6==0)
		{
			sound(10000);
			delay(1000);
			nosound();
		}
	if(p[o1]==58&&p[o2]==58&&p[o3]==58&&p[o4]==58)
	{
		cleardevice();
		setcolor(4);
		settextstyle(0,0,4);
		outtextxy(129,107,"YOU WIN");
		delay(10000);
		exit(0);
	}
	if(la==1&&p[o5]==58&&p[o6]==58&&p[o7]==58&&p[o8]==58)
	{
		cleardevice();
		setcolor(4);
		settextstyle(0,0,4);
		outtextxy(129,107,"YOU LOSS");
		delay(10000);
		exit(0);
	}
	if(la==0&&p[o5]==58&&p[o6]==58&&p[o7]==58&&p[o8]==58&&p[o9]==58&&p[o10]==58&&p[o11]==58&&p[o12]==58&&p[o13]==58&&p[o14]==58&&p[o15]==58&&p[o16]==58)
	{
		cleardevice();
		setcolor(4);
		settextstyle(0,0,4);
		outtextxy(129,107,"YOU LOSS");
		delay(10000);
		exit(0);
	}

	mouse_on();
}
