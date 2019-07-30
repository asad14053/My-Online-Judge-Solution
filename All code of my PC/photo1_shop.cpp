#include <string.h>
#include<complex.h>
#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <math.h>
#define MIN_X 83
#define MAX_X 629
#define MIN_Y 30
#define MAX_Y 409
#define MAX_BUTTONS 22 //total no of buttins available on the right
side
of thr screen eg save etc
#define MAX_COLPAT 28 //total no of color patterns solid fill dashsed
etc

// down words are the macros which define the action e.g marking or delete etc

#define CLEAR      0
#define MARK_OP    8
#define CLIP_OP    10
#define TRANS_OP   11
#define ROTATE_OP 12
#define DELETE_OP 13
#define FLIP      14
#define MIRROR    15
#define LOAD_OP   16
#define SAVE_OP   17
#define SCALE_OP  18


/*intro()
{
system("c:project1");
sleep(3);
return 0;
}
#pragma startup intro 99*/

/*this structure defines the description of the each button eg the
start x ,y and end x,y of the button and the button no and descriptoin
about the working of the button*/
typedef struct button_desc
{
	int xmin,ymin,xmax,ymax;
	int button_no;
	char* desc;
}button;

button buttons[MAX_BUTTONS];//maximum no of buttons in case 22

/* the struct below defines the color buttons on the bottom of the
paintbrush these buttons include the colors + the fill patterns
the iformation about the button is also included*/
typedef struct color_button
{
	int xmin,ymin,xmax,ymax;
	int color;
	int colflag;
}color_but;

  color_but colorbuttons[28]; // total 28 buttons which are the color

/*/ structure to mark an area    to  perform the some actions which can
only be performed after
the area is marked e. rotation*/
struct
{
	int top,left,bottom,right;
}marker;

int marked=0; /*/ to store whether marked or not*/

char FileName[40]="Untitled";
int  saved=1;/*/to store if file has been saved or not*/
int  LeftButtonPressed;//vaeiable to store the information about the left button pressd
int  RightButtonPressed; //vaeiable to store the information about the right button pressd
int  mousex,mousey;//the x and y position of the mouse
int  prevx,prevy; //prev sely position of x and y mouse coordinate
int  Current_Color=BLACK; /*/ to  Store the current color           */
int  Current_Pattern=EMPTY_FILL;/*/ to store the current Pattern*/
int  Current_Button=1;/*/ to store the current button pressed*/
int  Prev_Button=1;/*/ to store the previous button              */

//class ICONS
//THIS CLASS IS THE ONE WHICH DRAWS ALL THE SHAPES WHICH U CAN SEE ON THE
//ON THE LEFT HAND SIDE OF THE SCREEN ON THE BUTTONS
//PLZ DONOT TRY TO CHANE THE COLOR OR THE COORDINATE OF THE MEMBER FUNCTIONS
//this class is used in many classes to come..........
class ICONS
{
public:
void New_ico(int x1, int y1);//the picture on the new button
void Open_ico(int x1, int y1);//the picture on the open icon
void Save_ico(int x1, int y1);//the picture on the save icon
void Line_ico(int x1, int y1);//the picture on the line i con
void Rectangle_ico(int x1, int y1);//the picture on rectangle icon
void Circle_ico(int x1, int y1); //the picture on the circle icon
void Airbrush_ico(int x1,int y1);//the picture on Airbrush icon
void Brush_ico(int x1, int y1);//the picture on Brush icon
void Arc_ico(int x1,int y1);//the picture on the Arc icon
void Pen_ico(int x1, int y1);//the picture on the Pen icon
void Erase_ico(int x1, int y1);//the pictuer on the erase icon
void Alphabet_ico(int x, int y);//the picture on the alphabat icon
void Mark_ico(int x1, int y1);//the picture on the mark icon
void Clip_ico(int x1, int y1);//the picture on theclip icon
void Translate_ico(int x, int y);//the picture on the translate icon
void Rotate_ico(int x, int y);//the picture on therotate icon
void Scale_ico(int x, int y);//picture on the scale icon
void Bucket_ico(int x,int y);//the picture on the bucket icon
void Cube_ico(int x, int y);//the oicture on the cube icon
void Del_ico(int x, int y);//the picture on the del icon
void color_ico(int x1, int y1, int c);
void flip_ico(int x, int y);
void mirror_ico(int x, int y);
void Fill_ico(int x1, int y1);
};
//**********************END OF CLASS "ICONS" **************************/
//*********START OF FUNCTION DEFINATIONS  OF CLASS "ICONS" ************/

