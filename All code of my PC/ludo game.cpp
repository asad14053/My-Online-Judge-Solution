/* Developed by "akshay kumar srivastava"*/
/* phone 09835457174      oct 2005*/
/* aks_mailin@rediffmail.com*/
/* dont press Esc key at start of game*/
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<stdlib.h>
/* MOUSE FUNCTIONS FOR LUDO GAME */
int DetectMouse(void);
void InitMouse(void);
void ShowMouse(void);
void HideMouse(void);
void WhereMouse(int*,int*);
int ButtClicked(void);
int  ButtReleased(void);

int DetectMouse(void){
	union REGS in,out;
	in.x.ax=0;
	int86(0x33,&in,&out);
	if(out.x.ax==0)
		return(0);
	else
		return(1);
 }

void InitMouse(void)
{
	union REGS in,out;
	in.x.ax=33;
	int86(0x33,&in,&out);
	return;
}

void HideMouse(void)
{
	union REGS in,out;
	in.x.ax=2;
	int86(0x33,&in,&out);
	return;
}

void ShowMouse(void)
{
	union REGS in,out;
	in.x.ax=1;
	int86(0x33,&in,&out);
	return;
}

void WhereMouse(int *x,int *y)
{
	union REGS in,out;
	in.x.ax=3;
	int86(0x33,&in,&out);
	*x=(int)out.x.cx;
	*y=(int)out.x.dx;
	return;
}

int ButtClicked(void){
	union REGS imouse,omouse;
	int mc,mr;
	imouse.x.ax = 3;
	int86(0x33,&imouse,&omouse);
	mc=omouse.x.bx;
	return(mc);
}
int ButtReleased(void){
	int br;
	br=ButtClicked();
	do{}while(ButtClicked()!=0);
	return br;
}



/* GLOBAL VARIABLES */
int background=0;
int colorfortext=WHITE;//color used to display text
int rec=MAGENTA;//color for border of rectangles
int flagturn;//players turn=0 computer=1
int for6=0;//for 6 to come at regular intervals
int dice_value_color[4];

/* USER DEFINED FUNCTIONS */
void draw_all(void);
int player_chooses_house_color(void);
void draw_house(int color_of_house,int top_left_x_coordinate,int
top_left_y_coordinate);
void draw_button_with_button_name(int top_left_x_coordinate,int
top_left_y_coordinate,char* button_name);
void show_mouse_click_on_button(int mouse_click_x_coordinate,int
mouse_click_y_coordinate);
int check_if_mouse_click_is_on_any_button (int
mouse_click_x_coordinate,int mouse_click_y_coordinate);
void throw1(int x_coordinate_for_dice ,int y_coordinate_for_dice,int
counter_for_wait_at_last ,char dice_value);
void throw2(int x_coordinate_for_dice ,int y_coordinate_for_dice,char
dice_value);
int throwdice(void);
void messageout(char *message,int refresh_message=1);
void messageclear(void);
void initialise_house_with_ludos(int color_of_house);
void load_path_information_in_ludos(int ludo_house_color);
void winner(void);
void about(void);
void howtoplay(void);
void redrawing(int );
 int catchclickonludobutton(void) ;
 int forcomputer1(int);
 int forcomputer2(int);
 int forcomputer3(int);

struct ludo{
	int x[45];
	int y[45];
	int pos;
	int color;

void (*ptr_ludo1)(int,int*,int*,ludo *);
int (*ptr_check_if_ludo_move_requested_is_valid)(int ,ludo*);
void (*ptr_move_ludo_to_new_position)( int ,ludo*);

};
struct ludo lp[4],lc1[4],lc2[4],lc3[4];


/* ludo1 initialises the ludo class objects */
void ludo1(int col,int *ax,int *ay,ludo *node)
{
int i;

for(i=0;i<=44;i++)
   {
    node->x[i]=*(ax);
    node->y[i]=*(ay);
    ax++;ay++;
    }
node->color=col;
node->pos=0;
}//end of ludo1

int check_if_ludo_move_requested_is_valid(int dice,ludo *node)
{
/*return 1 move valid i.e proceed to movetopos,0 if not valid
2 if player cannot move any ludo*/
int i,j=0;

if( (node->pos<=44-dice && node->pos!=0)  || (node->pos==0 && dice==6)
)
return(1); // ludo can move

for(i=0;i<=3;i++)
   {
    if( (lp[i].pos+dice<=44 && lp[i].pos!=0) || (lp[i].pos==0 &&
dice==6) )
    j=1;//i.e there is atleast one ludo which
       //can move with current dice value
   }

if(j>0)
return(2);//choose the correct ludo that can move
else
return(3);//no ludo can move at current dice value
	  //and player has to skip chance
}//end of check_if_ludo_move_requested_is_valid


