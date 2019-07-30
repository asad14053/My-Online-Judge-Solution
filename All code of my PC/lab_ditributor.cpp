#include <iostream.h>
#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>


class SHOP
{

private :
	int z,P1,P2,P3,P4,P5,P6,P7,P8,totalP;
	int S1,S2,S3,S4,S5,S6,S7,S8,S9,totalS;
	int D1,D2,D3,D4,D5,D6,D7,D8,totalD;
	int s1,s2,s3,s4,s5,s6,s7,s8,totals;
	int p1,p2,p3,p4,p5,p6,p7,p8,totalp;

public :
	void FRONT()
  {
	totals=totalp=totalP=totalS=0;
	P1=P2=P3=P4=P5=P6=P7=P8=0;
	S1=S2=S3=S4=S5=S6=S7=S8=0;
	p1=p2=p3=p4=p5=p6=p7=p8=0;
	s1=s2=s3=s4=s5=s6=s7=s8=0;
	z=0;

//MAIN
SCREEN********************************************************************

switching:

    {
	int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "C:\TC\BGI");
	cleardevice();
	setcolor(getmaxcolor());
	textcolor(getmaxcolor());
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	settextstyle(10,0,4);
	outtextxy(320,25,"ZINNIA DISTRIBUTOR");
	setcolor(13);
	rectangle(0,0,639,70);
	rectangle(2,2,637,68);
	rectangle(4,4,635,66);
	rectangle(220,140,420,340);
	rectangle(223,143,417,337);
	gotoxy(33,12);
	cout<<"1)  PURCHASE";
	gotoxy(33,14);
	cout<<"2)  SALES";
	gotoxy(33,16);
	cout<<"3)  REPORT";
	gotoxy(33,18);
	cout<<"4)  EXIT";
	gotoxy(32,28);
	cout<<"YOUR CHOICE IS : ";
	rectangle(200,420,440,460);
	rectangle(202,422,438,458);
	setfillstyle(10,13);
	floodfill(1,75,13);
	cin>>z;
	cleardevice();

switch(z)

      {
case 1:
//PURCHASE***************************************************************
	{

cout<<"
_________________________________________________________________
_______________";
	cout<<"

 SNO               ITEM                   RATE		    QTY
AMOUNT   ";

cout<<"
_________________________________________________________________
_______________";
	cout<<"

 1]                WHOLE                   55      ";
	cout<<"

 2]                PRE-CUT                 60      ";
	cout<<"

 3]                ASSORTED                35      ";
	cout<<"

 4]                SOUP                    10      ";
	cout<<"

 5]                WINGS                   55      ";
	cout<<"

 6]                GIZZARD                 45      ";
	cout<<"

 7]                TWO LEGS                90      ";
	cout<<"

 8]                FOUR DRUMS              30      ";

cout<<"

_______________________________________________________________
_________________";
	cout<<"


                                                  TOTAL ----->
Rs.";

cout<<"

_______________________________________________________________
_________________";
	rectangle(0,0,639,479);
	rectangle(530,400,635,440);
	settextstyle(10,0,4);
	outtextxy(210,410,"PURCHASE");
	gotoxy(62,8);
	cin>>P1;
	p1=p1+P1;
	gotoxy(62,10);
	cin>>P2;
	p2=p2+P2;
	gotoxy(62,12);
	cin>>P3;
	p3=p3+P3;
	gotoxy(62,14);
	cin>>P4;
	p4=p4+P4;
	gotoxy(62,16);
	cin>>P5;
	p5=p5+P5;
	gotoxy(62,18);
	cin>>P6;
	p6=p6+P6;
	gotoxy(62,20);
	cin>>P7;
	p7=p7+P7;
	gotoxy(62,22);
	cin>>P8;
	p8=p8+P8;
	gotoxy(75,8);
	D1=P1*55;
	cout<<D1;
	gotoxy(75,10);
	D2=P2*60;
	cout<<D2;
	gotoxy(75,12);
	D3=P3*35;
	cout<<D3;
	gotoxy(75,14);
	D4=P4*10;
	cout<<D4;
	gotoxy(75,16);
	D5=P5*55;
	cout<<D5;
	gotoxy(75,18);
	D6=P6*45;
	cout<<D6;
	gotoxy(75,20);
	D7=P7*90;
	cout<<D7;
	gotoxy(75,22);
	D8=P8*30;
	cout<<D8;
	gotoxy(75,27);
	totalP=D1+D2+D3+D4+D5+D6+D7+D8;
	totalp=totalp+totalP;
	cout<<totalP;
	getch();
	goto switching;
	}