void  ICONS :: New_ico (int x1, int y1)
{
	setlinestyle(0, 1, 1);
	setcolor(BLACK);
	line(9+x1, 4+y1, 9+x1, 20+y1);
	line(9+x1, 20+y1, 21+x1, 20+y1);
	line(21+x1, 20+y1, 21+x1, 8+y1);
	line(9+x1, 4+y1, 17+x1, 4+y1);
	line(17+x1, 4+y1, 17+x1, 8+y1);
	line(17+x1, 8+y1, 21+x1, 8+y1);
	line(21+x1, 8+y1, 17+x1, 4+y1);

	setfillstyle(1, WHITE);
	floodfill(10+x1, 9+y1, BLACK);
}

//************ The end of void New_ico(int x1, int y1) **************//

//*******   Start of function void Open_ico(int x1, int y1) ********//
//this function draws the folder like picture on the save icon
//plz donot edit the flood fill colors or the line coordinate
//It will result in the whole screen filled with some un expected color

void ICONS::Open_ico(int x1, int y1)
{
	setlinestyle(0, 1, 1);
	//from here to line no 588 the arrrow is drawn which u can see on the open i_con
	setcolor(BLACK);
	line(5+x1, 20+y1, 17+x1, 20+y1);
	line(17+x1, 20+y1, 24+x1, 15+y1);
	line(24+x1, 15+y1, 12+x1, 15+y1);
	line(12+x1, 15+y1, 5+x1, 20+y1);
	setfillstyle(1, DARKGRAY);
	floodfill(10+x1, 18+y1, BLACK);
	//This is the code for the blackish part of the open icon
	line(5+x1, 20+y1, 5+x1, 10+y1);
	line(5+x1, 10+y1, 6+x1, 8+y1);
	line(6+x1, 8+y1, 8+x1, 8+y1);
	line(8+x1, 8+y1, 9+x1, 10+y1);
	line(9+x1, 10+y1, 17+x1, 10+y1);
	line(17+x1, 10+y1, 17+x1, 15+y1);
	//This is the yellowish part of the open icon icon
	setfillstyle(1, YELLOW);
	floodfill(6+x1, 12+y1, BLACK);
	line(15+x1, 7+y1, 17+x1, 5+y1);
	line(17+x1, 5+y1, 22+x1, 7+y1);
	line(22+x1, 7+y1, 24+x1, 12+y1);
	line(24+x1, 12+y1, 20+x1, 10+y1);
	line(24+x1, 12+y1, 26+x1, 9+y1);
}
//*******   end of function void Open_ico(int x1, int y1) ********//