void move_ludo_to_new_position( int dice ,ludo *node)
{
HideMouse();

if(node->pos==0 && dice==6)//taking out of house on dice givig 6
{ messageclear();dice=1;}

dice=dice-1;
int opos;
opos=node->pos;
int i;
for(i=opos;i<=dice+opos;i++)
   {
    setcolor(7);
    circle(node->x[i],node->y[i],8);
    setfillstyle(1,7);
    floodfill(node->x[i],node->y[i],7);
    delay(50);
    {node->pos++; redrawing(node->color);}
    setcolor(node->color);
    circle(node->x[i+1],node->y[i+1],8);
    setfillstyle(1,node->color);
    floodfill(node->x[i+1],node->y[i+1],node->color);
    delay(50);
   }

/*changing pos to 0 if ludo has been cut before redrawing all ludos*/
for(i=0;i<=3;i++)
   {
    if(node->x[node->pos]==lp[i].x[lp[i].pos] &&
node->y[node->pos]==lp[i].y[lp[i].pos] )
      {
       if(node->color!=lp[i].color)
       lp[i].pos=0;
      }
    if(node->x[node->pos]==lc1[i].x[lc1[i].pos] &&
node->y[node->pos]==lc1[i].y[lc1[i].pos] )
      {
       if(node->color!=lc1[i].color)
       lc1[i].pos=0;
      }
    if(node->x[node->pos]==lc2[i].x[lc2[i].pos] &&
node->y[node->pos]==lc2[i].y[lc2[i].pos] )
      {
       if(node->color!=lc2[i].color)
       lc2[i].pos=0;
      }
    if(node->x[node->pos]==lc3[i].x[lc3[i].pos] &&
node->y[node->pos]==lc3[i].y[lc3[i].pos] )
      {
       if(node->color!=lc3[i].color)
       lc3[i].pos=0;
      }

    }// end of for

/* redrawing new positions of all ludos */
redrawing(lp[0].color);
redrawing(lc1[0].color);
redrawing(lc2[0].color);
redrawing(lc3[0].color);

/* to check who is the winner */
static int number_of_player_ludo_home=0;
static int number_of_computer1_ludo_home=0;
static int number_of_computer2_ludo_home=0;
static int number_of_computer3_ludo_home=0;
if(node->pos==44 && flagturn==0)
number_of_player_ludo_home++;
if(node->pos==44 && flagturn==1)
number_of_computer1_ludo_home++;
if(node->pos==44 && flagturn==2)
number_of_computer2_ludo_home++;
if(node->pos==44 && flagturn==3)
number_of_computer3_ludo_home++;
if(number_of_player_ludo_home==4)
winner();
if(number_of_computer1_ludo_home==4)
winner();
if(number_of_computer2_ludo_home==4)
winner();
if(number_of_computer3_ludo_home==4)
winner();

ShowMouse();
} //end of move_ludo_to_new_position

//end of ludo class

//struct ludo lp[4],lc1[4],lc2[4],lc3[4];
void changingcpptoc(void)
{
//struct ludo lp[4],lc1[4],lc2[4],lc3[4];
int zx;
for( zx=0;zx<4;zx++)
   {
    lp[zx].ptr_ludo1=ludo1;
    lc1[zx].ptr_ludo1=ludo1;
    lc2[zx].ptr_ludo1=ludo1;
    lc3[zx].ptr_ludo1=ludo1;


lp[zx].ptr_check_if_ludo_move_requested_is_valid=check_if_ludo_move_reques
ted_is_valid;

lc1[zx].ptr_check_if_ludo_move_requested_is_valid=check_if_ludo_move_reque
sted_is_valid;;

lc2[zx].ptr_check_if_ludo_move_requested_is_valid=check_if_ludo_move_reque
sted_is_valid;;

lc3[zx].ptr_check_if_ludo_move_requested_is_valid=check_if_ludo_move_reque
sted_is_valid;;

    lp[zx].ptr_move_ludo_to_new_position=move_ludo_to_new_position;
    lc1[zx].ptr_move_ludo_to_new_position=move_ludo_to_new_position;
    lc2[zx].ptr_move_ludo_to_new_position=move_ludo_to_new_position;
    lc3[zx].ptr_move_ludo_to_new_position=move_ludo_to_new_position;

//int (*ptr_check_if_ludo_move_requested_is_valid)(int );
//void (*ptr_move_ludo_to_new_position)( int );

   }//for zx loop ends
}
void main()
{
changingcpptoc();
int colors[4]={RED,BLUE,YELLOW,GREEN};
int i,a,b,dice=0,playercolor;;

draw_all();
InitMouse();
ShowMouse();

playercolor=player_chooses_house_color();
flagturn=0;
dice_value_color[flagturn]=playercolor;
load_path_information_in_ludos(playercolor);//gives life to correct
color
ludo as path depends on color

/* this code helps in making the chance of throwing dice go in a
clockwise
mode what color may the player choose to play*/
i=3;
while(i)
  {
   if(colors[i]==playercolor)
   break;
   i--;
   }
int loop=i;
while(1)
   {
    flagturn++;
    loop++;
    if(loop>=4)
    loop=0;
    load_path_information_in_ludos(colors[loop]);
    dice_value_color[flagturn]=colors[loop];
    if(flagturn==3)
    break;
   }



initialise_house_with_ludos(RED);
initialise_house_with_ludos(BLUE);
initialise_house_with_ludos(YELLOW);
initialise_house_with_ludos(GREEN);

flagturn=0;
char ch;
int check,tmp1=0,tmp2;
enum  choose {yes,nomore};
choose choose1=yes;

delay(500);
messageclear();

while(ch!=27)
  {
   if(kbhit())
   ch=getch();
   setcolor(RED);
   WhereMouse(&a,&b);
   if(ButtReleased())
      {
       check=check_if_mouse_click_is_on_any_button (a,b);
       if(check>=1 && check<=4)
       show_mouse_click_on_button(a,b);

       switch(check)
	  {
	    case 1:
	       {about();break;}
	    case 4:
	       {howtoplay(); break;}
	    case 3:
	       {exit(0);break;}
	    case 2:
	       {dice=throwdice(); break;}
	  } //end of switch
      } //end of if(ButtRelease)


/* players chance*/
if(flagturn==0)
   {
    messageout("PLAYER throwdice.best of luck. ",0);
    if(dice!=0)
      {
       if(dice==6)
	 messageout("click on ludo button to take out of house or move");
       else
	 messageout("click on the ludo button to move");

       while(choose1==yes)
	 {
	  choose1=nomore;
	  tmp1=catchclickonludobutton();

tmp2=lp[tmp1].ptr_check_if_ludo_move_requested_is_valid(dice,&lp[tmp1]);

	   switch(tmp2)
	     {
	      case 1:
		 {
		  lp[tmp1].ptr_move_ludo_to_new_position(dice,&lp[tmp1]);
		  messageout("proceeding");
		  delay(1000);
		  break;
		  }
	      case 2:
		 {
		  messageout("choose correct ludo to proceed");
		  delay(1000);
		  choose1=yes;
		  break;
		  }
	      case 3:
		 {
		  messageout("sorry,you will have to skip this time");
		  delay(1000);
		  break;
		  }
	  }//switch ends
       }//end of while(choose1=yes)
     flagturn=1;
     choose1=yes;
      }//end of if(dice!=0)
 dice=0;
 }// end of if(flagturn==0)



/*computer1 chance*/
if(flagturn==1)
  {
   messageout("now the computer1 will throw dice");
   dice=throwdice();
   if(dice!=0)
     {
      tmp1=forcomputer1(dice);
      if(tmp1!=5)//forcomputer(dice) returns 5 if no ludo can move
      lc1[tmp1].ptr_move_ludo_to_new_position(dice,&lc1[tmp1]);
      else
      messageout("computer1 has to skip this time.");
     }
flagturn=2;
messageclear();
dice=0;
  }

/*computer2 chance*/
if(flagturn==2)
  {
   messageout("now the computer2 will throw dice");
   dice=throwdice();
   if(dice!=0)
     {
      tmp1=forcomputer2(dice);
      if(tmp1!=5)//forcomputer(dice) returns 5 if no ludo can move
      lc2[tmp1].ptr_move_ludo_to_new_position(dice,&lc2[tmp1]);
      else
      messageout("computer2 has to skip this time.");
     }
flagturn=3;
messageclear();
dice=0;
  }

/*computer3 chance*/
if(flagturn==3)
  {
   messageout("now the computer3 will throw dice");
   dice=throwdice();
   if(dice!=0)
     {
      tmp1=forcomputer3(dice);
      if(tmp1!=5)//forcomputer(dice) returns 5 if no ludo can move
      lc3[tmp1].ptr_move_ludo_to_new_position(dice,&lc3[tmp1]);
      else
      messageout("computer3 has to skip this time.");
     }
flagturn=0;
messageclear();
dice=0;
  }

dice=0;
}//end of while
}//end of main


