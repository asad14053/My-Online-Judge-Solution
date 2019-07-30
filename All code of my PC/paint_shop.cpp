/*************	    PAINTSHOP		***************

			  AN EXCLUSIVE DRAWING SOFTWARE BY JRS STUDIO

			  PAINTSHOP IS DEVELOPED BY:

					MD. REZAUR RAHMAN JITU (04.01.04.056)
					SHARIF SHAH NEWAZ BHUIYAN (04.01.04.054)
					MEHDI HASAN SHAON (04.01.04.055)

			  STUDENTS OF:

				 AHSHANULLAH UNIVERSITY OF SCIENCE AND TECNOLOGY
				 FIRST YEAR, SECOND SEMESTER

COPYRIGHT (c) JRS Studio... ALL RIGHTS RESERVED

************************************************************/




/*<><><><><><><><><> START OF CODES   ><><><><><><><><><><>*/





//////////////////  INCLUDE FILES \\\\\\\\\\\\

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <string.h>
#include <math.h>




#define TRUE 1
#define FALSE 0



///////// MOUSE USING SERVICES DEFINATIONS \\\\\\\\



#define SHOW 1
#define HIDE 2
#define POSITION 3
#define RESTRICT 4
#define CHANGE_CURSOR 5




/////////////// GLOBAL VARIABLES \\\\\\\\\\\\