//*******   start of the finction void Save_ico(int x1, int y1)
*******//
//this function draws the floppy like picture on the save icon
//plz donot edit the flood fill colors or the line coordinate
//It will result in the whole screen filled with some un expected color
void ICONS::Save_ico(int x1, int y1)
{
	setlinestyle(0, 1, 1);
	setcolor(BLACK);
	line(6+x1, 4+y1, 24+x1, 4+y1);
	line(24+x1, 4+y1, 24+x1, 20+y1);
	line(24+x1, 20+y1, 8+x1, 20+y1);
	line(8+x1, 20+y1, 6+x1, 18+y1);
	line(6+x1, 18+y1, 6+x1, 4+y1);

	line(9+x1, 4+y1, 9+x1, 12+y1);
	line(9+x1, 12+y1, 21+x1, 12+y1);
	line(21+x1, 12+y1, 21+x1, 4+y1);

	line(10+x1, 20+y1, 10+x1, 15+y1);
	line(10+x1, 15+y1, 20+x1, 15+y1);
	line(20+x1, 15+y1, 20+x1, 20+y1);

	line(17+x1, 15+y1, 17+x1, 20+y1);

	line(21+x1, 7+y1, 24+x1, 7+y1);
  //the upper white portion is the result of the following staement
	setfillstyle(1, WHITE);
	floodfill(10+x1, 5+y1, BLACK);
	//the following statement creates the blueish part of the save icon
	setfillstyle(1, LIGHTBLUE);
	floodfill(7+x1, 5+y1, BLACK);
	//this state ment results in the dark gray part which is on the bottom of the
	//icon is created
	setfillstyle(1, DARKGRAY);
	floodfill(11+x1, 19+y1, BLACK);
}
//*******   End  of the finction void Save_ico(int x1, int y1) *******//


//*******   Start  of the finction void Line_ico(int x1, int y1) ********//
//this function draws the line icon which is the simplest of the all the
//work i have done u can edit the color but still u cannot edit the
//coordinates because they are been seteled after a lot of struggle
void ICONS::Line_ico(int x1, int y1)
{
	setcolor(BLACK);
	line(8+x1, 5+y1, 22+x1, 19+y1);
}

//*******   End   of the finction void Line_ico(int x1, int y1) *******//

//*******   Start of the finction void Rectangle_ico(int x1, int y1)********//

//this is another simple function  it just draws the rectangle which is onthe
//rectangle u can edit the color but still u cannot edit the
//coordinates because they are been seteled after a lot of struggle
void ICONS::Rectangle_ico(int x1, int y1)
{
	setcolor(BLACK);
	rectangle(8+x1, 5+y1, 22+x1, 19+y1);
}

void ICONS::Circle_ico(int x1, int y1)
{
	setcolor(BLACK);
	circle(15+x1, 12+y1, 8);
}

void ICONS::Arc_ico(int x1, int y1)
{       setcolor(LIGHTCYAN);
	line(x1+6,y1+5,x1+7,y1+16);
	line(x1+6,y1+5,x1+12,y1+18);
	line(x1+6,y1+5,x1+17,y1+20);
	line(x1+6,y1+5,x1+22,y1+22);
	line(x1+6,y1+5,x1+27,y1+24);
	}


void ICONS::Airbrush_ico(int x1,int y1)
{       setlinestyle(0,1,1);
	setcolor(BLUE);
	line(x1+15,y1+15,x1+20,y1+24);
	line(x1+20,y1+24,x1+25,y1+20);
	line(x1+25,y1+20,x1+19,y1+10);
	line(x1+15,y1+15,x1+14,y1+13);
	line(x1+19,y1+10,x1+18,y1+9);
	line(x1+14,y1+13,x1+14,y1+10);
	line(x1+18,y1+9,x1+16,y1+9);
	line(x1+14,y1+10,x1+16,y1+9);
	line(x1+16,y1+9,x1+15,y1+7);
	line(x1+15,y1+7,x1+13,y1+8);
	line(x1+13,y1+8,x1+14,y1+10);
	setfillstyle(1,BLUE);
	floodfill(x1+19,y1+12,BLUE);
	for(int i=8;i<=12;i++)
	{
	for(int j=9;j<=11;j++)
	{
	putpixel(x1+i,y1+j,LIGHTBLUE);}}
	setcolor(BLACK);

       }

void ICONS::Pen_ico(int x1, int y1)
{
	setcolor(BLACK);
	setlinestyle(0, 1, 3);
	line(19+x1, 21+y1, 10+x1, 9+y1);
	setlinestyle(0, 1, 1);
	line(11+x1, 9+y1, 11+x1, 6+y1);
	line(11+x1, 6+y1, 6+x1, 4+y1);
	line(6+x1, 4+y1, 7+x1, 9+y1);
	line(7+x1, 9+y1, 11+x1, 9+y1);


}