void draw_house(int col,int x,int y)
{
setcolor(rec);
rectangle(x,y,x+120,y+120);
setfillstyle(1,col);
floodfill(x+10,y+10,rec);
circle(x+30,y+30,10);
setfillstyle(1,WHITE);
floodfill(x+30,y+30,rec);
circle(x+30,y+70,10);
setfillstyle(1,WHITE);
floodfill(x+30,y+70,rec);
circle(x+90,y+30,10);
setfillstyle(1,WHITE);
floodfill(x+90,y+30,rec);
circle(x+90,y+70,10);
setfillstyle(1,WHITE);
floodfill(x+90,y+70,rec);
}

void draw_button_with_button_name(int x,int y,char *message)
{
setcolor(rec);
rectangle(x,y,x+110,y+30);
setcolor(colorfortext);
outtextxy(x+20,y+15,message);
}

void show_mouse_click_on_button(int x,int y)
{
HideMouse();
setfillstyle(1,7);
floodfill(x,y,rec);
delay(50);
setfillstyle(1,0);
floodfill(x,y,rec);
draw_button_with_button_name(0,55,"about");
draw_button_with_button_name(120,55,"exit");
draw_button_with_button_name(0,55+35,"throw dice");
draw_button_with_button_name(120,55+35,"how to play");
ShowMouse();
}


int check_if_mouse_click_is_on_any_button (int a,int b)
{
 if(a>0 && a<110 && b>55 && b<85)
 return 1;
 else if(a>0 && a<110 && b>90 && b<120)
 return 2;
 else if(a>120 && a< 230 && b>55 && b<85)
 return 3;
 else if(a>120  && a< 230 && b>90 && b<120)
 return 4;
 else if(a>239 && a<359 && b>0 && b<120 )
 return 5;
 else if(a>239 && a<359 && b>280 && b<400 )
 return 6;
 else if(a>519 && a<639 && b>0 && b<120 )
 return 7;
 else if(a>519 && a<659 && b>280 && b<400 )
 return 8;
 else
 return 0;
}

int throwdice()
{
HideMouse();
int rn,count=0;char num;
int x=0,y,flag=0;
randomize();
for(y=150;y<=320;y=y+10,x=x+10)
   {
    rn=random(6)+1;
    /* using for6 to get a 6 on dice every 5th time to make the game a
    little faster*/
    if(y==320)
    {for6++;}
    if(for6>=5)
       {
	rn=6;
	for6=0;
       }

  //  cout<<for6;
    //if(y==320)
   // for6++;

    num=rn+48;

    if(flag==0)
      {
       throw2(x,y,num);
       flag=1;
       }
   else
      {
       count++;
       throw1(x,y,count,num);
       flag=0;
       }
   }

settextstyle(0,0,0);
ShowMouse();
return rn;
}


void throw1(int x,int y,int count,char num)
{
settextstyle(0,0,3);
setcolor(WHITE);
rectangle(x,y,x+35,y+35);
//setcolor(RED);
setcolor(dice_value_color[flagturn]);
outtextxy(x+5,y+5,&num);
delay(140);
if(count==9)
  {delay(650); }
setcolor(0);
rectangle(x,y,x+35,y+35);
outtextxy(x+5,y+5,&num);
}

