#include <stdio.h>
#include <dos.h>
#include <graphics.h>
#include <conio.h>

#define	MAGFY	20

class Bline
	{
	private:
		int CEN_X,CEN_Y,radius,X,Y,i,j;
	public:
	void line1(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4);

	};

void Bline::line1(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{
	CEN_X = (x1+x2)/2 + (x3-x2)/2;
	CEN_Y = (y1+y2)/2 + (y3-y2)/2;
	//radius = (x1+x2)/2;
	for(;!kbhit();)
	{
	delay(300);
	cleardevice();
	//1st box
	line(x1,y1,x2,y2);
	line(x1,y1-20,x2,y2-20);	//
	line(x3,y3,x4,y4);
	line(x3,y3-20,x4,y4-20);	//
	line(x1,y1,x4,y4);
	line(x1,y1-20,x4,y4-20);	//
	line(x2,y2,x3,y3);
	line(x2,y2-20,x3,y3-20);	//

	//2nd box
	line(x1,y1,x1,y1-20);
	line(x2,y2,x2,y2-20);
	line(x3,y3,x3,y3-20);
	line(x4,y4,x4,y4-20);

	//some point which will be moving around 3Dbox
	//line(x2+40,y2-20,x2+40,y2-20);
	//rectangle(x2,y2,x4,y4);

	//1st Quadrant
	if(x1>CEN_X && y1<CEN_Y) x1--,y1--;
	if(x1==CEN_X && y1<CEN_Y) x1--,y1++;
	if(x1<CEN_X && y1<CEN_Y) x1--,y1++;
	if(x1<CEN_X && y1==CEN_Y) x1++,y1++;
	if(x1<CEN_X && y1>CEN_Y) x1++,y1++;
	if(x1==CEN_X && y1>CEN_Y) x1++,y1--;
	if(x1>CEN_X && y1>CEN_Y) x1++,y1--;
	if(x1>CEN_X && y1==CEN_Y) x1--,y1--;

	//2nd Quadrant
	if(x2>CEN_X && y2<CEN_Y) x2--,y2--;
	if(x2==CEN_X && y2<CEN_Y) x2--,y2++;
	if(x2<CEN_X && y2<CEN_Y) x2--,y2++;
	if(x2<CEN_X && y2==CEN_Y) x2++,y2++;
	if(x2<CEN_X && y2>CEN_Y) x2++,y2++;
	if(x2==CEN_X && y2>CEN_Y) x2++,y2--;
	if(x2>CEN_X && y2>CEN_Y) x2++,y2--;
	if(x2>CEN_X && y2==CEN_Y) x2--,y2--;

	//3rd Quadrant
	if(x3>CEN_X && y3<CEN_Y) x3--,y3--;
	if(x3==CEN_X && y3<CEN_Y) x3--,y3++;
	if(x3<CEN_X && y3<CEN_Y) x3--,y3++;
	if(x3<CEN_X && y3==CEN_Y) x3++,y3++;
	if(x3<CEN_X && y3>CEN_Y) x3++,y3++;
	if(x3==CEN_X && y3>CEN_Y) x3++,y3--;
	if(x3>CEN_X && y3>CEN_Y) x3++,y3--;
	if(x3>CEN_X && y3==CEN_Y) x3--,y3--;

	//4th Quadrant
	if(x4>CEN_X && y4<CEN_Y) x4--,y4--;
	if(x4==CEN_X && y4<CEN_Y) x4--,y4++;
	if(x4<CEN_X && y4<CEN_Y) x4--,y4++;
	if(x4<CEN_X && y4==CEN_Y) x4++,y4++;
	if(x4<CEN_X && y4>CEN_Y) x4++,y4++;
	if(x4==CEN_X && y4>CEN_Y) x4++,y4--;
	if(x4>CEN_X && y4>CEN_Y) x4++,y4--;
	if(x4>CEN_X && y4==CEN_Y) x4--,y4--;
	}
}
int main()
{
	int GD=DETECT,GM;

	Bline line1;
	initgraph(&GD,&GM,"c:\tc\bgi");

//according to your own computer (TC\BIN) Directory


line1.line1(5*MAGFY,7*MAGFY,1*MAGFY,3*MAGFY,3*MAGFY,1*MAGFY,7*MAGFY,5*MAGFY);

	getch();
	restorecrtmode();
	closegraph();
	return 0;
}