void ICONS::Cube_ico(int x, int y)
{
	rectangle(8+x, 5+y, 24+x, 17+y);
	rectangle(5+x, 9+y, 21+x, 21+y);
	line(5+x, 9+y, 8+x, 5+y);
	line(21+x, 21+y, 24+x, 17+y);
	line(21+x, 9+y, 24+x, 5+y);
	line(5+x, 21+y, 8+x, 17+y);
}

//this function draws the eraser picture on the
//eraser button . plz donot change the color no
//in any of the following statements + coordinates
//of the line function
void ICONS::Erase_ico(int x1, int y1)
{
	setlinestyle(0, 1, 1);
	setcolor(BLACK);
	line(14+x1, 20+y1, 25+x1, 7+y1);
	line(25+x1, 7+y1, 23+x1, 4+y1);
	line(23+x1, 4+y1, 12+x1, 17+y1);
	line(12+x1, 17+y1, 14+x1, 20+y1);

	line(14+x1, 20+y1, 5+x1, 20+y1);
	line(5+x1, 20+y1, 5+x1, 17+y1);
	line(5+x1, 17+y1, 12+x1, 17+y1);

	line(5+x1, 17+y1, 16+x1, 4+y1);
	line(16+x1, 4+y1, 23+x1, 4+y1);

	setfillstyle(1, DARKGRAY);
	floodfill(14+x1, 18+y1, BLACK);
	setfillstyle(1, WHITE);
	floodfill(16+x1, 5+y1, BLACK);
}

void ICONS::Alphabet_ico(int x, int y)
{
	setcolor(BLACK);
	setlinestyle(0, 1, 3);
	line(8+x, 20+y, 18+x, 4+y);
	line(18+x, 4+y, 18+x, 20+y);
	setlinestyle(0, 1, 1);
	line(12+x, 14+y, 19+x, 14+y);
	line(6+x, 20+y, 12+x, 20+y);
	line(15+x, 20+y, 21+x, 20+y);
}

void ICONS::Mark_ico(int x1, int y1)
{
	setlinestyle(0, 1, 1);
	setcolor(BLACK);
	setlinestyle(3, 1, 1);
	rectangle(5+x1, 5+y1, 25+x1, 19+y1);
	setlinestyle(0, 1, 1);
}

void ICONS::Clip_ico(int x1, int y1)
{
	setlinestyle(0, 1, 1);
	setcolor(BLACK);
	rectangle(5+x1, 5+y1, 25+x1, 19+y1);
	setfillstyle(1, WHITE);
	floodfill(15+x1, 12+y1, BLACK);
	setfillstyle(1,BLACK);
	bar(12+x1, 10+y1, 23+x1, 17+y1);
}

void ICONS::Translate_ico(int x, int y)
{
	setcolor(BLACK);
	line(6+x, 3+y, 20+x, 3+y);
	line(20+x, 3+y, 20+x, 8+y);
	line(6+x, 3+y, 6+x, 16+y);
	line(6+x, 16+y, 12+x, 16+y);

	line(25+x, 8+y, 12+x, 8+y);
	line(12+x, 8+y, 12+x, 20+y);
	line(12+x, 20+y, 25+x, 20+y);
	line(25+x, 20+y, 25+x, 8+y);
	setfillstyle(1, LIGHTRED);
	floodfill(8+x, 5+y, BLACK);
	floodfill(20+x, 18+y, BLACK);
}

void ICONS::Rotate_ico(int x, int y)
{
	setcolor(BLACK);
	line(6+x, 5+y, 20+x, 5+y);
	line(20+x, 5+y, 20+x, 8+y);
	line(6+x, 5+y, 6+x, 18+y);
	line(6+x, 18+y, 12+x, 18+y);

	line(15+x, 7+y, 26+x, 11+y);
	line(26+x, 11+y, 21+x, 20+y);
	line(21+x, 20+y, 11+x, 16+y);
	line(11+x, 16+y, 15+x, 7+y);
	setfillstyle(1, LIGHTRED);
	floodfill(8+x, 7+y, BLACK);
	floodfill(20+x, 18+y, BLACK);
}