void throw2(int x,int y,char num)
{
x=x-17;y=y+10;
settextstyle(0,0,3);
setcolor(WHITE);
line(x,y,x+25,y+25);
line(x,y,x+25,y-25);
line(x+25,y+25,x+50,y);
line(x+25,y-25,x+50,y);
//setcolor(RED);
setcolor(dice_value_color[flagturn]);
outtextxy(x+15,y-10,&num);
delay(140);
setcolor(0);
line(x,y,x+25,y+25);
line(x,y,x+25,y-25);
line(x+25,y+25,x+50,y);
line(x+25,y-25,x+50,y);
outtextxy(x+15,y-10,&num);
}

void messageout(char *message,int refresh)
{
if(refresh)
messageclear();
setcolor(colorfortext);
outtextxy(20,450,message);
}

void messageclear()
{
HideMouse();
setfillstyle(1,0);
floodfill(20,450,rec);
ShowMouse();
}


void initialise_house_with_ludos(int color)
{
int x,y;

switch(color)
   {
    case RED:
       {x=239;y=0;break;}
    case BLUE:
       {x=519;y=0;break;}
    case YELLOW:
       {x=639-120;y=280;break;}
    case GREEN:
       {x=239;y=280;break;}
    }

draw_house(color,x,y);
setcolor(rec);
setfillstyle(1,color);
{
circle(x+30,y+30,8);
floodfill(x+30,y+30,rec);
}
{
circle(x+30,y+70,8);
floodfill(x+30,y+70,rec);
}
{
circle(x+90,y+30,8);
floodfill(x+90,y+30,rec);
}
{
circle(x+90,y+70,8);
floodfill(x+90,y+70,rec);
}

}

void load_path_information_in_ludos(int plcol)
{
int arx[45],ary[45];

switch(plcol)
      {
       case RED:
       {  int
arx[45]={269,284,314,344,379,379,379,379,379,439,499,499,499,
		       499,499,534,564,594,624,624,624,594,564,534,499,
		       499,499,499,499,439,384,384,384,384,384,344,314,284,
		       254,254,284,314,344,384,424};
	  int
ary[45]={30,140,140,140,140,105,75,45,15,15,15,45,75,105,140,140,
		       140,140,140,200,260,260,260,260,260,295,325,355,385,385,
		       385,355,325,295,260,260,260,260,260,200,200,200,200,200,
		       200};


     for(int tmp=0;tmp<=3;tmp++)
	{
	 switch(tmp)
	       {
		case 0: {arx[0]=269;ary[0]=30;break;}
		case 1: {arx[0]=329;ary[0]=70;break;}
		case 2: {arx[0]=329;ary[0]=30;break;}
		case 3: {arx[0]=269;ary[0]=70;break;}
	       }
	 switch(flagturn)
	       {
		case 0:
		    {lp[tmp].ptr_ludo1(RED,arx,ary,&lp[tmp]);break;}
		case 1:
		     {lc1[tmp].ptr_ludo1(RED,arx,ary,&lc1[tmp]);break;}
		case 2:
		    {lc2[tmp].ptr_ludo1(RED,arx,ary,&lc2[tmp]);break;}
		case 3:
		     {lc3[tmp].ptr_ludo1(RED,arx,ary,&lc3[tmp]);break;}
		}
	 }

break;}//case RED ends

       case BLUE:
       {  int
arx[45]={549,499,499,499,499,534,564,594,624,624,624,594,564,
		       534,499,499,499,499,499,439,384,384,384,384,384,344,
		       314,284,254,254,254,284,314,344,379,379,379,379,379,
		       439,439,439,439,439,439 };
	   int ary[45]={30,45,75,105,140,140,140,140,140,200,260,260,260,260,
			260,295,325,355,385,385,385,355,325,295,260,260,260,
			260,260,200,140,140,140,140,140,105,75,45,15,15,45
			,75,105,140,185};

	for(int tmp=0;tmp<=3;tmp++)
	   {
	    switch(tmp)
	       {
		case 0: {arx[0]=549;ary[0]=30;break;}
		case 1: {arx[0]=549;ary[0]=70;break;}
		case 2: {arx[0]=609;ary[0]=30;break;}
		case 3: {arx[0]=609;ary[0]=70;break;}
	       }
	     switch(flagturn)
	       {
		case 0:
		    {lp[tmp].ptr_ludo1(BLUE,arx,ary,&lp[tmp]);break;}
		case 1:
		     {lc1[tmp].ptr_ludo1(BLUE,arx,ary,&lc1[tmp]);break;}
		case 2:
		    {lc2[tmp].ptr_ludo1(BLUE,arx,ary,&lc2[tmp]);break;}
		case 3:
		     {lc3[tmp].ptr_ludo1(BLUE,arx,ary,&lc3[tmp]);break;}
		}
	   }
break;}

       case GREEN:
       {  int
arx[45]={269,384,384,384,384,344,314,284,254,254,254,284,314,
		       344,379,379,379,379,379,439,499,499,499,499,499,534,
		       564,594,624,624,624,594,564,534,499,499,499,499,499,
		       439,439,439,439,439,439 };
	   int ary[45]={30,355,325,295,260,260,260,
			260,260,200,140,140,140,140,140,105,75,45,15,15,15,45
			,75,105,140,140,140,140,140,200,260,260,260,260,
			260,295,325,355,385,385,355,325,295,260,215};

	for(int tmp=0;tmp<=3;tmp++)
	   {
	   switch(tmp)
	       {
		case 0: {arx[0]=269;ary[0]=310;break;}
		case 1: {arx[0]=329;ary[0]=350;break;}
		case 2: {arx[0]=329;ary[0]=310;break;}
		case 3: {arx[0]=269;ary[0]=350;break;}
	       }
	    switch(flagturn)
	       {
		case 0:
		    {lp[tmp].ptr_ludo1(GREEN,arx,ary,&lp[tmp]);break;}
		case 1:
		     {lc1[tmp].ptr_ludo1(GREEN,arx,ary,&lc1[tmp]);break;}
		case 2:
		    {lc2[tmp].ptr_ludo1(GREEN,arx,ary,&lc2[tmp]);break;}
		case 3:
		     {lc3[tmp].ptr_ludo1(GREEN,arx,ary,&lc3[tmp]);break;}
		}
	  }
break;}

       case YELLOW:
       {  int
arx[45]={549,594,564,534,499,499,499,499,499,439,384,384,384,
		       384,384,344,314,284,254,254,254,284,314,344,379,379,
		       379,379,379,439,499,499,499,499,499,534,564,594,624,
		       624,594,564,534,499,454};
     int
ary[45]={310,260,260,260,260,295,325,355,385,385,385,355,325,295,
		  260,260,260,260,260,200,140,140,140,140,140,105,75,45,15,
		  15,15,45,75,105,140,140,140,140,140,200,200,200,200,200,200};

	 for(int tmp=0;tmp<=3;tmp++)
	    {
	     switch(tmp)
	       {
		case 0: {arx[0]=549;ary[0]=310;break;}
		case 1: {arx[0]=549;ary[0]=350;break;}
		case 2: {arx[0]=609;ary[0]=310;break;}
		case 3: {arx[0]=609;ary[0]=350;break;}
	       }
	     switch(flagturn)
	       {
		case 0:
		    {lp[tmp].ptr_ludo1(YELLOW,arx,ary,&lp[tmp]);break;}
		case 1:
		     {lc1[tmp].ptr_ludo1(YELLOW,arx,ary,&lc1[tmp]);break;}
		case 2:
		    {lc2[tmp].ptr_ludo1(YELLOW,arx,ary,&lc2[tmp]);break;}
		case 3:
		     {lc3[tmp].ptr_ludo1(YELLOW,arx,ary,&lc3[tmp]);break;}
		}

	  }
break;}

 }//switch ends

}