case 2:
//SALES*******************************************************************
**
	{

cout<<"
_________________________________________________________________
_______________";
	cout<<"

 SNO               ITEM                   RATE		    QTY
AMOUNT   ";

cout<<"
_________________________________________________________________
_______________";
	cout<<"

 1]                WHOLE                   60      ";
	cout<<"

 2]                PRE-CUT                 65      ";
	cout<<"

 3]                ASSORTED                40      ";
	cout<<"

 4]                SOUP                    15      ";
	cout<<"

 5]                WINGS                   60      ";
	cout<<"

 6]                GIZZARD                 50      ";
	cout<<"

 7]                TWO LEGS                95      ";
	cout<<"

 8]                FOUR DRUMS              35      ";

cout<<"

_______________________________________________________________
_________________";
	cout<<"


                                                  TOTAL ----->
Rs.";

cout<<"

_______________________________________________________________
_________________";
	rectangle(0,0,639,479);
	rectangle(530,400,635,440);
	settextstyle(10,0,4);
	outtextxy(210,410,"SALES");
	gotoxy(62,8);
	cin>>S1;
	s1=s1+S1;
	gotoxy(62,10);
	cin>>S2;
	s2=s2+S2;
	gotoxy(62,12);
	cin>>S3;
	s3=s3+S3;
	gotoxy(62,14);
	cin>>S4;
	s4=s4+S4;
	gotoxy(62,16);
	cin>>S5;
	s5=s5+S5;
	gotoxy(62,18);
	cin>>S6;
	s6=s6+S6;
	gotoxy(62,20);
	cin>>S7;
	s7=s7+S7;
	gotoxy(62,22);
	cin>>S8;
	s8=s8+S8;
	gotoxy(75,8);
	D1=S1*60;
	cout<<D1;
	gotoxy(75,10);
	D2=S2*65;
	cout<<D2;
	gotoxy(75,12);
	D3=S3*40;
	cout<<D3;
	gotoxy(75,14);
	D4=S4*15;
	cout<<D4;
	gotoxy(75,16);
	D5=S5*60;
	cout<<D5;
	gotoxy(75,18);
	D6=S6*50;
	cout<<D6;
	gotoxy(75,20);
	D7=S7*95;
	cout<<D7;
	gotoxy(75,22);
	D8=S8*35;
	cout<<D8;
	gotoxy(75,27);
	totalS=D1+D2+D3+D4+D5+D6+D7+D8;
	totals=totals+totalS;
	cout<<totalS;
	getch();
	cleardevice();
	goto switching;
	}

case 3:
//REPORT******************************************************************
*
	{

cout<<"___________________________________________________________________
_____________";
	cout<<"
 SNO                ITEM             PURCHASE         SALES
STOCK LEFT";

cout<<"
_________________________________________________________________
_______________";
	cout<<"
 1]                WHOLE		"<<p1<<"		"<<s1<<"		"<<p1-s1;
	cout<<"
 2]
PRE-CUT		"<<p2<<"		"<<s2<<"		"<<p2-s2;
	cout<<"
 3]
ASSORTED		"<<p3<<"		"<<s3<<"		"<<p3-s3;
	cout<<"
 4]
SOUP			"<<p4<<"		"<<s4<<"		"<<p4-s4;
	cout<<"
 5]                WINGS		"<<p5<<"		"<<s5<<"		"<<p5-s5;
	cout<<"
 6]
GIZZARD		"<<p6<<"		"<<s6<<"		"<<p6-s6;
	cout<<"
 7]                TWO
LEGS		"<<p7<<"		"<<s7<<"		"<<p7-s7;
	cout<<"
 8]                FOUR
DRUMS		"<<p8<<"		"<<s8<<"		"<<p8-s8;

cout<<"
_________________________________________________________________
_______________";
	cout<<"


	PURCHASE           : Rs."<<totalp;
	cout<<"

	SALES              : Rs."<<totals;
	cout<<"

	PROFIT             : Rs."<<(s1+s2+s3+s4+s5+s6+s7+s8)*5;
	cout<<"


	BALANCE ON COUNTER : Rs. ";
	if((totals-totalp)<0)
	  {
	  cout<<-(totals-totalp)<<" CREDIT

";
	  }
	else
	  {
	  cout<<(totals-totalp)<<" DEBIT

";
	  }
	rectangle(0,0,639,479);
	rectangle(50,300,370,470);
	rectangle(55,425,365,455);
	rectangle(52,302,368,468);
	settextstyle(10,0,4);
	outtextxy(320,20,"REPORT");
	getch();
	cleardevice();
	goto switching;
	}

case 4:
//EXIT THE
PROGRAM******************************************************************
	{
	exit(0);
	}

default :
//DEFAULT*****************************************************************
*
	{
	goto switching;
	}
      }
    }
  }
};


//MAIN
PROGRAM******************************************************************

void main()
{
clrscr();
SHOP a;
a.FRONT();
getch();
}

