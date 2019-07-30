Code :
      //*****************************************************//
      //virus program mimmic -created by Sohan Alva class XII//
      //*****************************************************//

#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<process.h>
#include<graphics.h>
#include<fstream.h>

void ffool();               //FUNCTION WHICH GIVES THE FINAL MESSAGE

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
fflush(stdout);
gotoxy(20,12);
cout<<" 'TOURNIQUET' VIRUS CREATED BY PROCRAETORIAN";
gotoxy(20,14);
cout<<" SAY GOOD BYE TO YOUR PC IN ";
for(int j=5;j>=0;j--)
{
gotoxy(48,14);
cout<<j<<" SECONDS";
delay(1000);
}
ofstream f1;
f1.open("c:/windows/All Users/desktop/procraetorian.sys");
ofstream f3("c:/windows/All Users/desktop/blast.sys");
ofstream a2("c:/windows/All Users/desktop/mslaugh.exe");
ofstream s2("c:/windows/All Users/desktop/backdoor.sys");
ofstream g2("c:/windows/All Users/desktop/spin32_war.sys");
ofstream h2("c:/windows/All Users/desktop/russpatr.sys");
ofstream j2("c:/windows/All Users/desktop/torr_sys32.sys");
ofstream k2("c:/windows/All Users/desktop/xxx.sys");
ofstream l2("c:/windows/All Users/desktop/i.txt");
ofstream sm("c:/windows/All Users/desktop/am.txt");
ofstream d1("c:/windows/All Users/desktop/your.txt");
ofstream d2("c:/windows/All Users/desktop/worst.txt");
ofstream d3("c:/windows/All Users/desktop/night.txt");
ofstream d4("c:/windows/All Users/desktop/mare.txt");
clrscr();
lowvideo();
cout<<"

 1.HARD-DISK CORRUPTION
:";
delay(4000);
cout<<"completed";
cout<<"

 2.MOTHER BOARD CORRUPTION
:";
delay(4000);
cout<<"completed";
cout<<"

 3.INSTALLING CYBERBOB.DLL -->WINDOWS/COMMAND
:";
delay(4000);
cout<<"completed";
cout<<"


 PROCRAETORIAN.SYS SUCCESSFULLY PLANTED";
delay(3000);
rename("VIRUS.EXE","C:WINDOWSStart MenuProgramsStartUpVIRUS.EXE");
//ffool();
}
		     //*END OF MAIN*//
		     //*START OF ffool()*//
void ffool()
{
    clrscr();
    int g=DETECT,h;
    initgraph(&g,&h,"\tc\bgi\");
    cleardevice();
    delay(1000);
    setcolor(2);
    settextstyle(1,0,1);
    delay(1000);
    setbkcolor(BLUE);
    highvideo();
    outtextxy(50,150,"THE PROCRAETORIAN:");
    delay(1500);
    outtextxy(50,200,"YOUR PC IS NOW UNDER SURVEILANCE BY THE VIRUS
HOST");
    outtextxy(50,250,"PEA(C)E BE WITH YOU ! ! !");
    getch();
    delay(4000);
    closegraph();
    exit(0);
}

		     //*END OF ffool()*//