int catchclickonludobutton()
{
int a,b,i;
while(1)
{
WhereMouse(&a,&b);
  if(ButtReleased())
    {  for(i=0;i<=3;i++)
	  {
	   if( abs(a-(lp[i].x[lp[i].pos])) < 8  &&
abs(b-(lp[i].y[lp[i].pos])) <
8 )
	   return i;
	   }
     }
}

}

void redrawing(int tmp)
{
int i;

for(i=0;i<=3;i++)
{
if(tmp==lp[0].color)
   {
    setcolor(lp[i].color);
    circle(lp[i].x[lp[i].pos],lp[i].y[lp[i].pos],8);
    setfillstyle(1,lp[i].color);
    floodfill(lp[i].x[lp[i].pos],lp[i].y[lp[i].pos],lp[i].color);
   }
if(tmp==lc1[0].color)
   {
    setcolor(lc1[i].color);
    circle(lc1[i].x[lc1[i].pos],lc1[i].y[lc1[i].pos],8);
    setfillstyle(1,lc1[i].color);
    floodfill(lc1[i].x[lc1[i].pos],lc1[i].y[lc1[i].pos],lc1[i].color);
   }
if(tmp==lc2[0].color)
   {
    setcolor(lc2[i].color);
    circle(lc2[i].x[lc2[i].pos],lc2[i].y[lc2[i].pos],8);
    setfillstyle(1,lc2[i].color);
    floodfill(lc2[i].x[lc2[i].pos],lc2[i].y[lc2[i].pos],lc2[i].color);
   }
if(tmp==lc3[0].color)
   {
    setcolor(lc3[i].color);
    circle(lc3[i].x[lc3[i].pos],lc3[i].y[lc3[i].pos],8);
    setfillstyle(1,lc3[i].color);
    floodfill(lc3[i].x[lc3[i].pos],lc3[i].y[lc3[i].pos],lc3[i].color);
   }
 }//for ends
}



