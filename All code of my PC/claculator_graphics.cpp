# include<graphics.h>
# include<conio.h>
# include<stdio.h>
# include<dos.h>
# include<process.h>
# include<string.h>
# include<dos.h>
# include<ctype.h>
# include<process.h>
# include<math.h>
# define DisplayDigit 13
# define TRUE          1
# define FALSE         0
# define min(a,b) (((a)>(b))?(b):(a))

enum CALC_STATUS
     {
	  FIRST,
	  VALID,
	  ERROR
     };
enum      CALC_STATUS CalcState;
union     REGS i,o;
int       Operator;
double    Operand=0.0;
int       Negative;
char      Number[DisplayDigit+1];

void      SetDisplay(double);
void      GetDisplay(double &);
void      UpdateDisplay(void);
void      CheckFirst(void);
void      InsertKey(char Key);
void      Error(void);
void      Clear(void);
void      ClearAll(void);
void      drawButton(int,int,int,int,int,char);
int       initmouse(void);
void      showmouseptr(void);
void      hidemouseptr(void);
void      getmousepos(int *,int *,int *);

void drawButton(int x,int y,int size,int color1,int color2,char *str)
{
     setcolor(color1);
     setfillstyle(SOLID_FILL,LIGHTGRAY);
     rectangle(x,y,x+size,y+size);
     floodfill(x+size/2,y+size/2,color1);
     setcolor(color2);
     line(x,y+size,x+size,y+size);
     line(x+size,y,x+size,y+size);
     setcolor(BLACK);

outtextxy((x+size/2)-textwidth(str)/2,(y+size/2)-textheight(str)/2,str);
}

void CalcKey(char Key)
{
     double R;
     Key=toupper(Key);
     if(Key>='0' && Key<='9')
     {
	  CheckFirst();
	  if(strcmp(Number,"0")==0)
	       Number[0]='
