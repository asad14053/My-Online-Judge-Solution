//Address book in c++ with graphics(Buttons),mouse support
// Programmed by Jayasankar B G
//feel free to use the code

// password is "swordfish"
// please enter all 9 letters to activate menu

#include <stdio.h>
#include <fstream.h>
#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <string.h>
#include <stdlib.h>
#include <iostream.h>
#include <process.h>
#include <iomanip.h>


#define DOS 0x21
#define MAX 100

enum { MAIN = 150,STARTUP=200, SIDE = 10};  //starting coordinates of
button

char *start[] = {"Login ",
                                  "Quit"
                                 };

char *menu[] = { "File",
                                   "Edit",
                                   "Search",
                                   "Quit"
                                 };

char *side[] = {"Connect",
                                  "Log off"
                       };


union REGS i,o,regs;

class Directory
{
char path_DB[20];
fstream out;
ifstream in;
int p;
int DB_OPENED;

public:
 void StartupScreen();
 int Accept_Password();
 void Draw_Buttons(int,int,char *b[]);
 void Enable_Mouse();
 void getMousePos(int *,int *,int *);
 int Find_Position(int,int,int);
 void Exit_Screen();
 void Main_Screen(int);
 void EntryPage();
 void EditPage();
 void SearchPage();
 void Intro_Graphics(int);
 void Change_Selected_Menu(int,int);
 void Open_Database();
 void Add_Entry();
 void DisplayAll();
 void Delete_Entry();
 void Search_Entry();
 void Replace_Entry();
 void Cleanup_onexit();

 Directory()
 {
 DB_OPENED=0;
 p=200;
 }

};
void Directory::Cleanup_onexit()
{
// Disable mouse
i.x.ax = 0;
int86(0x33,&i,&o);

// close graphics mode
clearviewport();
closegraph();

}

void Directory::Enable_Mouse()
{
i.x.ax = 1;
int86(0x33,&i,&o);

}
void Directory::StartupScreen()
{
clearviewport();
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
setcolor(RED);
outtextxy(220,10,"ADDRESS BOOK");
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,1);
outtextxy(200,60,"Enter 9 letter Password to log in");
outtextxy(185,70,"Enter password to make QUIT button active");

rectangle(150,150,480,300);

rectangle(250,250,355,280);

gotoxy(22,17);
cout<<"Password: ";

}

void Directory::Draw_Buttons(int x,int y,char *start[])
{

setfillstyle(SOLID_FILL,LIGHTGRAY);
bar(x,y,x+70,y+20);

//  3 D Effect for buttons

setcolor(WHITE);
line(x,y,x,y+20);
line(x,y,x+70,y);
setcolor(BLACK);
line(x+70,y+20,x,y+20);
line(x+70,y+20,x,y+20);
//   **************


setcolor(DARKGRAY);
rectangle(x-1,y-1,x+71,y+21);

outtextxy(x+5,y+10,start[0]);

}

int Directory::Find_Position(int x,int y,int code)
{

int l,LENGTH,i,next;

switch(code)
{
case 200:    //for start up

l = strlen(start[0]);

 for (i=0;i<2;i++)
 {
                     if (l<strlen(start[i]))
                                  l = strlen(start[i]);
 }


LENGTH = l*8+35;   //convert to row - column
next=code+160;
int Y=180;

  if (x>p && x<p+LENGTH)
  {
                if(y>Y && y<Y+20)
                  return 1;
   }
  else
   if (x>next && x<next+LENGTH)
   {
                if(y>Y && y<Y+20)
                  return 2;
    }
   else
                  return 0;

break;

case 150:    //for main page


l = strlen(menu[0]);

 for (i=0;i<4;i++)
 {
                     if (l<strlen(menu[i]))
                                  l = strlen(menu[i]);
 }


LENGTH = l*8+30;   //convert to row - column
next=code;
Y=60;

for(i=0;i<4;i++)
{
 if(x>next && x<next+LENGTH)
 {
                 if(y>Y && y<Y+20)
                     return (i+1);
 }
 else
   next+=90;

}
return 0;


case 10:     //for side buttons

l = strlen(side[0]);

 for (i=0;i<2;i++)
 {
                     if (l<strlen(side[i]))
                                  l = strlen(side[i]);
 }


LENGTH = l*8+35;   //convert to row - column
Y=50;
int v=10;

  if (x>v && x<v+LENGTH)
  {
                if(y>Y && y<Y+20)
                   return 11;
                else
                {
                Y+=40;
                if(y>Y && y<Y+20)
                   return 22;
                }

   }
  else
    return 0;

}  //switch
return -1;

}

int Directory::Accept_Password()
{

char pass[10];
int pos=35;
int button=0,x1,y1;
int position;
gotoxy(35,17);

for (int j=0;j<9;j++)
{
    regs.h.ah=8;
    int86(DOS,®s,®s);

    pass[j]=regs.h.al;

                regs.h.ah=0x02;
                regs.h.dl='*';
                int86(DOS,®s,®s);
                delay(300);

                gotoxy(pos,17);
                cout<<".";
                pos++;

   }

sound(300);
delay(100);
nosound();

     while(1)
 {

    getMousePos(&button,&x1,&y1);
    delay(40);

                if (button==1)
                {
                position = Find_Position(x1,y1,STARTUP);
                pass[j]='