/* deciding for computer1 which ludo to move */
int forcomputer1(int dice)
{
int i,j,tmp,poslpforlc[12]={0,0,0,0,0,0,0,0,0,0,0,0},cannotmove=5;

/* checking if atleast one ludo can move at current dice value*/
for(i=0;i<=3;i++)
  {
   if( (lc1[i].pos<=44-dice && lc1[i].pos!=0)  || (lc1[i].pos==0 &&
dice==6) )
   cannotmove=0;//cannotmove=5 then no ludo can move
   }
if(cannotmove==5)
return 5;


//position of players ludo in terms of computers1 ludo positions
for(i=0;i<=3;i++)
   {
    for(j=1;j<=40;j++)
       {
	if( lc1[0].x[j]==lp[i].x[lp[i].pos]  &&
lc1[0].y[j]==lp[i].y[lp[i].pos])
	   {
	    poslpforlc[i]=j;
	   }
	}
   }
//position of computer2 ludo in terms of computer1 ludo positions
for(i=4;i<=7;i++)
   {
    for(j=1;j<=40;j++)
       {
	if( lc1[0].x[j]==lc2[i-4].x[lc2[i-4].pos]  &&
lc1[0].y[j]==lc2[i-4].y[lc2[i-4].pos])
	   {
	    poslpforlc[i]=j;
	   }
	}
    }
//position of computer3 ludo in terms of computer1 ludo positions
for(i=8;i<=11;i++)
   {
    for(j=1;j<=40;j++)
       {
	if( lc1[0].x[j]==lc3[i-8].x[lc3[i-8].pos]  &&
lc1[0].y[j]==lc3[i-8].y[lc3[i-8].pos])
	   {
	    poslpforlc[i]=j;
	   }
	}

}//end of i

/*to cut opponents ludo button*/
for(i=0;i<=3;i++)
    {
     for(j=0;j<=11;j++)
	{
	  if( dice==(poslpforlc[j] - lc1[i].pos) && lc1[i].pos!=0)
	   return i;
	 }
     }


/* to move those ludos which are near the player ludos and have the
gretest value of pos i.e position . it means saving the threatened
ludo*/
int array[4]={0,0,0,0};
int a1=0,tmp1;
for(i=0;i<=3;i++)
    {
     for(j=0;j<=11;j++)
	{
	  if(     (-poslpforlc[j] + lc1[i].pos)<=6
	       && (-poslpforlc[j] + lc1[i].pos)>=1
	       && lc1[i].pos+dice<=44
	       && poslpforlc[j]!=0
	       && lc1[i].pos<=40 )
	   {array[i]=lc1[i].pos;}
	 }
     if(a1<=array[i])
	a1=array[i];/* a1 has the greatest pos value */
    }
if(a1!=0) //to see that at least one ludo is threatened */
  {
    for(i=0;i<=3;i++) //getting the ludo with greatest pos value
       {
	if(a1==array[i])
	return i;
       }
  }

//to take out ludo button from house
for(i=0;i<=3;i++)
   {
     if(dice==6)
	{
	 if(lc1[i].pos==0 )
	 return i;

	 }
    }

/*if  ludo buttons are outside and option for cutting opponent or
taking
out
own ludo button are not valid , using round robin
for selecting ludo to move*/
static int ludolast=0;
int firstround=0;
for(i=0;i<=3;i++)
  {
   if(firstround==0)
      {
       if(ludolast!=3)
	  {i=ludolast+1;}
       firstround++;
      }
   if(lc1[i].pos!=0 && lc1[i].pos+dice<=44 )
      {ludolast=i;i=4;}
   if(i==3)
   i=-1;
  }

return ludolast;

//if ludo button is
 }


 /* deciding for computer2 which ludo to move */

int forcomputer2(int dice)
{
int i,j,tmp,poslpforlc[12]={0,0,0,0,0,0,0,0,0,0,0,0},cannotmove=5;

/* checking if atleast one ludo can move at current dice value*/
for(i=0;i<=3;i++)
  {
   if( (lc2[i].pos<=44-dice && lc2[i].pos!=0)  || (lc2[i].pos==0 &&
dice==6) )
   cannotmove=0;//cannotmove=5 then no ludo can move
   }
if(cannotmove==5)
return 5;


//position of players ludo in terms of computers2 ludo positions
for(i=0;i<=3;i++)
   {
    for(j=1;j<=40;j++)
       {
	if( lc2[0].x[j]==lp[i].x[lp[i].pos]  &&
lc2[0].y[j]==lp[i].y[lp[i].pos])
	   {
	    poslpforlc[i]=j;
	   }
	}
   }
//position of computer1 ludo in terms of computer2 ludo positions
for(i=4;i<=7;i++)
   {
    for(j=1;j<=40;j++)
       {
	if( lc2[0].x[j]==lc1[i-4].x[lc1[i-4].pos]  &&
lc2[0].y[j]==lc1[i-4].y[lc1[i-4].pos])
	   {
	    poslpforlc[i]=j;
	   }
	}
   }
//position of computer3 ludo in terms of computer2 ludo positions
for(i=8;i<=11;i++)
   {
    for(j=1;j<=40;j++)
       {
	if( lc2[0].x[j]==lc3[i-8].x[lc3[i-8].pos]  &&
lc2[0].y[j]==lc3[i-8].y[lc3[i-8].pos])
	   {
	    poslpforlc[i]=j;
	   }
	}

}//end of i
for(i=0;i<=11;i++)
{

}
/*to cut opponents ludo button*/
for(i=0;i<=3;i++)
    {
     for(j=0;j<=11;j++)
	{
	  if( dice==(poslpforlc[j] - lc2[i].pos) && lc2[i].pos!=0)
	   {return i;}
	 }
     }


/* to move those ludos which are near the player ludos and have the
gretest value of pos i.e position . it means saving the threatened
ludo*/
int array[4]={0,0,0,0};
int a1=0,tmp1;
for(i=0;i<=3;i++)
    {
     for(j=0;j<=11;j++)
	{
	  if(     (-poslpforlc[j] + lc2[i].pos)<=6
	       && (-poslpforlc[j] + lc2[i].pos)>=1
	       && lc2[i].pos+dice<=44
	       && poslpforlc[j]!=0
	       && lc2[i].pos<=40 )
	   {array[i]=lc2[i].pos;}
	 }
     if(a1<=array[i])
	a1=array[i];/* a1 has the greatest pos value */
    }
if(a1!=0) //to see that at least one ludo is threatened */
  {
    for(i=0;i<=3;i++) //getting the ludo with greatest pos value
       {
	if(a1==array[i])
	{return i;}
       }
  }

//to take out ludo button from house
for(i=0;i<=3;i++)
   {
     if(dice==6)
	{
	 if(lc2[i].pos==0 )
	 {return i;}

	 }
    }

/*if  ludo buttons are outside and option for cutting opponent or
taking
out
own ludo button are not valid , using round robin
for selecting ludo to move*/
static int ludolast=0;
int firstround=0;
for(i=0;i<=3;i++)
  {
   if(firstround==0)
      {
       if(ludolast!=3)
	  {i=ludolast+1;}
       firstround++;
      }
   if(lc2[i].pos!=0 && lc2[i].pos+dice<=44 )
      {ludolast=i;i=4;}
   if(i==3)
   i=-1;
  }

return ludolast;

//if ludo button is
 }