// file menu items
char *file_menu[]={"New","Open","Save","Save
As","Import","Export","Exit"};
// edit menu items
char *edit_menu[]={"Cut","Copy","Paste","Select All","Delete"};
// view menu items
char *view_menu[]={"Tool Box","Color Box","Status Bar","Text Tool
Bar"};
// option menu items
char *option_menu[]={"Invert Colors","Theme"};
// help menu items
char *help_menu[]={"Help Topics","About Paintshop"};



int status_bar=TRUE; // status bar is visible by default
int tool_box=TRUE;	 // tool bar is visible by default
int color_box=TRUE;	 // color box is visible by default
int text_box=FALSE;	 // text box is not visible by default



// theme color variable
int LIGHT_COLOR=LIGHTGRAY;
int DARK_COLOR=DARKGRAY;



// cursors
int draw_cursor[] = {
		// pointer bitmap
		0xFFFF,0xF81F,0xFC3F,0xFC3F,0xFC3F,0xB81D,0x8001,0x8001,
		0x8001,0x8001,0xB81D,0xFC3F,0xFC3F,0xFC3F,0xF81F,0xFFFF,
		// screen mask
		0x0000,0x0000,0x0180,0x0180,0x0180,0x0180,0X03C0,0x3E7C,
		0x3E7C,0X03C0,0x0180,0x0180,0x0180,0x0180,0x0000,0x0000
		};



int pencil[]={
		//pointer bitmap
		0xffcf,0xffb7,0xff77,0xff77,0xfe87,0xfeef,0xfdef,0xfddf,
		0xfbdf,0xfbbf,0xf77f,0xf07f,0xf0ff,0xf1ff,0xf3ff,0xf7ff,
		//screen mask
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
		 };



int eraseptr[]=
		{
		//pointer bitmap
		0x01ff,0x03Ff,0x03ff,0x03ff,0x03ff,0x03ff,0x03ff,0x01ff,
		0xffff,0xffff,0xFFFf,0xFfff,0xffff,0xffff,0xffff,0xffff,
		//screen mask
		0x0000,0x7e00,0x7e00,0x7e00,0x7e00,0x7e00,0x7e00,0x0000,
		0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000
		 };



int select_cursor[]={
		// pointer bitmap
		0xE7FF,0xE3FF,0xE1FF,0XE0FF,0XE07F,0XE03F,0XE01F,0XE00F,
		0XE007,0XE03F,0XE23F,0XE21F,0XF61F,0XFF0F,0XFF0F,0XFF9F,
		// screen mask
		0X0000,0X0800,0X0C00,0X0E00,0X0F00,0X0F80,0X0FC0,0X0FE0,
		0X0FF0,0X0F80,0X0D80,0X08C0,0X00C0,0X0060,0X0060,0X0000
		};





// miscellaneous class
class miscellaneous
	{
	int i;
	void title(int x,int y);	// program title
   public:
	void triangle(int a1,int a2,int b1,int b2,int c1,int c2,int color);//
draws edges of title boxes
	void logo(int x,int y);	// JRS logo
	void box(void);		// program title box
	void about(void);        // about JRS Paintshop
	int help(void);          // the help...
	void help_viewer(void);  // help viewer
	// help topics viewer
	int topic_list(char *topic1,char *topic2,char *topic3,char
*topic4,char
*topic5,int back);
	// views topic name...
	void view_topic_name(char *name,int move)
		{
		setfillstyle(1,0);	bar(142,145+move,156,156+move);
		setfillstyle(1,7);	bar(143,146+move,155,155+move);
		setfillstyle(1,8);	bar(144,147+move,155,155+move);
		outtextxy(165,148+move,name);
		}
	};



/////////////// PAINT CLASS MEMBERS \\\\\\\\\\\


class paint
	{
	int color;	// color variable
	// paste controller variables...
	int paste_x,paste_y,paste_endx,paste_endy;
	// mouse REGS and SREGS...
	union REGS in,out;
	struct SREGS seg;
	// gets export/import address for bitmap...
	char bmp_address[50];
	FILE *fp,*fq;		// file pointers
	void menu(int x);	// menu
	int set_color(int x,int y,int border=FALSE);// sets drawing color
	void tools(int x=FALSE);// TOOLS
	void tool_icon(int x=FALSE);	// tool icons
	int tool_choice(int x,int y);	// chooses tools
	//type of tools
	int tool_type(int xpox=0,int ypos=0,int tool=0,int *linestyle=0,int
*thickness=0,int *flood=0);
	int status(int xPos,int yPos,int prex,int prey);	// shows status
	// it's a polygon
	void polygon(int a1,int a2,int b1,int b2,int c1,int c2,int d1,int
d2,int
color);
	void openpage(char *address);	// opens file
	void savepage(char *address);	// saves file
	//highlights menus
	int menu_highlights(char *menu_name,int x,int y,int a,int b);
	//displays menu
	int display_menu(int position,int end,int menu,int max_text);
	// overloaded
	void display_menu(int menu_number,int total_menu,int width,int
position,int menu);
	// special circle drawing function
	void jrs_circle(int x1,int y1,int radius,int fill=TRUE);
	void invert(void);		// inverts all colors
	char* dialog_box(char *name);	// open and save dialog box
	int message_box(char *message,int type=0);// show program messages
	// text tool box...
	int text_bar(int x,int y,int *font_type,int *font_size);
	// cut method
	void cut(int a,int b,int c,int d);
	// paste method
	void paste();
	// copy method
	void copy(int a,int b,int c,int d);
	// exports image
	void export(void);
	// imports image
	void import(void);
	// changes software theme...
	void theme(void);
   public:
	// this constructor launch and draws the outline of the program
	paint();
	// this constructor is a dami
	paint(int){}
	// drawing mechanism of JRS Paintshop
	void drawing(void);
	// mouse function (MOUSE FUNCTION IS AUTO INLINE!)
	int mouse(int service=0,int *button=0,int *x=0,int *y=0,int
cursor=0,int
x1=1,int y1=1,int x2=640,int y2=480)
		{
		if(service==4)
			{
			in.x.ax = 7 ;/*service number*/
			in.x.cx = x1 ;
			in.x.dx = x2 ;
			int86 ( 0x33, &in, &out ) ;
			in.x.ax = 8 ;/*service number*/
			in.x.cx = y1 ;
			in.x.dx = y2 ;
			int86 ( 0x33, &in, &out ) ;
			}
		else if(service==5)
			{
			in.x.ax=9;/*service number*/
			in.x.bx=0;
			in.x.cx=0;
			if(cursor==1)
				{
				in.x.bx=7;/*actual cursor position from left*/
				in.x.cx=7;/*actual cursor position from top*/
				in.x.dx=FP_OFF(draw_cursor);
				}
			else if(cursor==2)
				{
				in.x.bx=3;/*actual cursor position from left*/
				in.x.cx=15;/*actual cursor position from top*/
				in.x.dx=FP_OFF(pencil);
				}
			else if(cursor==3)
				{
				in.x.bx=7;/*actual cursor position from left*/
				in.x.cx=7;/*actual cursor position from top*/
				in.x.dx=FP_OFF(eraseptr);
				}
			else in.x.dx=FP_OFF(select_cursor);
			segread(&seg);
			seg.es=seg.ds;
			int86x(0x33,&in,&out,&seg);
			}
		else
			{
			in.x.ax=service;/*service number*/
			int86( 0x33,&in,&out);
			*button=out.x.bx;
			*x=out.x.cx;
			*y=out.x.dx;
			}
		return ( out.x.ax );
		}
	};


///////////////////// METHODS \\\\\\\\\\\\\





// main function...
void main(void)
{
	int gd=DETECT,gm,errorcode;
	initgraph(&gd,&gm,"c:\tc\bgi");
	errorcode=graphresult();
	if(errorcode!=grOk)
	{
		printf("Graphics driver %s not found",grapherrormsg(errorcode));
		exit(1);
	}
	miscellaneous start;
	start.box();
	// here, main constructor runs...
	// this constructor draws the outline
	// and interface of program...
	paint jrs;
	if(jrs.mouse()==FALSE)
	{
		closegraph();
		restorecrtmode();
		printf("Mouse Not loaded");
		getch();
		exit(1);
	}
	jrs.drawing();  // drawing function initializes...
}



// theme changer...
void paint::theme(void)
	{
	void *buffer;
	unsigned size;
	size=imagesize(199,94,401,306);
	buffer=malloc(size);
	getimage(199,94,401,306,buffer);
	setcolor(0);		rectangle(199,94,401,306);
	setfillstyle(1,8);	bar(200,95,400,305);
	setfillstyle(1,7); 	bar(203,95,400,302);
					bar(202,95,203,97);
					bar(201,95,203,96);
					bar(200,95,203,95);
					bar(398,302,400,303);
					bar(399,302,400,304);
					bar(400,302,400,305);
	setfillstyle(1,1);	bar(203,98,397,302);
					rectangle(203,98,397,302);
	setcolor(14);
	settextstyle(0,0,0);
	outtextxy(210,110,"    SOFTWARE THEME");
	setcolor(15);
	for(int i=0;i<=100;i+=20)
		{
		setfillstyle(1,0);	bar(242,145+i,256,156+i);
		setfillstyle(1,7);	bar(243,146+i,255,155+i);
		setfillstyle(1,8);	bar(244,147+i,255,155+i);
		}
	i=0;		outtextxy(262,147+i,"GRAY (Default)");
	i=20;	outtextxy(262,147+i,"BLUE ");
	i=40;	outtextxy(262,147+i,"RED");
	i=60;	outtextxy(262,147+i,"GREEN");
	i=80;	outtextxy(262,147+i,"CYAN");
	i=100;	outtextxy(262,147+i,"MAGENTA");
	setcolor(15);
		setfillstyle(1,0);	bar(262,275,331,296);
		setfillstyle(1,7);	bar(263,276,330,295);
		setfillstyle(1,8);	bar(264,277,330,295);
		outtextxy(288,283,"OK");
	int button,x,y;
	mouse(SHOW);
	while(!button || x<262 || x>331 || y<275 ||y>296)
		{
		if(button)
			{
			if(x>242 && x<256 && y>145 && y<156)
				LIGHT_COLOR=7,DARK_COLOR=8;
			else if(x>242 && x<256 && y>165 && y<176)
				LIGHT_COLOR=9,DARK_COLOR=1;
			else if(x>242 && x<256 && y>185 && y<196)
				LIGHT_COLOR=12,DARK_COLOR=4;
			else if(x>242 && x<256 && y>205 && y<216)
				LIGHT_COLOR=10,DARK_COLOR=2;
			else if(x>242 && x<256 && y>225 && y<236)
				LIGHT_COLOR=11,DARK_COLOR=3;
			else if(x>242 && x<256 && y>245 && y<256)
				LIGHT_COLOR=13,DARK_COLOR=5;
			}
		mouse(POSITION,&button,&x,&y);
		}
	mouse(HIDE);
	putimage(199,94,buffer,COPY_PUT);
	free(buffer);
	mouse(SHOW);
	}




// exports image
void paint::export(void)
{
// windows bitmap file(also in jpeg, tif...etc)
typedef struct bmp
	{
		unsigned char name[3];
		unsigned char dummy[15];
		unsigned int x;
		unsigned char dummy1[2];
		unsigned int y;
		unsigned char dummy2[1];
	}bmpheader;


	bmpheader BHF;
	int xlen,ylen,i,j;
	unsigned char ch,c;
	if(status_bar)	{
				setcolor(0);
				settextstyle(0,0,0);
				outtextxy(86,407,"Exporting...");
				}
	fp = fopen(bmp_address,"wb");
	fq = fopen("sample.bmp","rb"); //just copy a sample image

	if(fq==NULL)
		{
		setfillstyle(1,LIGHT_COLOR);
		bar(80,402,200,420);
		outtextxy(86,407,"failed!");
		sleep(1);
		bar(80,402,200,420);
		return;
		}
	fread(&BHF,sizeof BHF,1,fq);

	xlen = 560;
	ylen = 370;

	BHF.x = xlen;
	BHF.y = ylen;

if(fp!=NULL)
	{
	fwrite(&BHF,sizeof BHF,1,fp);
	for(i=0;i<=1052;i++)
	{
		fread(&ch,1,1,fq);
		fwrite(&ch,1,1,fp);
	}
	fclose(fq);
	mouse(HIDE);
	for(j=399;j>=30;j--)
	{
		for(i=80;i<=639;i++)
		{
			c = getpixel(i,j);
			fwrite(&c,1,1,fp);
		}
	}
	}
	mouse(SHOW);
	fclose(fp);
if(status_bar)
	{
	setfillstyle(1,LIGHT_COLOR);
	bar(80,402,200,420);
	}
}




// imports image
void paint::import(void)
{
typedef struct bmp
	{
		unsigned char name[3];
		unsigned char dummy[15];
		unsigned int x;
		unsigned char dummy1[2];
		unsigned int y;
		unsigned char dummy2[1];
	}bmpheader;


	bmpheader BHF;
	int xlen,ylen,i,j;
	unsigned char ch,c;

	if(status_bar)	{
				setcolor(0);
				settextstyle(0,0,0);
				outtextxy(86,407,"Importing...");
				}
	fp=fopen(bmp_address,"rb");
	fread(&BHF,sizeof BHF,1,fp);

	xlen = 560;
	ylen = 370;

	BHF.x = xlen;
	BHF.y = ylen;

	for(i=0;i<=1052;i++)
	{
		fread(&ch,1,1,fp);
	}
if(fp!=NULL)
	{
		for(int i=399;i>=30;i--)
		{
			for(int j=80;j<=639;j++)
			{
				fread(&c,1,1,fp);
				putpixel(j,i,c);
			}
		}

	fclose(fp);
	}
else	{
	if(status_bar)
		{
		setfillstyle(1,LIGHT_COLOR);
		bar(80,402,200,420);
		outtextxy(86,407,"failed");
		sleep(1);
		}
	}
if(status_bar)
	{
	setfillstyle(1,LIGHT_COLOR);
	bar(80,402,200,420);
	}
}




// cut function
void paint::cut(int a,int b,int c,int d)
{
	setcolor(0);
	settextstyle(0,0,0);
	int getcol;
	fp=fopen("cut.jrs","wb");
	if(status_bar)	outtextxy(86,407,"cutting...");
	for(int i=b;i<=d;i++)
		{
			for(int j=a;j<=c;j++)
			{
				getcol=getpixel(j,i);
				fwrite((char *)&getcol,sizeof(getcol),1,fp);
			}
		}
	fclose(fp);
	setfillstyle(1,15);
	bar(a,b,c,d);
	if(status_bar)
		{
		setfillstyle(1,LIGHT_COLOR);
		bar(80,402,300,420);
		}
	paste_x=a;
	paste_y=b;
	paste_endx=c;
	paste_endy=d;
}




// paste function
void paint::paste()
{
	setcolor(0);
	settextstyle(0,0,0);
	if(status_bar)	outtextxy(86,407,"pasting...");
	setviewport(80,30,635,400,1);
	paste_x-=80,paste_endx-=80;
	paste_y-=30,paste_endy-=30;
	int getcol;
	fp=fopen("cut.jrs","rb");
	if(fp!=NULL)
		{
		for(int i=paste_y;i<=paste_endy;i++)
			{
			for(int j=paste_x;j<=paste_endx;j++)
				{
				fread((char *)&getcol,sizeof(getcol),1,fp);
				putpixel(j,i,getcol);
				}
			}
		}
	fclose(fp);
	setviewport(0,0,639,479,1);
	if(status_bar)
		{
		setfillstyle(1,LIGHT_COLOR);
		bar(80,402,300,420);
		}
}




// copy function
void paint::copy(int a,int b,int c,int d)
{
	setcolor(0);
	settextstyle(0,0,0);
	int getcol;
	fp=fopen("cut.jrs","wb");
	if(status_bar)	outtextxy(86,407,"copying...");
	for(int i=b;i<=d;i++)
		{
			for(int j=a;j<=c;j++)
			{
				getcol=getpixel(j,i);
				fwrite((char *)&getcol,sizeof(getcol),1,fp);
			}
		}
	fclose(fp);
	if(status_bar)
		{
		setfillstyle(1,LIGHT_COLOR);
		bar(80,402,300,420);
		}
}




// SAVES DRAWING
void paint::savepage(char *address)
{
int getcol;
char *jrs="jrs ";
setcolor(0);
setfillstyle(1,LIGHT_COLOR);
settextstyle(0,0,0);
if(*address==0)return;
fp=fopen(address,"wb");
if(fp!=NULL)
	{
	if(status_bar)	{
				outtextxy(86,407,"saving...");
				setfillstyle(1,4);
				bar(184,406,185+81,416);
				setfillstyle(1,0);
				bar(185,407,185+80,415);
				setfillstyle(1,1);
				}
	fprintf(fp," %s",jrs);
		for(int i=30;i<=400;i++)
		{
			for(int j=80;j<=639;j++)
			{
				getcol=getpixel(j,i);
				fwrite((char *)&getcol,sizeof(getcol),1,fp);
			}
		if(status_bar)
			bar(185,407,185+(i/5),415);
		}
	}
else	message_box("         Saving failed!",1);
	fclose(fp);
if(status_bar)
	{
	delay(500);
	setfillstyle(1,LIGHT_COLOR);
	bar(80,402,300,420);
	}
}




// opens documents
void paint::openpage(char *address)
{
int getcol;
char *jrs;
setcolor(0);
settextstyle(0,0,0);
if(*address==0)return;
fp=fopen(address,"rb");
if(fp!=NULL)
	{
	fscanf(fp," %s",jrs);
	if(strcmp(jrs,"jrs")!=0)
		{
		message_box("     Unknown file format!",1);
		fclose(fp);
		return;
		}
	if(status_bar)	{
				outtextxy(86,407,"opening...");
				setfillstyle(1,4);
				bar(184,406,185+81,416);
				setfillstyle(1,0);
				bar(185,407,185+80,415);
				setfillstyle(1,1);
				}
	fseek(fp,5, SEEK_SET);
		for(int i=30;i<=400;i++)
		{
			for(int j=80;j<=639;j++)
			{
				fread((char *)&getcol,sizeof(getcol),1,fp);
				putpixel(j,i,getcol);
			}
		if(status_bar)
			bar(185,407,185+(i/5),415);
		}
	}
else    message_box("         Opening failed!",1);
fclose(fp);
if(status_bar)
	{
	delay(500);
	setfillstyle(1,LIGHT_COLOR);
	bar(80,402,300,420);
	}
}




// highlights menu name
int paint::menu_highlights(char *menu_name,int x,int y,int a,int b)
{
mouse(HIDE);
setfillstyle(1,DARK_COLOR);
	bar(a,0,b,28);
setcolor(15);
settextstyle(2,0,6);
outtextxy(x,y,menu_name);outtextxy(x+1,y,menu_name);
return FALSE;
}




// sets drawing color
int paint::set_color(int x,int y,int border)
	{
	static int new_color,prev_color;
	if(!color_box)return prev_color;
	if(x>82 && x<96 && y>432 && y<448)
		new_color=0;
	else    if(x>105 && x<119 && y>432 && y<448)
		new_color=1;
	else    if(x>128 && x<142 && y>432 && y<448)
		new_color=2;
	else    if(x>151 && x<165 && y>432 && y<448)
		new_color=3;
	else    if(x>174 && x<188 && y>432 && y<448)
		new_color=4;
	else    if(x>197 && x<211 && y>432 && y<448)
		new_color=5;
	else    if(x>220 && x<234 && y>432 && y<448)
		new_color=6;
	else    if(x>243 && x<257 && y>432 && y<448)
		new_color=7;
	else	if(x>82 && x<96 && y>455 && y<470)
		new_color=8;
	else    if(x>105 && x<119 && y>455 && y<470)
		new_color=9;
	else    if(x>128 && x<142 && y>455 && y<470)
		new_color=10;
	else    if(x>151 && x<165 && y>455 && y<470)
		new_color=11;
	else    if(x>174 && x<188 && y>455 && y<470)
		new_color=12;
	else    if(x>197 && x<211 && y>455 && y<470)
		new_color=13;
	else    if(x>220 && x<234 && y>455 && y<470)
		new_color=14;
	else    if(x>243 && x<257 && y>455 && y<470)
		new_color=15;
	if(border)
		{
		setfillstyle(1,new_color);
		bar(32,438,49,455);
		setfillstyle(1,prev_color);
		bar(34,440,47,453);
		}
	else
		{
		setfillstyle(1,new_color);
		bar(34,440,47,453);
		prev_color=new_color;
		}
	return new_color;
	}




// menu
void paint::menu(int x=FALSE)
	{
	setfillstyle(1,LIGHT_COLOR);
	if(x==1)
		bar(0,0,50,28);
	else if(x==2)
		bar(50,0,100,28);
	else if(x==3)
		bar(100,0,154,28);
	else if(x==4)
		bar(154,0,224,28);
	else if(x==1)
		bar(224,0,272,28);
	else bar(0,0,600,28);
	setcolor(0);
	settextstyle(2,0,6);
	outtextxy(10,5,"File");outtextxy(11,5,"File");
	outtextxy(60,5,"Edit");outtextxy(61,5,"Edit");
	outtextxy(110,5,"View");outtextxy(111,5,"View");
	outtextxy(160,5,"Option");outtextxy(161,5,"Option");
	outtextxy(230,5,"Help");outtextxy(231,5,"Help");
	}




// tool buttons
void paint::tools(int x)
	{
	int i,j;
	for(i=40,j=1;i<200;i+=30,j++)
		{
		if(j==x || x==FALSE)
			{
			setfillstyle(1,DARK_COLOR);
			bar(10,i,35,i+25);
			setfillstyle(1,15);
			bar(10,i,34,i+24);
			setfillstyle(1,LIGHT_COLOR);
			bar(11,i+1,34,i+24);
			}
		if(j+6==x || x==FALSE)
			{
			setfillstyle(1,DARK_COLOR);
			bar(45,i,70,i+25);
			setfillstyle(1,15);
			bar(45,i,69,i+24);
			setfillstyle(1,LIGHT_COLOR);
			bar(46,i+1,69,i+24);
			}
		}
	}




// tool icon
void paint::tool_icon(int x)
	{
	miscellaneous jrs;
	setcolor(0);
	if(x==1 || x==FALSE)//Select
		{
		setlinestyle(1,1,2);
		rectangle(15,45,29,60);
		}
	if(x==2 || x==FALSE)// line
		{
		setlinestyle(0,1,3);
		line(30,75,15,90);
		}
	if(x==8 || x==FALSE)// rectangle
		{
		setlinestyle(0,1,2);
		rectangle(50,75,65,90);
		}
	if(x==3 || x==FALSE)// circle
		{
		setlinestyle(0,1,2);
		circle(23,112,8);
		}
	if(x==9 || x==FALSE)//Pencil
		{
		polygon(62,105,51,116,52,120,65,108,0);
		polygon(62,105,52,115,55,118,65,108,6);
		}
	if(x==7 || x==FALSE)// Eraser
		{
		polygon(62,45,50,57,53,60,65,48,15);
		polygon(62,45,54,53,57,56,65,48,14);
		}
	if(x==11 || x==FALSE)// polygon
		{
		setlinestyle(0,1,2);
		line(50,165,55,170);
		line(55,170,65,165);
		line(65,165,62,172);
		line(62,172,65,177);
		line(65,177,57,175);
		line(57,175,51,181);
		line(51,181,53,173);
		line(53,173,50,165);
		}
	if(x==12 || x==FALSE)// airbrush
		{
		setfillstyle(5,2);
		bar(53,200,61,210);
		setfillstyle(1,8);
		bar(53,210,61,211);
		setlinestyle(0,0,0);
		jrs.triangle(54,199,60,199,57,195,10);
		}
	if(x==4 || x==FALSE)// brush
		{
		setfillstyle(1,6);
		bar(21,135,24,150);
		setfillstyle(1,14);
		bar(19,146,26,150);
		setlinestyle(0,0,0);
		setcolor(0);
		line(19,146,26,146);
		line(19,147,26,147);
		line(20,145,25,145);
		line(21,144,24,144);
		for(int i=0;i<=6;i+=2)
		line(19+i,147,19+i,150);
		}
	if(x==5 || x==FALSE)// text editor
		{
		settextstyle(1,0,2);
		setcolor(0);
		outtextxy(16,159,"A");
		outtextxy(17,159,"A");
		}
	if(x==6 || x==FALSE)// sensor
		{
		setfillstyle(1,1);
		bar(21,200,24,210);
		bar(22,211,23,212);
		setfillstyle(1,14);
		bar(19,198,26,199);
		bar(20,196,25,197);
		bar(21,194,24,195);
		}
	if(x==10 || x==FALSE)// floodfill
		{
		setlinestyle(0,1,2);
		ellipse(57,138,0,180,6,5);
		setfillstyle(1,0);
		bar(51,151,64,152);
		bar(52,138,63,152);
		setfillstyle(1,1);bar(53,139,62,150);
		setfillstyle(1,2);bar(53,143,62,146);
		setcolor(14);
		settextstyle(2,0,3);
		for(int i=0;i<11;i++)
			{
			if(i==3)outtextxy(55,132+i," .");
			if(i==6)outtextxy(53,132+i,".");
			else	   outtextxy(54,132+i,".,");
			}
		}
	}




// sets tool to drawing...
int paint::tool_choice(int x,int y)
	{
	int j,i;
	static int new_tool,prev_tool;
	if(!tool_box)return prev_tool;
	if(x>10 && x<35 && y>40 && y<65)
		new_tool=1;
	else	if(x>10 && x<35 && y>70 && y<95)
		new_tool=2;
	else	if(x>10 && x<35 && y>100 && y<125)
		new_tool=3;
	else	if(x>10 && x<35 && y>130 && y<155)
		new_tool=4;
	else	if(x>10 && x<35 && y>160 && y<185)
		new_tool=5;
	else	if(x>10 && x<35 && y>190 && y<215)
		new_tool=6;
	else	if(x>45 && x<70 && y>40 && y<65)
		new_tool=7;
	else	if(x>45 && x<70 && y>70 && y<95)
		new_tool=8;
	else	if(x>45 && x<70 && y>100 && y<125)
		new_tool=9;
	else	if(x>45 && x<70 && y>130 && y<155)
		new_tool=10;
	else	if(x>45 && x<70 && y>160 && y<185)
		new_tool=11;
	else	if(x>45 && x<70 && y>190 && y<215)
		new_tool=12;
	if(new_tool!=prev_tool)
		{
		mouse(HIDE);
		tools(prev_tool);
		tool_icon(prev_tool);
		for(i=40,j=1;i<200;i+=30,j++)
			{
			if(j==new_tool)
				{
				setfillstyle(1,DARK_COLOR);
				bar(10,i,35,i+25);
				setfillstyle(1,15);
				bar(11,i+1,35,i+25);
				setfillstyle(1,LIGHT_COLOR);
				bar(11,i+1,34,i+24);
				}
			if(j+6==new_tool)
				{
				setfillstyle(1,DARK_COLOR);
				bar(45,i,69,i+24);
				setfillstyle(1,15);
				bar(46,i+1,70,i+25);
				setfillstyle(1,LIGHT_COLOR);
				bar(46,i+1,69,i+24);
				}
			}
		tool_icon(new_tool);
		}
	mouse(SHOW);
	prev_tool=new_tool;
	return new_tool;
	}




// constructor...
paint::paint()
	{
	miscellaneous object;
	setfillstyle(1,LIGHT_COLOR);	bar(80,402,640,420);//Status bar
	setfillstyle(1,LIGHT_COLOR);	bar(0,30,78,420);	//Pick Up Bar
	color=0;// default color is black
	tools(); // tool buttons
	tool_icon();// button icons
	// tool type box
	setfillstyle(1,DARK_COLOR);	bar(9,229,71,321);
	setfillstyle(1,15);	bar(10,230,71,321);
	setfillstyle(1,LIGHT_COLOR);	bar(10,230,70,320);
	tool_type();
	setfillstyle(1,LIGHT_COLOR);	bar(0,0,640,28);	//Menu bar Background
	setfillstyle(1,LIGHT_COLOR);	bar(637,30,640,400); // right side bar
	menu();// menus
	setfillstyle(1,LIGHT_COLOR);	bar(0,422,640,477);	//COLOR Bars
	setfillstyle(1,DARK_COLOR);
	for(int j=0,i=80;i<260;i+=23,j++)//COLORs
		{
		setfillstyle(1,DARK_COLOR);	bar(i,430,i+17,448);//bar 1
					bar(i,453,i+17,470);//bar 2
		setfillstyle(1,15);	bar(i+2,432,i+17,448);
					bar(i+2,455,i+17,470);
		//COLORs
		setfillstyle(1,j);	bar(i+3,433,i+16,447);
		setfillstyle(1,j+8);	bar(i+3,456,i+16,469);
		}

	//COLOR Information Bars
	setfillstyle(1,DARK_COLOR);	bar(20,430,70,470);
	setfillstyle(1,15);	bar(22,432,70,470);

	setfillstyle(1,DARK_COLOR);	bar(42,448,59,465);
	setfillstyle(1,15);	//Background Color
					bar(44,450,57,463);

	setfillstyle(1,DARK_COLOR);  bar(32,438,49,455);
	setfillstyle(1,0);	//Foreground Color
					bar(34,440,47,453);

	//Exit Cross Button
	setfillstyle(1,15);	bar(612,5,633,24);
	setfillstyle(1,4); 	bar(613,6,632,23);
	setcolor(15);
	settextstyle(6,0,1);
	outtextxy(619,-1,"X");outtextxy(620,-1,"X");
	object.logo(-114,80);
	}



// shows status...
int paint::status(int xPos,int yPos,int prex,int prey)
	{
	if(xPos<80 || xPos>635 || yPos<30 || yPos>400)
		return 3;//out of the drawing space
	char x[5],y[5];
	if(status_bar)
	{
	setfillstyle(1,LIGHT_COLOR);
	settextstyle(0,0,0);
	setcolor(0);
	itoa(xPos-80,x,10);
	itoa(yPos-30,y,10);
	//output of the mouse status
		outtextxy(570,408,x);
		outtextxy(595,408,",");
		outtextxy(605,408,y);
	 if(prex!=xPos)
		  bar(570,402,592,420);
	 if(prey!=yPos)
		  bar(600,402,640,420);
	}
	return 2;
	}





// helps to draw button icons....
void paint::polygon(int a1,int a2,int b1,int b2,int c1,int c2,int
d1=0,int
d2=0,int color=0)
	{
	int poly[8];
	poly[0] = a1;        /* 1st vertex */
	poly[1] = a2;
	poly[2] = b1;        /* 2nd vertex */
	poly[3] = b2;
	poly[4] = c1;        /* 3rd vertex */
	poly[5] = c2;
	if(!d1 && !d2)
		{
		poly[6] = poly[0];/* 4th vertext */
		poly[7] = poly[1];
		}
	else	{
		poly[6] = d1;
		poly[7] = d2;
		}
	setfillstyle(1,color);
	fillpoly(4, poly);
	}




// create topic list...
int miscellaneous::topic_list(char *topic1=0,char *topic2=0,char
*topic3=0,char *topic4=0,char *topic5=0,int back=0)
	{
	paint object(1);
	setcolor(15);
	settextstyle(0,0,0);
	if(*topic1)
		view_topic_name(topic1,0);
	if(*topic2)
		view_topic_name(topic2,20);
	if(*topic3)
		view_topic_name(topic3,40);
	if(*topic4)
		view_topic_name(topic4,60);
	if(*topic5)
		view_topic_name(topic5,80);
	if(back)
		{
		setcolor(15);
		setfillstyle(1,0);	bar(102,315,201,336);
		setfillstyle(1,7);	bar(103,316,200,335);
		setfillstyle(1,8);	bar(104,317,200,335);
		outtextxy(110,322,"Main Topics");
		}
	object.mouse(SHOW);
	int button,x,y;
	while(!button || x<472 || x>556 || y<315 || y>336)
		{
		object.mouse(POSITION,&button,&x,&y);
		if(button)
			{
			object.mouse(HIDE);
			if(*topic1 && x>142 && x<156 && y>145 && y<156)
				{
				while(button)object.mouse(POSITION,&button);
				return 1;
				}
			else if(*topic2 && x>142 && x<156 && y>165 && y<176)
				{
				while(button)object.mouse(POSITION,&button);
				return 2;
				}
			else if(*topic3 && x>142 && x<156 && y>185 && y<196)
				{
				while(button)object.mouse(POSITION,&button);
				return 3;
				}
			else if(*topic4 && x>142 && x<156 && y>205 && y<216)
				{
				while(button)object.mouse(POSITION,&button);
				return 4;
				}
			else if(*topic5 && x>142 && x<156 && y>225 && y<236)
				{
				while(button)object.mouse(POSITION,&button);
				return 5;
				}
			else if(back && x>102 && x<201 && y>315 && y<336)
				{
				while(button)object.mouse(POSITION,&button);
				return 6;
				}
			object.mouse(SHOW);
			}
		}
	object.mouse(HIDE);
	return 0;
	}




// help viewer...
void miscellaneous::help_viewer(void)
	{
	FILE *fp;
	int getcol;
	fp=fopen("jrs.tmp","wb");
	for(int i=80;i<=350;i++)
	{
		for(int j=90;j<=570;j++)
		{
			getcol=getpixel(j,i);
			fwrite((char *)&getcol,sizeof(getcol),1,fp);
		}
	}
	fclose(fp);
	setcolor(15);
	setfillstyle(1,0);	bar(90,80,570,350);
	setfillstyle(1,7); 	bar(91,81,569,349);
	setfillstyle(1,8);	bar(93,83,569,349);
	setfillstyle(1,1);	bar(93,83,567,347);
	setfillstyle(1,9);  bar(93,83,567,98);
	settextstyle(0,0,1);
	outtextxy(97,87,"HELP TOPICS");
	logo(375,-155);
	setfillstyle(1,0);	bar(472,315,556,336);
	setfillstyle(1,7);	bar(473,316,555,335);
	setfillstyle(1,8);	bar(474,317,555,335);
	settextstyle(0,0,0);
	setcolor(15);
	outtextxy(480,322,"Quit Help");
	while(help());
	fp=fopen("jrs.tmp","rb");
	for(i=80;i<=350;i++)
	{
		for(int j=90;j<=570;j++)
		{
			fread((char *)&getcol,sizeof(getcol),1,fp);
			putpixel(j,i,getcol);
		}
	}
	fclose(fp);
	remove("jrs.tmp");
	}




//the help
int miscellaneous::help(void)
	{
	setfillstyle(1,1);	bar(103,103,467,307);
	setcolor(14);
	outtextxy(107,117,"MAIN TOPICS");
	setfillstyle(1,1);	bar(102,315,201,336);
	switch(topic_list("Common Tasks","Using Menus","Using
Tools","Drawing","
