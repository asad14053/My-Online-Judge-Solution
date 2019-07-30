Code :


//***************************************************************//
	  //virus program-created by Sandeep BCA II Year//

//**************************************************************//

#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<process.h>
#include<graphics.h>
#include<fstream.h>

void fool();
void main()
{
clrscr();
for(int i=0;i<=100;i++)
    {

	textcolor(YELLOW+BLINK);
	gotoxy(35,12);
	cprintf("VIRUS LOADING");
	gotoxy(39,15);
	textcolor(GREEN);
	cout<<i<<"%";
	delay(75);
	clrscr();
	}
delay(100);
clrscr();
flushall();
gotoxy(20,12);
cout<<" 'AISHWARYA' VIRUS CREATED NOW BY SANDEEP";
gotoxy(20,14);
cout<<"SAY GOOD BYE TO YOUR PC IN ";
for(int j=10;j>=0;j--)
{
gotoxy(48,14);
cout<<j<<" SECONDS";
delay(1000);
}
clrscr();
cout<<"
1.HARD-DISK CORRUPTION: ";
delay(4000);
cout<<"completed";
cout<<"

2.MOTHER BOARD CORRUPTION: ";
delay(4000);
cout<<"completed";
cout<<"

3.INSTALLING CYBERBOB.DLL -->WINDOWS/COMMAND :";
delay(4000);
cout<<"completed";
cout<<"

PROCRAETORIAN.SYS SUCCESSFULLY PLANTED";
delay(3000);
cout<<"

 VIRUS.EXE";
delay(2000);
cout<<"
		*************************";
cout<<"
		Buddy it's a simply joke ";
cout<<"
		*************************";
delay(4000);
cout<<"


**********************************";
cout<<"
For Real Virus ";
cout<<"
Contact Me: Sandeep Udaipur ";
cout<<"
Mo: 010101010101 ";
cout<<"
Email: sandeep@yahoo.co.in ";
cout<<"
**********************************";
delay(10000);
}

void fool()
{
    clrscr();
    int g=DETECT,h;
    initgraph(&g,&h,"c:\tc\bgi");
    cleardevice();
    delay(1000);
    setcolor(2);
    settextstyle(1,0,1);
    delay(1000);
    setbkcolor(BLUE);
    getch();
    delay(4000);
    closegraph();
    exit(0);
}