/* deciding for computer3 which ludo to move */

int forcomputer3(int dice)
{
int i,j,tmp,poslpforlc[12]={0,0,0,0,0,0,0,0,0,0,0,0},cannotmove=5;

/* checking if atleast one ludo can move at current dice value*/
for(i=0;i<=3;i++)
  {
   if( (lc3[i].pos<=44-dice && lc3[i].pos!=0)  || (lc3[i].pos==0 &&
dice==6) )
   cannotmove=0;//cannotmove=5 then no ludo can move
   }
if(cannotmove==5)
return(5);


//position of players ludo in terms of computers1 ludo positions
for(i=0;i<=3;i++)
   {
    for(j=1;j<=40;j++)
       {
	if( lc3[0].x[j]==lp[i].x[lp[i].pos]  &&
lc3[0].y[j]==lp[i].y[lp[i].pos])
	   {
	    poslpforlc[i]=j;
	   }
	}
   }
//position of computer2 ludo in terms of computer3 ludo positions
for(i=4;i<=7;i++)
   {
    for(j=1;j<=40;j++)
       {
	if( lc3[0].x[j]==lc2[i-4].x[lc2[i-4].pos]  &&
lc3[0].y[j]==lc2[i-4].y[lc2[i-4].pos])
	   {
	    poslpforlc[i]=j;
	   }
	}
    }
//position of computer1 ludo in terms of computer3 ludo positions
for(i=8;i<=11;i++)
   {
    for(j=1;j<=40;j++)
       {
	if( lc3[0].x[j]==lc1[i-8].x[lc1[i-8].pos]  &&
lc3[0].y[j]==lc1[i-8].y[lc1[i-8].pos])
	   {
	    poslpforlc[i]=j;
	   }
	}

}//end of i

/*to cut opponents ludo button*/
for(i=0;i<=3;i++)
    {
     for(j=0;j<=11;j++)
	{
	  if( dice==(poslpforlc[j] - lc3[i].pos)  && lc3[i].pos!=0 )
	   return i;
	 }
     }


/* to move those ludos which are near the player ludos and have the
gretest value of pos i.e position . it means saving the threatened
ludo*/
int array[4]={0,0,0,0};
int a1=0,tmp1;
for(i=0;i<=3;i++)
    {
     for(j=0;j<=11;j++)
	{
	  if(     (-poslpforlc[j] + lc3[i].pos)<=6
	       && (-poslpforlc[j] + lc3[i].pos)>=1
	       && lc3[i].pos+dice<=44
	       && lc3[i].pos<=40
	       && poslpforlc[j]!=0 )

	   {array[i]=lc3[i].pos;}
	 }
     if(a1<=array[i])
	a1=array[i];/* a1 has the greatest pos value */
    }
if(a1!=0) //to see that at least one ludo is threatened */
  {
    for(i=0;i<=3;i++) //getting the ludo with greatest pos value
       {
	if(a1==array[i])
	{return i;}
       }
  }

//to take out ludo button from house
for(i=0;i<=3;i++)
   {
     if(dice==6)
	{
	 if(lc3[i].pos==0 )
	 return i;

	 }
    }

/*if  ludo buttons are outside and option for cutting opponent or
taking
out
own ludo button are not valid , using round robin
for selecting ludo to move*/
static int ludolast=0;
int firstround=0;
for(i=0;i<=3;i++)
  {
   if(firstround==0)
      {
       if(ludolast!=3)
	  {i=ludolast+1;}
       firstround++;
      }
   if(lc3[i].pos!=0 && lc3[i].pos+dice<=44 )
      {ludolast=i;i=4;}
   if(i==3)
   i=-1;
  }

return ludolast;

//if ludo button is
 }


void draw_all()
{
//registerbgidriver(EGAVGA_driver);
//registerbgifont(sansserif_font);
int gdriver = DETECT, gmode;
 /* request auto detection */

 /* initialize graphics mode */
initgraph(&gdriver, &gmode, "");

/*  writing text   */
setcolor(background);
settextstyle(0,0,0);
setcolor (colorfortext);
outtextxy(5,10,"(aks_mailin@rediffmail.com)");
outtextxy(5,20,"akshay presents");
outtextxy(5,30,"COMPUTER LUDO");
outtextxy(5,40,"GAME");

/* drawing rectangles  */
setcolor(rec);
rectangle(0,410,639,479);
rectangle(0,0,230,50);
setcolor(rec);
rectangle(239,0,639,400);
setfillstyle(1,7);
floodfill(310,10,rec);
draw_house(RED,239,0);
draw_house(GREEN,239,280);
draw_house(BLUE,639-120,0);
draw_house(YELLOW,639-120,280);
draw_button_with_button_name(0,55,"about");
draw_button_with_button_name(120,55,"exit");
draw_button_with_button_name(0,55+35,"throw dice");
draw_button_with_button_name(120,55+35,"how to play");


/*drawing sectors*/
setcolor(0);
line(359,30,519,30 );
line(359,60,519,60 );
line(359,90,519,90 );
line(359,120,519,120 );
line(359,280,519,280);
line(359,310,519,310);
line(359,340,519,340 );
line(359,370,519,370 );
line(239,160,639,160 );
line(239,240,639,240 );
line(269,120,269,280);
line(269+30,120,269+30,280 );
line(269+60,120,269+60,280 );
line(269+90,120,269+90,280 );
line(269+130,0,269+130,400 );
line(269+210,0,269+210,400 );
line(269+250,120,269+250,280 );
line(269+280,120,269+280,280 );
line(269+310,120,269+310,280 );
line(269+340,120,269+340,280 );
setfillstyle(1,WHITE);
floodfill(439,200,background);
setcolor(RED);
outtextxy(420,190,"HOME");

return ;
}

