//Mouse.cpp
//Mouse Management functions
//Renjith Joseph
//EMail:renjithmathewjoseph@hotmail.com
//All rights reserved.

#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<process.h>
void main(){
     clrscr();_setcursortype(_NOCURSOR);
     REGS regs;
     //Initializing and showing mouse
     regs.x.ax=0;int86(0x33,®s,®s);
     regs.x.ax=1;int86(0x33,®s,®s);
     //Reading mouse click
     for( ; ; ){
	 //Updating mouse motions
	 regs.x.ax=3;int86(0x33,®s,®s);
	 //Reading mouse click
	 if(regs.x.bx==1){
	    gotoxy(2,2);textbackground(1);textcolor(15);
	    cprintf("Left Button Clicked!");
	    delay(100);
	    }
	 if(regs.x.bx==2){
	    gotoxy(2,2);textcolor(15);textbackground(1);
	    cprintf("Right Button Clicked!");
	    delay(100);
	    }
	 gotoxy(1,2);textbackground(1);cprintf("                         ");
	 //Printing mouse coordinates
	 gotoxy(1,1);textcolor(11);textbackground(6);
	 cprintf(" Mouse Position:(%3d,%3d)",regs.x.cx,regs.x.dx);
	 while(kbhit()){exit(0);}
	}
}
