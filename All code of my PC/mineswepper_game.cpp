Code :
//Auther   :  Sreejesh
//Address  :  S7CS
//            SCMS School of Engg. & Tech.
//            Ernakulam
//            Kerala,India

#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#define ROWMAX 10
#define COLUMNMAX 10
////////////////////////////
union REGS i,o;
enum Bool{false,true};
void InitMouse();
void ShowMouse();
void HideMouse();
int GetX();
int GetY();
int GetB();
int ButtonStatus;
void OnLButtonDown(int x,int y);
void OnMouseMove(int Click,int x,int y);
void OnLButtonUp(int x,int y);
int ButtonMoveStatus;
int PrevX,PrevY;
////////////////////////////////////
void ExplodeAllMines();
void  DisplayNearMines(int,int);
void WinGame();
void StartGame();
Bool Check();
Bool bGameOverflag;
class CBrick
{
public:
	int Left,Top,Right,Bottom;
	int Width,Height;
	Bool bBombFlag;
	int NearMineCount;
	Bool bCheckedFlag;
	CBrick()
	{
		Width=Height=30;
		NearMineCount=0;
		bBombFlag=false;
		bCheckedFlag=false;
	}
	void Set(int x,int y)
	{
		Left=x;Top=y;
		Right=Left+Width;
		Bottom=Top+Height;
	}
	void Set(int x,int y,int w,int h,char a)
	{
		Left=x;Top=y;
		Width=w;Height=h;
		Right=Left+Width;
		Bottom=Top+Height;
	}
	void Set(int tx,int ty,int bx,int by)
	{
		Left=tx;Top=ty;
		Right=bx;
		Bottom=by;
		Width=Right-Left;
		Height=Bottom-Top;
	}
	void Draw(Bool DrawFlag)
	{
		HideMouse();
		if(DrawFlag==true)
		{
			setfillstyle(1,LIGHTGRAY);
			bar(Left,Top,Right,Bottom);
			setcolor(DARKGRAY);
			rectangle(Left,Top,Right,Bottom);
			rectangle(Left+1,Top+1,Right-1,Bottom-1);
			setcolor(WHITE);
			line(Left,Top,Right,Top);
			line(Left,Top,Left,Bottom);
			line(Left+1,Top+1,Right-1,Top+1);
			line(Left+1,Top+1,Left+1,Bottom-1);
		}
		else
		{
			setfillstyle(1,LIGHTGRAY);
			bar(Left,Top,Right,Bottom);
			setcolor(DARKGRAY);
			rectangle(Left,Top,Right,Bottom);
			rectangle(Left+1,Top+1,Right-1,Bottom-1);
			setcolor(WHITE);
			line(Left,Bottom,Right,Bottom);
			line(Left,Bottom,Right,Bottom);
			line(Left+1,Bottom-1,Right-1,Bottom-1);
			line(Left+1,Bottom-1,Right-1,Bottom-1);
			if(bBombFlag==true)
			{
				setcolor(RED);
				outtextxy(Left+(Width/2)-3,Top+(Height/2)-3,"*");
			}
			else
			{
				if(NearMineCount!=0)
				{
					char s[10];
					setcolor(NearMineCount);
					itoa(NearMineCount,s,10);
					outtextxy(Left+(Width/2)-3,Top+(Height/2)-3,s);
				}
			}
		}
		ShowMouse();
	}
	Bool IsBetween(int x,int y)
	{
		if(x>=Left && x<=Right && y>=Top && y<=Bottom)
		{
			return true;
		}
		return false;
	}
};
class CFace:public CBrick
{
public:
	CFace()
	{
		CBrick();
	}
	void Draw(int MouthDraw)
	{
		CBrick::Draw(true);
		HideMouse();
		setcolor(BLACK);
		circle(Left+Width/2,Top+Height/2,Width/2-5);
		setfillstyle(1,YELLOW);
		floodfill(Left+Width/2+1,Top+Height/2+1,BLACK);
		circle(Left+10,Top+13,2);
		circle(Right-10,Top+13,2);
		if(MouthDraw==0)
		{
			arc(Left+Width/2,Bottom-12,180,360,3);
		}
		else if(MouthDraw==1)
		{
			arc(Left+Width/2,Bottom-10,0,360,3);
		}
		else if(MouthDraw==2)
		{
			arc(Left+Width/2,Bottom-10,0,180,3);
		}
		else if(MouthDraw==3)
		{
			arc(Left+Width/2,Bottom-10,180,360,3);
			for(int i=0;i<10;i++)
			{
				int prevBkColor=getbkcolor();
				setbkcolor(RED);
				setbkcolor(prevBkColor);
				sound(1000);
				delay(130);
				nosound();
			}
		}
		ShowMouse();
	}
};
CBrick Brick[ROWMAX][COLUMNMAX];
CFace Face;
CBrick About;
void main()
{
	///////////////////////////////////////
	int gd=0,gm;
	initgraph(&gd,&gm,"");
	//////////////////////////
	ButtonStatus=0;
	ButtonMoveStatus=false;
	//////////////////////////
	InitMouse();
	ShowMouse();
	//////////////////////
	PrevX=GetX();
	PrevY=GetY();
	/////////////////////
	StartGame();
	////////////////
	while(!kbhit())
	{
		if(PrevX!=GetX() || PrevY!=GetY())
		{
			OnMouseMove(GetB(),GetX(),GetY());
			PrevX=GetX();
			PrevY=GetY();
		}
		else if(GetB()==1 && ButtonStatus==0)
		{
			OnLButtonDown(GetX(),GetY());
		}
		else if(GetB()==0 && ButtonStatus==1)
		{
			OnLButtonUp(GetX(),GetY());
		}
	}
	getch();
}
void InitMouse()
{
	i.x.ax=0;
	int86(0x33,&i,&o);
}
void ShowMouse()
{
	i.x.ax=1;
	int86(0x33,&i,&o);
}
void HideMouse()
{
	i.x.ax=2;
	int86(0x33,&i,&o);
}
int GetB()
{
	i.x.ax=3;
	int86(0x33,&i,&o);
	return o.x.bx;
}
int GetX()
{
	i.x.ax=3;
	int86(0x33,&i,&o);
	return o.x.cx;
}
int GetY()
{
	i.x.ax=3;
	int86(0x33,&i,&o);
	return o.x.dx;
}
void OnLButtonDown(int x,int y)
{
	ButtonStatus=1;
	//////////////
	if(Face.IsBetween(x,y)==true)
	{
		StartGame();
		Face.Draw(0);
	}
	if(About.IsBetween(x,y)==true)
	{
		HideMouse();
		setcolor(RED);
		outtextxy(Brick[0][0].Left,About.Top-10,"My mailID is ");
		setcolor(MAGENTA);

outtextxy(Brick[0][0].Left+100,About.Top-10,"sree_sreejesh@rediffmail.com"
);
		setcolor(RED);
		outtextxy(Brick[0][0].Left,About.Bottom+2,"Expecting instructions &
error currections");
		outtextxy(Brick[0][0].Left,About.Bottom+12,"Press any key to
continue");
		getch();
		setfillstyle(1,BLACK);

bar(Brick[0][0].Left-1,About.Top-10,Brick[0][0].Left+400,About.Bottom+25);
		About.Draw(true);

outtextxy(About.Left+About.Width/2-25,About.Top+About.Height/2-5,"About");
		ShowMouse();
	}
	if(bGameOverflag==true) return;
	int i,j;
	for(i=0;i<ROWMAX;i++)
	{
		for(j=0;j<COLUMNMAX;j++)
		{
			if(Brick[i][j].IsBetween(x,y)==true)
			{
				Face.Draw(1);
				delay(150);
				if(Brick[i][j].bBombFlag==true)
				{
					ExplodeAllMines();
					bGameOverflag=true;
					Face.Draw(2);
					break;
				}
				else
				{
					sound(1000);
					DisplayNearMines(i,j);
					nosound();
					if(Check()==true)
					{
						WinGame();
					}
				}
				Face.Draw(0);
			}
		}
	}
}
void OnMouseMove(int Click,int x,int y){}
void OnLButtonUp(int x,int y){ButtonStatus=0;}
void ExplodeAllMines()
{
	int i,j;
	for(i=0;i<ROWMAX;i++)
	{
		for(j=0;j<COLUMNMAX;j++)
		{
			if(Brick[i][j].bBombFlag==true)
			{
				Brick[i][j].Draw(false);
				sound(200);
				delay(500);
				nosound();
			}
		}
	}
}
void DisplayNearMines(int i,int j)
{
	if(Brick[i][j].bCheckedFlag==true) return;
	int NearMineCount=0;
	if(i!=0 && j!=0)//1
	{
		if(Brick[i-1][j-1].bBombFlag==true) NearMineCount++;
	}
	if(i!=0)//2
	{
		if(Brick[i-1][j].bBombFlag==true) NearMineCount++;
	}
	if(i!=0 && (j+1)%COLUMNMAX!=0)//3
	{
		if(Brick[i-1][j+1].bBombFlag==true) NearMineCount++;
	}
	if((j+1)%COLUMNMAX!=0)//4
	{
		if(Brick[i][j+1].bBombFlag==true) NearMineCount++;
	}
	if((i+1)%ROWMAX!=0 && (j+1)%COLUMNMAX!=0)//5
	{
		if(Brick[i+1][j+1].bBombFlag==true) NearMineCount++;
	}
	if((i+1)%ROWMAX!=0)//6
	{
		if(Brick[i+1][j].bBombFlag==true) NearMineCount++;
	}
	if((i+1)%ROWMAX!=0 && j!=0)//7
	{
		if(Brick[i+1][j-1].bBombFlag==true) NearMineCount++;
	}
	if(j!=0)//8
	{
		if(Brick[i][j-1].bBombFlag==true) NearMineCount++;
	}
	Brick[i][j].NearMineCount=NearMineCount;
	Brick[i][j].bCheckedFlag=true;
	if(NearMineCount==0)
	{
		if(i!=0 && j!=0) DisplayNearMines(i-1,j-1);//1
		if(i!=0) DisplayNearMines(i-1,j);//2
		if(i!=0 && (j+1)%COLUMNMAX!=0) DisplayNearMines(i-1,j+1);//3
		if((j+1)%COLUMNMAX!=0) DisplayNearMines(i,j+1);//4
		if((i+1)%ROWMAX!=0 && (j+1)%COLUMNMAX!=0)
DisplayNearMines(i+1,j+1);//5
		if((i+1)%ROWMAX!=0) DisplayNearMines(i+1,j);//6
		if((i+1)%ROWMAX!=0 && j!=0) DisplayNearMines(i+1,j-1);//7
		if(j!=0) DisplayNearMines(i,j-1);//8
	}
	Brick[i][j].Draw(false);
}
Bool Check()
{
	int i,j;
	Bool WinStat;
	WinStat=true;
	for(i=0;i<ROWMAX;i++)
	{
		for(j=0;j<COLUMNMAX;j++)
		{
			if(Brick[i][j].bBombFlag==false && Brick[i][j].bCheckedFlag==false)
			{
				WinStat=false;
				break;
			}
		}
	}
	return WinStat;
}
void WinGame()
{
	bGameOverflag=true;
	HideMouse();
	Face.Draw(3);
	ShowMouse();
}
void StartGame()
{
	HideMouse();
	bGameOverflag=false;
	int x,y,i,j,k;
	for(i=0;i<ROWMAX;i++)
	{
		for(j=0;j<COLUMNMAX;j++)
		{
			Brick[i][j]=CBrick();
		}
	}

for(y=70,i=0;y<=70+Brick[0][0].Height*ROWMAX;y+=Brick[0][0].Height+1,i++)
	{

for(x=175,j=0;x<=175+Brick[0][0].Width*COLUMNMAX;x+=Brick[0][0].Width+1,j+
+)
		{
			Brick[i][j].Set(x,y);
		}
	}
	CBrick Bk;

Bk.Set(Brick[0][0].Left-10,Brick[0][0].Top-10,Brick[ROWMAX-1][COLUMNMAX-1]
Right+10,Brick[ROWMAX-1][COLUMNMAX-1].Bottom+10);
	Bk.Draw(true);
	About.Set(getmaxx()/2-80,getmaxy()-70,200,30,' ');
	About.Draw(true);

outtextxy(About.Left+About.Width/2-25,About.Top+About.Height/2-5,"About");
	for(i=0;i<ROWMAX;i++)
	{
		for(j=0;j<COLUMNMAX;j++)
		{
			Brick[i][j].Draw(true);
		}
	}
	randomize();
	for(k=0;k<10;k++)
	{
		i=rand()%ROWMAX;
		j=rand()%COLUMNMAX;
		if(Brick[i][j].bBombFlag==true)
		{
			k--;
		}
		else Brick[i][j].bBombFlag=true;
	}
	Face.Set(getmaxx()/2-15,10,30,30,' ');
	Face.Draw(0);
	ShowMouse();
}