int player_chooses_house_color(void)
{
char ch;
int check;
int a,b,playercolor=0;
messageout("PLAYER,click  YOUR lucky COLOR on the board ");

while(ch!=27)
     {
      if(playercolor!=0)
      break;//come out of while
      if(kbhit())
      ch=getch();
      setcolor(RED);

      WhereMouse(&a,&b);

      if(ButtReleased())
	{
	 check=check_if_mouse_click_is_on_any_button (a,b);

	  switch(check)
		{
		  case 1:
		  {show_mouse_click_on_button(a,b);about();break;}
	      case 4:
		  {show_mouse_click_on_button(a,b);howtoplay(); break;}

		  case 3:
		     {show_mouse_click_on_button(a,b);exit(0);break;}
		  case 5:
		     { messageout( "you have choosen red");
		       playercolor=RED;
		       break;}
		  case 6:
		     { messageout( "you have choosen green");
		       playercolor=GREEN;
		       break;}
		  case 7:
		     { messageout( "you have choosen blue");
		       playercolor=BLUE;
		       break;}
		  case 8:
		     { messageout( "you have choosen yellow");
		       playercolor=YELLOW;
		       break;}
	   } //end of switch
       }//end of if(ButtRelease)
       }//end of while
delay(500);
return playercolor;
}

void about(void)
{
HideMouse();
 setcolor(rec);

      rectangle(0,135,230,390);
      setcolor(colorfortext);
outtextxy(5,150,"WELCOME to ComputerLudo");

outtextxy(5,160,"This software is developed");
outtextxy(5,170,"by");
outtextxy(5,180,"");

outtextxy(5,190,"");

outtextxy(5,210,"Akshay ");
outtextxy(5,230,"U can send suggestions at");
outtextxy(5,240,"my Email:");
outtextxy(5,250,"aks_mailin@rediffmail.com");
outtextxy(5,260,"thanks");
outtextxy(5,310,"PRESS ANY KEY TO PROCEED ...");
getch();
setfillstyle(1,0);
floodfill(5,300,rec);
setcolor(0);
rectangle(0,135,230,390);
setcolor(rec);
ShowMouse();
return ;
}
void winner()
{
HideMouse();
setcolor(rec);
rectangle(0,135,230,390);
setcolor(colorfortext);
outtextxy(5,150,"welcome to ComputerLudo");
if(flagturn==0)
   {
     outtextxy(5,160,"CONGRATULATIONS");
     outtextxy(5,170,"YOU WON THIS ROUND ");
     outtextxy(5,180,"OF");
     outtextxy(5,190,"ComputerLudo");
     outtextxy(5,210,"akshay thanks ");
     outtextxy(5,220,"you for trying this");
     outtextxy(5,230,"game.");
     outtextxy(5,240,"thanks again.");
     outtextxy(5,310,"PRESS ANY KEY TO EXIT..");
    }
else
   {
   switch(flagturn)
	{
	case 1:
	       {outtextxy(5,160,"COMPUTER1 WON THIS");break;}
	case 2:
	       {outtextxy(5,160,"COMPUTER2 WON THIS");break;}
	case 3:
	       {outtextxy(5,160,"COMPUTER3 WON THIS");break;}
	}
     outtextxy(5,170,"ROUND OF");
     outtextxy(5,180,"ComputerLudo");
     outtextxy(5,200,"BETTER LUCK NEXT TIME");
     outtextxy(5,220,"akshay thanks ");
     outtextxy(5,230,"you for trying this");
     outtextxy(5,240,"game.");
     outtextxy(5,250,"thanks again.");
     outtextxy(5,310,"PRESS ANY KEY TO EXIT..");
   }
getch();
exit(0);
}

void howtoplay()
{
HideMouse();
 setcolor(rec);

      rectangle(0,135,230,390);

      setcolor(colorfortext);

outtextxy(5,150,"This is a game between");
outtextxy(5,160,"COMPUTER and the PLAYER.");
outtextxy(5,170,"Choose HOUSE  by ");
outtextxy(5,180,"clicking over the HOUSE of");

outtextxy(5,190,"your fovourite color.");
outtextxy(5,200,"Get 6 on Dice to take a ludo");
outtextxy(5,210,"out of HOUSE.To make a ludo");
outtextxy(5,220,"MOVE click on it.");
outtextxy(5,230,"CUT(send to house) computers");
outtextxy(5,240,"ludos by placing your ludos ");
outtextxy(5,250,"over its ludos.");
outtextxy(5,260,"One who gets all the ludos");
outtextxy(5,270,"HOME wins thE Game.");
outtextxy(5,290,"FOLLOW THE MESSAGE BOX");
outtextxy(5,300,"GIVEN AT BOTTOM");
outtextxy(5,320,"thanks");
outtextxy(2,330,"Akshay.");
outtextxy(5,350,"PRESS ANY KEY TO PROCEED ...");
getch();
setfillstyle(1,0);
floodfill(5,300,rec);
setcolor(0);
rectangle(0,135,230,390);
setcolor(rec);
ShowMouse();
return ;
}