void ICONS::Del_ico(int x, int y)
{
	setcolor(RED);
	setlinestyle(0, 1, 3);
	line(9+x, 5+y, 16+x, 11+y);
	line(16+x, 11+y, 21+x, 18+y);

	line(20+x, 5+y, 11+x, 12+y);
	line(11+x, 12+y, 8+x, 19+y);
	setcolor(BLACK);
	setlinestyle(0, 1, 1);
}

void ICONS::color_ico(int x1, int y1, int c)
{
	setcolor(7);
	rectangle(x1, y1, x1+9, y1+8);
	setfillstyle(1, c);
	floodfill(x1+1, y1+1, BLACK);
}

void ICONS::Brush_ico(int x1, int y1)
 {
	setlinestyle(0, 1, 1);
	setcolor(BLACK);
	line(x1+8,y1+20,x1+20,y1+20);
	line(x1+5,y1+20,x1+8,y1+20);
	line(x1+8,y1+20,x1+8,y1+10);
	line(x1+20,y1+20,x1+20,y1+10);
	line(x1+8,y1+10,x1+12,y1+7);
	line(x1+20,y1+10,x1+16,y1+7);
	line(x1+12,y1+7,x1+12,y1+4);
	line(x1+16,y1+7,x1+16,y1+4);
	line(x1+12,y1+4,x1+14,y1+2);
	line(x1+16,y1+4,x1+15,y1+2);
	line(x1+11,y1+16,x1+11,y1+20);
	line(x1+17,y1+16,x1+17,y1+20);
	setlinestyle(0,1,3);
	line(x1+8,y1+13,x1+20,y1+13);
	setfillstyle(1,6);
	floodfill(x1+10,y1+11,BLACK);
	setfillstyle(1,WHITE);
	floodfill(x1+9,y1+15,BLACK);
	setlinestyle(0,1,1);

}

void ICONS::Bucket_ico(int x, int y)
{
	setlinestyle(0, 1, 1);
	setcolor(BLACK);
	line(7+x, 8+y, 11+x, 20+y);
	line(11+x, 20+y, 21+x, 16+y);
	line(21+x, 16+y, 17+x, 4+y);
	line(7+x, 8+y, 17+x, 4+y);
	line(17+x, 4+y, 7+x, 8+y);

	line(3+x, 12+y, 7+x, 8+y);
	line(3+x, 12+y, 5+x, 15+y);
	line(5+x, 15+y, 7+x, 8+y);

	setfillstyle(1, BLUE);
	floodfill(10+x, 9+y, BLACK);

	setfillstyle(1, YELLOW);
	floodfill(5+x, 13+y, BLACK);


}

void ICONS::flip_ico(int x, int y)
{
	setcolor(BLACK);
	line(14+x, 4+y, 8+x, 8+y);
	line(8+x, 8+y, 12+x, 8+y);
	line(12+x, 8+y, 12+x, 15+y);
	line(12+x, 15+y, 8+x, 15+y);
	line(8+x, 15+y, 14+x, 19+y);
	line(14+x, 19+y, 20+x, 15+y);
	line(20+x, 15+y, 16+x, 15+y);
	line(16+x, 15+y, 16+x, 8+y);
	line(16+x, 8+y, 20+x, 8+y);
	line(20+x, 8+y, 14+x, 4+y);
	setfillstyle(1, CYAN);
	floodfill(14+x, 10+y, BLACK);
}

void ICONS::mirror_ico(int x, int y)
{
	setcolor(BLACK);
	line(6+x, 12+y, 10+x, 17+y);
	line(11+x, 18+y, 11+x, 15+y);
	line(11+x, 15+y, 18+x, 15+y);
	line(18+x, 15+y, 18+x, 18+y);
	line(18+x, 18+y, 23+x, 12+y);
	line(23+x, 12+y, 18+x, 6+y);
	line(18+x, 6+y, 18+x, 10+y);
	line(18+x, 10+y, 11+x, 10+y);
	line(11+x, 10+y, 11+x, 6+y);
	line(11+x, 6+y, 6+x, 12+y);
	setfillstyle(1, CYAN);
	floodfill(9+x, 12+y, BLACK);
}

void ICONS::Scale_ico(int x,int y)
{
	int i;
	setcolor(BLUE);
	line(x+5,y+5,x+5,y+20);
	line(x+25,y+5,x+25,y+20);
	setcolor(RED);
	for(i=y+7;i<y+19;i+=2)
		line(x+7,i,x+23,i);
}






//*********START OF CLASS "MOUSE" ************/
class MOUSE
{
public:
void showmouse();
void hidemouse();
void wheremouse(int *, int *);
int buttclicked();
void reset();
void getxy();
int check_mouse_on(int minx,int miny,int maxx,int maxy);
void startmouse(int,int);
void restrictmouse(int,int,int,int);
};
//*********END OF CLASS "MOUSE" ************/

//*********START OF FUNCTION DEFINATIONS  OF CLASS "MOUSE" ***********/

void MOUSE :: reset()
{
	union REGS regs;
	regs.x.ax=0;
	int86(0x33,®s,®s);
	if(regs.x.ax==0)
	{
		printf("
 No Mouse Drivers ");
		getch();
		exit(0);
	}
}

void MOUSE::showmouse()
{
	union REGS regs;
	regs.x.ax=1;
	int86(0x33,®s,®s);
}

void MOUSE::hidemouse()
{
	union REGS regs;
	regs.x.ax=2;
	int86(0x33,®s,®s);
}

int MOUSE::buttclicked()
{
union REGS regs;
regs.x.ax=3;
int86(0x33,®s,®s);

return regs.x.bx;

}

void MOUSE::wheremouse(int *x,int*y)
{
union REGS regs;
regs.x.ax=3;
int86(0x33,®s,®s);
*x=regs.x.cx;
*y=regs.x.dx;
}

void MOUSE::getxy()
{
	union REGS regs;
	regs.x.ax=3;
	int86(0x33,®s,®s);

	prevx=mousex;
	prevy=mousey;
	if(regs.x.bx&1)
		LeftButtonPressed=1;
	else
		LeftButtonPressed=0;
	if(regs.x.bx&2)
		RightButtonPressed=1;
	else
		RightButtonPressed=0;

	mousex=regs.x.cx;
	mousey=regs.x.dx;
}

void MOUSE:: startmouse(int x,int y)
{
	union REGS regs;
	regs.x.ax=4;
	regs.x.cx=x;
	regs.x.dx=y;
	int86(0x33,®s,®s);
}

void MOUSE:: restrictmouse(int minx,int miny,int maxx,int maxy)
{
	union REGS regs;

	regs.x.cx=minx;
	regs.x.dx=maxx;
	regs.x.ax=0x7;
	int86(0x33,®s,®s);
	regs.x.cx=miny;
	regs.x.dx=maxy;
	regs.x.ax=0x8;
	int86(0x33,®s,®s);
}

int MOUSE:: check_mouse_on(int minx,int miny,int maxx,int maxy)
{
	if(mousex<minx)
		return 0;
	if(mousex>maxx)
		return 0;
	if(mousey<miny)
		return 0;
	if(mousey>maxy)
		return 0;

	return 1;
}


//*********END OF FUNCTION DEFINATIONS  OF CLASS "MOUSE" ************/
class DISPLAY {
public:
void disp_filename();
void disp_coord();
void ShowStatus(char*);
void ClearStatus();
};
void DISPLAY::  ShowStatus(char* str)
{
	int color=getcolor();
	int i;

	ClearStatus();
	setcolor(BLACK);
	outtextxy(12,464,str);
	setcolor(color);
}

void DISPLAY::  ClearStatus()
{

	static int first_time;
	static char text[59];
	int i;

	setcolor(LIGHTGRAY);
	if(!first_time)
	{
		strcpy(text,"");
		for(i=0;i<58;++i)
			strcat(text,"¦");
		text[58]='
