//// 	PROJECT   ON   AIR  RESERVATION
		  //// MADE BY RAHUL SHARMA ,ucancontact@gmail.com,9871545012
		////   HEADER FILES INCLUDED

																 # include <iostream.h>
	  # include <fstream.h>
	  # include <string.h>
	  # include <stdlib.h>
	  # include <stdio.h>
	  # include <ctype.h>
	  # include <dos.h>
	  # include <conio.h>
	  # include <process.h>
	  # include<graphics.h>
	  # include<math.h>

			# include"a:RAHUL1.h"
			# include"a:RAHUL2.h"
			# include"a:RAHUL3.h"
			# include"a:RAHUL4.h"
			# include"a:RAHUL5.h"
			# include"a:RAHUL6.h"
			# include"a:
ahul7.h"
			# include"a:
ahul8.h"
			# include"a:
ahul9.h"
			# include"a:
ahul10.h"
			# define ANSWER "zxcvbnm"
			#define MAX [15]
			//RESOLUTION 600x800
			# define DIRECTINPUT_VERSION 0x0800



void drawLoaders(int);
void Splash();
void EndAnimation();
   struct Star
	     {//Begin Struct
		int TX;
		int TY;
		int Speed;
	     };


void main()
{
    //page 1

    static int no_try;
    char try[15];
    clrscr();
    gotoxy(22,16);
    cout<<"a";
    puts("Nter     Code : ");
    gotoxy(37,16);
    gets(try);
    while(strcmp(try,ANSWER)!=0)
    { no_try++;
	      if(no_try==1)
	       {
		   clrscr();

		   cout<<"a";    cout<<"a";
		  gotoxy(20,16);
		printf("Unauthorised access prohibited  !!!!!!!");
		   cout<<"a";    cout<<"a";
		getch();
		}
		else
		 {puts("

access denied. enter again:aaaa ");
		gets(try);}
	exit(0);
    }
    goto rest;
    rest:
    printf("CHECKING CODE");
    delay(1600);
    printf(" PLEASE");
    printf(" WAIT");
    delay(3600);
    end:

int gdmode=IBM8514;
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"c:\rahul");



// page 2

  for(int ff=2;ff<200;ff++)
  {
  setcolor(random(ff));
  settextstyle(BOLD_FONT,HORIZ_DIR,4);

  outtextxy(127,200," AcCeSs ");
  outtextxy(167,250," GrAnTeD ");}
  setcolor(15);
  settextstyle(5,HORIZ_DIR,4);
  outtextxy(187,420," hold on ............ ");
    delay(2000);
    outtextxy(187,420," hold on ............ ");
    outtextxy(187,420," hold on ............ ");
  delay(3000);

  cleardevice();

// page 3



	      setbkcolor(0);
	      drawLoaders(10);
     //	      delay(2000);


 int rad=200,x=330,y=250, c=10;
 setbkcolor(0);
 for(int i=0;i<=636;i++)
 {
 sound(4500);
 putpixel(636-i,9,9);
 putpixel(636-i,11,9);
 putpixel(636-i,13,9);
 putpixel(636-i,15,9);
 putpixel(636-i,17,9);
 putpixel(636-i,19,9);
 putpixel(636-i,21,9);
 putpixel(636-i,23,9);
 putpixel(636-i,25,9);
 putpixel(636-i,27,9);
 putpixel(636-i,454,9);
 putpixel(i,456,9);
 putpixel(i,458,9);
 putpixel(i,460,9);
 putpixel(i,462,9);
 putpixel(636-i,464,9);
 putpixel(636-i,466,9);
 putpixel(i,468,9);
 putpixel(i,470,9);
 putpixel(i,471,9);
 putpixel(i,473,9);
 delay(3);
 nosound();
 }

 for(i=0;i<=600;i++)
 {
 sound(2500);
 putpixel(636,600-i,9);
 putpixel(634,600-i,9);
 putpixel(632,600-i,9);
 putpixel(630,600-i,9);
 putpixel(628,600-i,9);
 putpixel(626,600-i,9);
 putpixel(624,600-i,9);
 putpixel(622,600-i,9);

 putpixel(4,i,9);
  putpixel(6,i,9);
  putpixel(8,i,9);
  putpixel(10,i,9);
 putpixel(12,i,9);
 putpixel(14,i,9);
 putpixel(16,i,9);
 putpixel(18,i,9);
  delay(3);
 nosound();
 }
 while(rad >=0)
	{
      //	x++;
		y++;
		setcolor(BLUE);
		circle(x,y,rad);
		delay(40);
		rad=rad-2;
		}
	 for(int io=0;io<8000;io++)
  {
	 for(int c=0;c<200;c++)
	 {
	 // gotoxy(13,12);
	  putpixel((io++),random(450),c);

}  }//}

  float octave[7]={130.81,146.83,164.81,174.61,196.220,246.94};
    int adn;
    while(!kbhit())
	{
	adn=random(7);
	sound(octave[adn]*10);
	delay(190);
	nosound();
  setcolor(11);
  settextstyle(5,HORIZ_DIR,8);
  outtextxy(15,170,"''");
  outtextxy(610,170,"''");
  setcolor(YELLOW);
  settextstyle(4,HORIZ_DIR,7);
  outtextxy(20,200,"Air Ticket Reservation    ");
  setcolor(15);
  settextstyle(5,HORIZ_DIR,3);
  outtextxy(30,440,"Press Any key To Continue -----)))))");
}

  // pAGE 4
	getch();
	cleardevice();
	setcolor(9);
	settextstyle(5,HORIZ_DIR,6);
	outtextxy(20,13,"designed by ");
	setcolor(YELLOW);
	outtextxy(289,13,"rahul sharma  ");
	outtextxy(60,65,"b.c.a Msi Ist year  ");
	settextstyle(16,HORIZ_DIR,5);
	setcolor(BROWN);
	outtextxy(180,15," PRESS ANY KEY TO CONTINUE`'''''``");

	Splash();

// page 5

cleardevice();
{
  int il;
  setbkcolor(0);
  for(il=0;il<=110;il++)
 {
 setcolor(1);
 circle(310,247,il);
 delay(5);
 }
for(il=0;il<=100;il++)
{
 setcolor(4);
 circle(310,247,il);
 delay(10);
 nosound();
}

  setbkcolor(0);
  setcolor(LIGHTGREEN);
  settextstyle(11,HORIZ_DIR,8);
{ outtextxy(250,120,"SUBMITTED  TO :: ");

  for(il=0;il<=600;il++)
 {
 sound(3500);
 putpixel(636,600-il,4);
 putpixel(635,600-il,4);
 putpixel(634,600-il,4);
 putpixel(633,600-il,4);
 putpixel(4,il,4);
 putpixel(6,il,4);
 putpixel(5,il,4);
 putpixel(3,il,4);
 delay(1);
 nosound();
 }

  for(il=0;il<=636;il++)
 {
 sound(3500);
 putpixel(636-il,5,4);
 putpixel(636-il,3,4);
 putpixel(636-il,2,4);
 putpixel(636-il,4,4);
 putpixel(il,470,4);
 putpixel(il,472,4);
 putpixel(il,471,4);
 putpixel(il,473,4);
 delay(1);
 nosound();
 }
}

  delay(3000);
  //settextstyle(4,HORIZ_DIR,5);
  setcolor(LIGHTGREEN);
  settextstyle(GOTHIC_FONT,HORIZ_DIR,5);
  outtextxy(60,225,"   Mr MANOJ KUMAR   ");
  settextstyle(GOTHIC_FONT,HORIZ_DIR,5);

delay(1000);
setcolor(YELLOW);
settextstyle(16,HORIZ_DIR,5);
delay(3000);
outtextxy(180,460," C O N T I N U I N G   ````'''```'''''``");
delay(3000);
outtextxy(180,460," C O N T I N U I N G   ````'''```'''''``");
//getch();
clrscr();
cleardevice();
}

	       PASSENGER p;
	       TICKET ticket;
	       RESERVE r;
	       ticket.ADDITION();
	       int ch1,ch;


//starts

 while(1)
   {
//   cleardevice();
   graph g;
   int b,x,y;
   g.initg();
   g.image("c:\rahul\v.bmp");
   setcolor(YELLOW);
   sound(2500);
   g.showtext(38,160,"01:RESERVATION ");
   nosound();

   sound(3500);
   g.showtext(38,170,"02:CANCELLATION   ");
      nosound();
      sound(2500);
   g.showtext(38,180,"03:PASSENGER RECORD'S  ");
      nosound();
      sound(1500);
   g.showtext(38,190,"04:ENQUIRY");
      nosound();
      sound(500);
   g.showtext(38,200,"05:LIST 'PASSENGERS");
   nosound();
   sound(7200);
   g.showtext(38,210,"06:QUIT");
   setcolor(LIGHTGREEN);
   nosound();
   sound(1200);
   g.showtext(455,163.5," NTER UR CHOICE");
   nosound();
   gotoxy(75,11);
   cin>>ch;

		    switch(ch)
		    {
			case 1:
			       cleardevice();
			       g.image("c:\rahul\v2.bmp");
			       r.RESERVATION();
			       settextstyle(7,HORIZ_DIR,3);
			       break;

			case 2:
			       cleardevice();
			       g.image("c:\rahul\v3.bmp");
			       delay(2000);
			       r.CANCELLATION();
			       clrscr();
			       break;

			case 3:

			       cleardevice();
		  g.image("c:\rahul\v1.bmp");
		       gotoxy(33,16);
		       cout<<"ENTER YOUR CHOICE ";
			       cin>>ch1;
			       cleardevice();
			       if(ch1==1)
				 {
				 cleardevice();
				 p.PASS_INFO();
				 getch(); }
			       else
				 if(ch1==2)
				   {
				   cleardevice();
				   p.MODIFY();}
				 else

			       break;
			       clrscr();

			       break;

			case 4:
			       cleardevice();
			       g.image("c:\rahul\v4.bmp");
			       ticket.ENQUIRY();
			   //    gotoxy(2,23);
			     //  cout<<"PRESS ANY KEY TO CONTINUE....";
			       getch();
			       cleardevice();
			       break;
  //			       cleardevice();

			case 5:
			       cleardevice();
			       g.image("c:\rahul\v5.bmp");
			       p.LIST();
			       break;
//			       cleardevice();

			case 6:
			       exit(0);
			       cleardevice();



			default:
				cout<<"ENTER THE CORRECT CHOICE";
				getch();

	   }
	   }
	   }





//HEADER FILE 1



	      // three clases used

	  class TICKET
	  {

		private:
			  void ADD_RECORD(char[20],char[25],char[25],int,int);

		public:
			  void ADDITION(void);
			  void ENQUIRY(void);
			  char *FLIGHTNO(int);

		protected:

			  char fltno[20],from[25],to[25];
			  int ecofair,exefair;

	  };

	  //THIS CLASS CONTROLS ALL THE FUNCTIONS RELATED TO PASSENGERS

	  class PASSENGER
	  {
		public:
			  void ADD_RECORD(int,int,char[36],char[45],int,char,char);
			  void DELETE_TICKET(int);
			  int DELETE_FLIGHT(int);
			  void LIST(void);
			  int LAST_TICKETNO(void);
			  int SEATS(int);
			  int FOUND(int);
			  char *NAME(int);
			  void PASS_INFO();
			  void MODIFY();
		protected:
			  char Class,name[35],address[45],sex;
			  int slno,age,ticketno;
	  };

	  //THIS IS THE DERIVED CLASS WHICH CONTROLS ALL THE FUNCTIONS
	  //RELATED TO RESERVATION,CANCELLATION,ETC.

	  class RESERVE : public TICKET,public PASSENGER
	  {
		public:

			  void RESERVATION(void);
			  void CANCELLATION(void);
			  void DISPLAY_TICKET(void);
			  void DELETE_ALL(void);
	  };





	  //FUNCTION TO ADD GIVEN DATA IN THE TICKET FILE(TICKET.DAT)

	  void TICKET :: ADD_RECORD(char t_fltno[20],char t_from[25],char
t_to[15],int t_ecofair,int t_exefair)
	  {
		fstream file;
		file.open("TICKET.DAT",ios::app);
		strcpy(fltno,t_fltno);
		strcpy(from,t_from);
		strcpy(to,t_to);
		ecofair = t_ecofair;
		exefair = t_exefair;
		file.write((char*)this,sizeof(TICKET));
		file.close();
	  }

	  //FUNCTION TO RETURN FLIGHT NO. FOR THE GIVEN S.NO

	  char *TICKET :: FLIGHTNO(int sno)
	  {
		fstream file;
		file.open("TICKET.DAT",ios::in);
		int count = 1;
		while(file.read((char*) this,sizeof(TICKET)))
		{
		     if (sno == count)
			break;

		     count++;
		}
		file.close();
		return fltno;
	  }




HEADER FILE 2


	  //FUNCTION TO GIVE DATA TO ADD RECORDS IN THE TICKET FILE

	  void TICKET :: ADDITION(void)
	  {
	       fstream file;
	       file.open("TICKET.DAT",ios::in);
	       if (!file.fail() )
		  return;
	       file.close();
	       ADD_RECORD("KL146","DELHI","MUMBAI",1500,1700);
	       ADD_RECORD("KL146","MUMBAI","DELHI",1500,1700);
	       ADD_RECORD("KL156","DELHI","CALCUTTA",1700,1900);
	       ADD_RECORD("KL156","CALCUTTA","DELHI",1700,1900);
	       ADD_RECORD("KL166","DELHI","MADRAS",2100,2300);
	       ADD_RECORD("KL166","MADRAS","DELHI",2100,2300);
	       ADD_RECORD("KL176","MUMBAI","CALCUTTA",1900,2100);
	       ADD_RECORD("KL176","CALCUTTA","MUMBAI",1900,2100);
	       ADD_RECORD("KL186","MUMBAI","MADRAS",1800,2000);
	       ADD_RECORD("KL186","MADRAS","MUMBAI",1800,2000);
	       ADD_RECORD("KL196","CALCUTTA","MADRAS",1600,1800);
	       ADD_RECORD("KL156","MADRAS","CALCUTTA",1600,1800);
	       clrscr();
	  }

	  //FUNCTION TO DISPLAY LIST OF FLIGHTS

	  void TICKET :: ENQUIRY(void)
	  {
	  //     cleardevice();
	       fstream file;
	       file.open("TICKET.DAT",ios::in);
	       //gotoxy(30,3);
	       gotoxy(18,5);
	       cout<<"Sno. FLIGHT NO. FROM      TO       ECO.FAIR  EXE.FAIR";
	       int row = 7,sno = 1;
	       while(file.read((char*)this, sizeof(TICKET)))
	       {
		     gotoxy(18,row);
		     cout<<sno;
		     gotoxy(23,row);
		     cout<<fltno;
		     gotoxy(34,row);
		     cout<<from;
		     gotoxy(44,row);
		     cout<<to;
		     gotoxy(53,row);
		     cout<<ecofair;
		     gotoxy(63,row);
		     cout<<exefair;
		     row++;
		     sno++;
	       }
	       file.close();
	  }

	  //FUNCTION TO RESERVE TICKET FOR THE PASSENGERS

	  void RESERVE :: RESERVATION(void)
	  {

//	       cleardevice();
  //	       setbkcolor(0);
	       ENQUIRY();
	       char t1[15],pclass,pname[26],paddress[36],psex,pfltno[10];
	       int t2,valid,page,tno,sno;
	       PASSENGER p;
	       tno = p.LAST_TICKETNO() + 1;
	       do
	       {

		    valid = 1;
		    gotoxy(3,23);
//		    ////clreol();
		    cout<<"PRESS <ENTER> TO EXIT";
		    gotoxy(3,20);
  //		    ////clreol();
		    cout<<"ENTER THE SNO. OF THE FLIGHT : ";
		    gets(t1);
		    t2 = atoi(t1);
		    sno = t2;
		    if(strlen(t1) == 0)
		      return;
		    if(sno < 1 || sno > 12)
		    {
		      valid = 0;
		      gotoxy(3,23);
		      ////clreol();
		      cout<<"ENTER CORRECTLY";
		      getch();
		    }
	       }    while(!valid);

	       int i=1;

	       fstream file;
	       file.open("TICKET.DAT",ios::in);

	       while(file.read((char*)this, sizeof(TICKET)))
	       {
		    if(sno == i)
		      break;
		    i++;
	       }
	       file.close();
	       strcpy(pfltno,fltno);
	       if(p.SEATS(sno)>=250)
	       {
		 gotoxy(5,21);
		 cout<<"7Sorry! SEATS ARE NOT AVAILABLE";
		 getch();
		 return;
	       }
	       gotoxy(3,23);
	       ////clreol();
	       cout<<"E=ECONOMIC,X=EXECUTIVE or PRESS <ENTER> TO EXIT";
	       do
	       {
		    gotoxy(3,21);
		    ////clreol();
		    cout<<"BY WHICH CLASS YOU WOULD LIKE TO TRAVEL : ";
		    pclass = getche();
		    pclass = toupper(pclass);
		    if(pclass == 13)
		       return;
	       }     while(pclass !='E' && pclass !='X');

  //	       clrscr();

int rahul=IBM8514;
int rahuldriver=DETECT,gmode;
initgraph(&rahuldriver,&rahul,"c:\rahul");

 cleardevice();
 setbkcolor(0);
 for(i=0;i<=636;i++)
 {
 putpixel(636-i,12,12);
 putpixel(636-i,11,12);
 putpixel(636-i,13,12);
 putpixel(636-i,15,12);
 putpixel(636-i,17,12);
 putpixel(636-i,19,12);
 putpixel(636-i,21,12);
 putpixel(636-i,23,12);
 putpixel(636-i,25,12);
 putpixel(636-i,27,12);
 putpixel(636-i,454,12);
 putpixel(i,456,12);
 putpixel(i,458,12);
 putpixel(i,460,12);
 putpixel(i,462,12);
 putpixel(636-i,464,12);
 putpixel(636-i,466,12);
 putpixel(i,468,12);
 putpixel(i,470,12);
 putpixel(i,471,12);
 putpixel(i,473,12);
 delay(3);
 nosound();
 }

 for(i=0;i<=600;i++)
 {
 putpixel(636,600-i,9);
 putpixel(634,600-i,9);
 putpixel(632,600-i,9);
 putpixel(630,600-i,9);
 putpixel(628,600-i,9);
 putpixel(626,600-i,9);
 putpixel(624,600-i,9);
 putpixel(622,600-i,9);

 putpixel(4,i,9);
  putpixel(6,i,9);
  putpixel(8,i,9);
  putpixel(10,i,9);
 putpixel(12,i,9);
 putpixel(14,i,9);
 putpixel(16,i,9);
 putpixel(18,i,9);
 delay(3);
 }




//	       gotoxy(72,3);
	       setcolor(YELLOW);
	       settextstyle(2,HORIZ_DIR,5);
	       outtextxy(565,25,"<0>-EXIT");
	       //cout<<"<0>-EXIT";
	       //gotoxy(30,2);
	       settextstyle(7,HORIZ_DIR,3);
	       setcolor(YELLOW);
	       outtextxy(220,25,"Reservation");
	       gotoxy(5,5);
	       cout<<"NAME     : ";
	       gotoxy(5,6);
	       cout<<"ADDRESS  : ";
	       gotoxy(5,7);
	       cout<<"SEX M/F  : ";
	       gotoxy(5,8);
	       cout<<"AGE      : ";

	       do
	       {
		    valid=1;
		    gotoxy(5,25);
		    ////clreol();
		    cout<<"ENTER THE NAME OF THE PASSENGER";
		    gotoxy(15,5);
		    ////clreol();
		    gets(pname);
		    if(pname[0] == '0')
		      return;
		    if(strlen(pname) < 1 || strlen(pname) > 25)
		    {
		      valid = 0;
		      gotoxy(5,25);
		      ////clreol();
		      cout<<"7ENTER CORRECTLY {RANGE : 1 TO 25}";
		      getch();
		    }
	       }    while(!valid);

	       do
	       {
		    valid = 1;
		    gotoxy(5,25);
		    ////clreol();
		    cout<<"ENTER THE ADDRESS OF THE PASSENGER";
		    gotoxy(15,6);
		    ////clreol();
		    gets(paddress);
		    if(paddress[0] == '0')
		      return;
		    if(strlen(paddress) < 1 || strlen(paddress) > 35)
		    {
		      valid = 0;
		      gotoxy(5,25);
		      ////clreol();
		      cout<<"7ENTER CORRECTLY {RANGE : 1 TO 35}";
		      getch();
		    }
	       }    while(!valid);

	       do
	       {
		    gotoxy(5,25);
		    ////clreol();
		    cout<<"ENTER THE SEX OF THE PASSENGER";
		    gotoxy(15,7);
		    ////clreol();
		    psex = getche();
		    psex = toupper(psex);
		    if(psex == '0')
		      return;
	       }    while(psex !='M' && psex !='F' );

	       do
	       {
		    valid = 1;
		    gotoxy(5,25);
		    ////clreol();
		    cout<<"ENTER THE AGE OF THE PASSENGER";
		    gotoxy(15,8);
		    ////clreol();
		    gets(t1);
		    t2 = atoi(t1);
		    page = t2;
		    if(t1[0] == '0')
		      return;
		    if(page < 1 || page > 100)
		    {
		      valid = 0;
		      gotoxy(5,25);
		      ////clreol();
		      cout<<"7ENTER CORRECTLY ";
		      getch();
		    }
	       }    while(!valid);

//	       clrscr();
	       cleardevice();
	     //

 setbkcolor(0);

 for(i=0;i<=636;i++)
 {
 putpixel(636-i,YELLOW,YELLOW);
 putpixel(636-i,23,YELLOW);
 putpixel(i,460,YELLOW);
 putpixel(i,462,YELLOW);
 putpixel(i,473,YELLOW);
 delay(2);
 nosound();
 }

 for(i=0;i<=600;i++)
 {
 putpixel(636,600-i,YELLOW);
 putpixel(634,600-i,YELLOW);
 putpixel(632,600-i,YELLOW);
  putpixel(8,i,YELLOW);
  putpixel(10,i,YELLOW);

 delay(2);
 }


	       setbkcolor(1);
	       setcolor(YELLOW);

		   float octave[7]={130.81,146.83,164.81,174.61,196.220,246.94};
    int adn;
    while(!kbhit())


	{
	adn=random(7);
	sound(octave[adn]*10);
	delay(190);
	nosound();


	       gotoxy(33,6);
	       cout<<"TICKET NO. : "<<tno;
	       gotoxy(17,9);
	       cout<<from<<" TO "<<to;
	       gotoxy(45,9);
	       cout<<"FLIGHT NO. : "<<pfltno;
	       gotoxy(20,11);
	       cout<<"PASSENGER NAME : "<<pname;
	       gotoxy(20,13);
	       cout<<"ADDRESS : "<<paddress;
	       gotoxy(20,15);
	       cout<<"SEX : "<<psex;
	       gotoxy(20,17);
	       cout<<"AGE : "<<page;
	       setcolor(15);
	       settextstyle(5,HORIZ_DIR,3);
	       outtextxy(45,420,"Thank U & Have A  Happy Journey ");
	       setcolor(15);
	       settextstyle(3,HORIZ_DIR,1);
	       outtextxy(350,365,"25/8/2004 # 1900 Hrs");

	       gotoxy(45,19);
	       if(pclass == 'E')
		 cout<<"TOTAL FAIR : "<<ecofair;
	       else
		 cout<<"TOTAL FAIR : "<<exefair;
	  }
	       p.ADD_RECORD(tno,sno,pname,paddress,page,psex,pclass);
	       getch();
	    settextstyle(7,HORIZ_DIR,3);

	  }



header file3




	  // FUNCTION TO ADD THE GIVEN DATA IN THE PASSENGER'S FILE

	  void PASSENGER :: ADD_RECORD (int tno,int sno,char pname[26],char
paddress[36],int page,char psex,char pclass)
	  {
	       fstream file;
	       file.open("PASS.DAT",ios::app);
	       ticketno = tno;
	       slno = sno;
	       strcpy(name,pname);
	       strcpy(address,paddress);
	       age = page;
	       sex = psex;
	       Class = pclass;
	       file.write((char*)this,sizeof(PASSENGER));
	       file.close();
	  }
	  void PASSENGER :: MODIFY()
	    {

		int tcno;
		char t1[15],pclass,pname[26],paddress[36],psex,pfltno[10];
		int t2,valid,page,tno,sno;
		PASS_INFO();
	     //	cleardevice();
setbkcolor(RED);

		cout<<"
ENTER THE TICKET NUMBER OF THE PASSENGER";
		cin>>tcno;
		fstream file;
		file.open("PASS.DAT",ios::in|ios::out);
		int m=0;
		int l;
		file.read((char*)this,sizeof(PASSENGER));
		while(!file.eof())
		  {    m++;
		       if(tcno==ticketno)
			 {
			  l=(m-1)*sizeof(PASSENGER);
			  cout<<l;
			  getch();
			  clrscr();
			  cleardevice();
			  gotoxy(72,3);
			  cout<<"<0>-EXIT";
			  //
			  gotoxy(34,2);
			  cout<<"RESERVATION";
			  gotoxy(5,5);
			  cout<<"NAME     : ";
			  gotoxy(5,6);
			  cout<<"ADDRESS  : ";
			  gotoxy(5,7);
			  cout<<"SEX M/F  : ";
			  gotoxy(5,8);
			  cout<<"AGE      : ";

		    gotoxy(5,25);
		    //clreol();
		    cout<<"ENTER THE NAME OF THE PASSENGER";
		    gotoxy(15,5);
		    //clreol();
		    gets(pname);
		    gotoxy(5,25);
		    //clreol();
		    cout<<"ENTER THE ADDRESS OF THE PASSENGER";
		    gotoxy(15,6);
		    //clreol();
		    gets(paddress);
		    gotoxy(5,25);
		    //clreol();
		    cout<<"ENTER THE SEX OF THE PASSENGER";
		    gotoxy(15,7);
		    //clreol();
		    psex = getche();
		    psex = toupper(psex);

		    gotoxy(5,25);
		    //clreol();
		    cout<<"ENTER THE AGE OF THE PASSENGER";
		    gotoxy(15,8);
		    //clreol();
		    gets(t1);
		    t2 = atoi(t1);
		    page = t2;
		    cout<<"CLASS:E(ECONOMIC) OR X(EXECUTIVE)";
		 pclass=getche();
		 if(strlen(paddress)!=0)
		strcpy(address,paddress);
		if(strlen(pname)!=0)
		strcpy(name,pname);
		if(strlen(t1)!=0)
		age=page;
		if(psex!=13)
		sex=psex;
		if(pclass!=13)
		Class=pclass;
		file.seekp(l);
		file.write((char*)this,sizeof(PASSENGER));
		file.close();
		return;
	      }
	      else
	      file.read((char*)this,sizeof(PASSENGER));

	   }



     }




	  void PASSENGER :: PASS_INFO()
	    {
	       fstream file;
	       file.open("PASS.DAT",ios::in);
	    //   cleardevice();

setbkcolor(4);

 for(int ii=0;ii<=636;ii++)
 {
 sound(1455);
 putpixel(636-ii,12,12);
 putpixel(636-ii,11,12);
 putpixel(636-ii,13,12);
 putpixel(636-ii,15,12);
 putpixel(636-ii,17,12);
 putpixel(636-ii,19,12);
 putpixel(636-ii,21,12);
 putpixel(636-ii,23,12);
 putpixel(636-ii,25,12);
 putpixel(636-ii,27,12);
 putpixel(636-ii,454,12);
 putpixel(ii,456,12);
 putpixel(ii,458,12);
 putpixel(ii,460,12);
 putpixel(ii,462,12);
 putpixel(636-ii,464,12);
 putpixel(636-ii,466,12);
 putpixel(ii,468,12);
 putpixel(ii,470,12);
 putpixel(ii,471,12);
 putpixel(ii,473,12);

 delay(3);
 nosound();
 }
 for(ii=0;ii<=600;ii++)
{
 sound(2500);
 putpixel(636,600-ii,9);
 putpixel(634,600-ii,9);
 putpixel(632,600-ii,9);
 putpixel(630,600-ii,9);
 putpixel(628,600-ii,9);
 putpixel(626,600-ii,9);
 putpixel(624,600-ii,9);
 putpixel(622,600-ii,9);

 putpixel(4,ii,9);
  putpixel(6,ii,9);
  putpixel(8,ii,9);
  putpixel(10,ii,9);
 putpixel(12,ii,9);
 putpixel(14,ii,9);
 putpixel(16,ii,9);
 putpixel(18,ii,9);

 delay(2);
 nosound();
 }
	  settextstyle(2,HORIZ_DIR,7);
	  outtextxy(180,20," 			 PASSENGERS INFORMATION ");
	//  cout<<"                       **************************
";
	       gotoxy(2,4);
	       cout<<"T.NO.";
	       gotoxy(11,4);
	       cout<<"S.NO.";
	       gotoxy(25,4);
	       cout<<"NAME";
	       gotoxy(48,4);
	       cout<<"ADDRESS";
	       gotoxy(66,4);
	       cout<<"AGE";
	       gotoxy(70,4);
	       cout<<"SEX";
	       gotoxy(74,4);
	       cout<<"CLASS";
	       gotoxy(1,5);

cout<<"*******************************************************************
************";
	       int tno,sno,page;
	       char pname[26],paddress[36],psex,pclass,pfltno[10];
	       int i=6;
	       while(file.read((char*)this,sizeof(PASSENGER)))
	       {
		tno=ticketno;
		sno=slno;
	       strcpy(pname,name);
	       strcpy(paddress,address);
	       page = age;
	       psex = sex;
	       pclass = Class;
	       gotoxy(2,i);
	       cout<<tno;
	       gotoxy(11,i);
	       cout<<sno;
	       gotoxy(20,i);
	       cout<<pname;
	       gotoxy(45,i);
	       cout<<paddress;
	       gotoxy(67,i);
	       cout<<page;
	       gotoxy(71,i);
	       cout<<psex;
	       gotoxy(77,i);
	       cout<<pclass;

	       i++;
	       }
	       file.close();
	  }
	  //THIS FUNCTION RETURNS THE LAST TICKET NO. IN THE PASSENGER FILE

	  int PASSENGER ::LAST_TICKETNO(void)
	  {
	       fstream file;
	       file.open("PASS.DAT",ios::in);
	       int count = 0;
	       while(file.read((char*)this,sizeof(PASSENGER)))
		    count = ticketno;
	       file.close();
	       return count;
	  }

	  //THIS FUNCTION RETURNS TOTAL NO. OF SEATS IN THE PASSENGER FILE

	  int PASSENGER :: SEATS(int sno)
	  {
	       fstream file;
	       file.open("PASS.DAT",ios::in);
	       int count = 0;
	       while(file.read((char*)this,sizeof(PASSENGER)))
	       {
		    if(sno == slno)
		    count++;
	       }
	       file.close();
	       return count;
	  }

	  //THIS FUNCTION RETURNS 0 IF THE TICKET NO. IS NOT FOUND IN THE
	  //PASSENGER FILE

	  int PASSENGER :: FOUND(int tno)
	  {
	       fstream file;
	       file.open("PASS.DAT",ios::in);
	       int found = 0;

	       while(file.read((char*)this,sizeof(PASSENGER)))
	       {
		    if(tno == ticketno)
		    {
		      found = 1;
		      break;
		    }
	       }
	       file.close();
	       return found;
	  }

	  //THIS FUNCTION RETURNS PASSENGER'S NAME FOR THE GIVEN TICKETNO.

	  char *PASSENGER :: NAME(int tno)
	  {
	       fstream file;
	       file.open("PASS.DAT",ios::in);
	       while(file.read((char*)this,sizeof(PASSENGER)))
	       {
		    if(tno == ticketno)
		      break;
	       }
	       file.close();
	       return name;
	  }


header file 4






	  //THIS FUNCTION DISPLAYS THE LIST OF THE PASSENGERS

	  void PASSENGER :: LIST (void)
	  {
	       //clrscr();
	       //cleardevice();
	       char t1[20];
	       int t2,sno,valid;
	       TICKET ticket;
	       ticket.ENQUIRY();
	       do
	       {
		    valid = 1;
		    gotoxy(3,23);
		    ////clreol();
		 //   cout<<"PRESS <ENTER> TO EXIT";
		   // gotoxy(3,20);
		   // //clreol();
		  //  cout<<"ENTER SNO.OF THE FLIGHT WHOSE DETAILS YOU WANT";
		    gotoxy(75,23);
		    gets(t1);
		    t2 = atoi(t1);
		    sno = t2;
		    if(strlen(t1) == 0)
		      return;
		    if(sno < 1 || sno > 12)
		    {
		      valid = 0;
		      gotoxy(3,23);
		      //clreol();
		      cout<<"7ENTER CORRECTLY";
		      getch();
		    }
	       }    while(!valid);

	       //clrscr();
	       cleardevice();
	       setcolor(LIGHTGREEN);
	       setbkcolor(8);

		 for(int il=0;il<=600;il++)
 {
 putpixel(636,600-il,14);
 putpixel(635,600-il,14);
 putpixel(634,600-il,14);
 putpixel(633,600-il,14);
 putpixel(4,il,14);
 putpixel(6,il,14);
 putpixel(5,il,14);
 putpixel(3,il,14);
 delay(1);
 }

  for(il=0;il<=636;il++)
 {
 putpixel(636-il,5,14);
 putpixel(636-il,3,14);
 putpixel(636-il,2,14);
 putpixel(636-il,4,14);
 putpixel(il,470,14);
 putpixel(il,472,14);
 putpixel(il,471,14);
 putpixel(il,473,14);
 delay(1);
 nosound();
 }


	       int row = 8,found = 0,flag = 0;
	       char ch;
	       gotoxy(3,4);
	       cout<<"FLIGHT NO.----> "<<ticket.FLIGHTNO(sno);
	       //gotoxy(28,2);
	       settextstyle(3,HORIZ_DIR,4);
	       outtextxy(220,18,"LIST OF PASSENGERS");
	       //cout<<"";
	       gotoxy(5,6);
	       cout<<"TICKET NO.  NAME                            CLASS ";
	       gotoxy(4,7);

cout<<"*******************************************************";
	       fstream file;
	       file.open("PASS.DAT",ios::in);
	       file.seekg(0,ios::beg);
	       while(file.read((char*)this,sizeof(PASSENGER)))
	       {
		    if(sno == slno)
		    {
		      flag = 0;
		      delay(20);
		      found = 1;
		      gotoxy(5,row);
		      cout<<ticketno;
		      gotoxy(17,row);
		      cout<<name;
		      gotoxy(49,row);
		      if(Class == 'X')
			cout<<"EXECUTIVE";
		      else
			cout<<"ECONOMIC";
		      if(row == 21)
		      {
			cleardevice();
			flag = 1;
			row = 7;
			gotoxy(5,23);
			cout<<"PRESS ANY KEY TO CONTINUE OR PRESS <ESC>";
			ch = getch();
			if(ch == 27)
			  break;
			//fff
			cleardevice();
			settextstyle(3,HORIZ_DIR,4);
			outtextxy(220,18,"LIST OF PASSENGERS");
			//gotoxy(33,3);
			//cout<<"LIST OF PASSENGERS";
			gotoxy(2,5);
			cout<<"TICKET NO.  NAME                CLASS ";
		      }
		      else
			row++;
		    }
	       }
	       if(!found)
	       {

		 gotoxy(5,10);
		 cout<<"7RECORDS NOT FOUND";
	       }
	       if(!flag)
	       {
		 gotoxy(5,23);
		 cout<<"PRESS ANY KEY TO CONTINUE....";
		 getch();
	       }
	       file.close();
	  }

	  //THIS FUNCTION DELETES PASSENGER RECORDS FOR THE GIVEN TICKET NO.

	  void PASSENGER :: DELETE_TICKET(int tno)
	  {
	       fstream file;
	       file.open("PASS.DAT",ios::in);
	       fstream temp;
	       temp.open("temp.dat",ios::out);
	       file.seekg(0,ios::beg);
	       while(!file.eof() )
	       {
		    file.read((char*)this,sizeof(PASSENGER));
		    if(file.eof() )
		      break;
		    if(tno != ticketno)
		      temp.write((char*)this,sizeof(PASSENGER));
	       }
	       file.close();
	       temp.close();
	       file.open("PASS.DAT",ios::out);
	       temp.open("temp.dat",ios::in);
	       temp.seekg(0,ios::beg);
	       while(!temp.eof() )
	       {
		    temp.read((char*)this,sizeof(PASSENGER));
		    if(temp.eof() )
		      break;
		    file.write((char*)this,sizeof(PASSENGER));
	       }
	       file.close();
	       temp.close();
	  }

	  //THIS FUNCTION DELETES PASSENGER RECORDS FOR THE GIVEN FLIGHTNO.

	  int PASSENGER :: DELETE_FLIGHT(int sno)
	  {
	       fstream file;
	       file.open("PASS.DAT",ios::in);
	       fstream temp;
	       temp.open("temp.dat",ios::out);
	       file.seekg(0,ios::beg);
	       int found = 0;
	       while(!file.eof() )
	       {
		    file.read((char*)this,sizeof(PASSENGER));
		    if(file.eof() )
		      break;
		    if(sno !=slno)
		      temp.write((char*)this,sizeof(PASSENGER));
		    else
		      found = 1;
	       }
	       file.close();
	       temp.close();
	       file.open("PASS.DAT",ios::out);
	       temp.open("temp.dat",ios::in);
	       temp.seekg(0,ios::beg);
	       while(!temp.eof() )
	       {
		    temp.read((char*)this,sizeof(PASSENGER));
		    if(temp.eof() )
		      break;
		    file.write((char*)this,sizeof(PASSENGER));
	       }
	       file.close();
	       temp.close();
	       return found;
	  }

	  //THIS FUNCTION CANCELS PASSENGER'S TICKET


	  void RESERVE ::CANCELLATION(void)
	  {
	       char t1[20],ch;
	       int t2,tno,valid;
	       do
	       {
valid = 1;
cleardevice();
setbkcolor(RED);
setcolor(15);
setcolor(YELLOW);
settextstyle(2,VERT_DIR,9);
settextstyle(2,HORIZ_DIR,5.1);
outtextxy(52,340,"PRESS < N ter > TO SEE LIST OR 0 TO EXIT");
settextstyle(2,HORIZ_DIR,5.1);
outtextxy(52,370,"ENTER TICKETNO. OF PASSENGER TO CANCEL THE TICKET");
       gotoxy(56.9,24.91);
       gets(t1);
       t2 = atoi(t1);
	       tno = t2;
	       if(t1[0] == '0')
		 return;
		    if(strlen(t1) == 0)
		    {
		      ///
		      cleardevice();
		      valid = 0;
		      LIST();
		    }
		    cleardevice();
		    if(!FOUND(tno) && valid)
		    {
		    cleardevice();
		    setbkcolor(1);
		    valid = 0;
		    settextstyle(2,HORIZ_DIR,6);
		    outtextxy(52,170,"RECORD NOT FOUND");
		    outtextxy(58,200,"PRESS ANY KEY TO CONTINUE");
		    getch();
		    }
	       }    while(!valid);


	       //PAGE 11

	       clrscr();
	       cleardevice();
	       fstream file;
	       file.open("PASS.DAT",ios::in);
	       while(file.read((char*)this,sizeof(PASSENGER)))
		    if(ticketno == tno)
		      break;
	       file.close();
	       int i = 1;
	       file.open("TICKET.DAT",ios::in);
	       while(file.read((char*)this,sizeof(TICKET)))
	       {
		    cleardevice();
		    if(slno == i)
		      break;
		    i++;
	       }
	       //eee
	       cleardevice();
	       file.close();
	       PASSENGER p;
	       gotoxy(11,4);
	       cout<<"****************************************************";
	       gotoxy(11,21);
	       cout<<"****************************************************";
	       gotoxy(33,6);
	       cout<<"TICKET NO. : "<<tno;
	       gotoxy(17,9);
	       cout<<from<<" TO "<<to;
	       gotoxy(45,9);
	       cout<<"FLIGHT NO. : "<<fltno;
	       gotoxy(20,11);
	       cout<<"PASSENGER NAME : "<<p.NAME(tno);
	       gotoxy(20,13);
	       cout<<"ADDRESS : "<<address;
	       gotoxy(20,15);
	       cout<<"SEX : "<<sex;
	       gotoxy(20,17);
	       cout<<"AGE : "<<age;
	       gotoxy(45,19);
	       if(Class == 'E')
		 cout<<"TOTAL FAIR : "<<ecofair;
	       else
		 cout<<"TOTAL FAIR : "<<exefair;
	       do
	       {
		    gotoxy(10,23);
//		    //clreol();
		    cout<<"7CANCEL THIS TICKET (Y/N) : ";
		    ch = getch();
		    ch = toupper(ch);
	       }    while(ch != 'Y' && ch != 'N');

	       if(ch == 'N')
		 return;
	       DELETE_TICKET(tno);
	       gotoxy(10,25);
	       cout<<"7TICKET CANCELLED";
	       getch();
	  }


header file 5





  //MAKING GRAPH

   class graph
   {
     int gd,gm;
     public:
     void initg();
//     void xitg();
     void image(char bmpfile[]);
     void showtext(int x,int y,char name[]);
   };



void graph::image(char bmpfile[])
{
   FILE *file1;
  int xpos=0,  ypos=0;
  union
	{
	 int value;
	 char str[2];
	} ImageH, ImageW;

  unsigned long SizeOfBMP;

  unsigned char palette[16]={0,2,4,6,1,5,3,7,8,12,10,14,9,13,11,15};
  int  x,y,co;
  char s,byte,LowN,HighN;

  file1=fopen(bmpfile,"rb");

	if(file1!=NULL)
		{
		// get the width of BMP   0x0012 = 18
		fseek(file1, 0x0012, SEEK_SET);
		ImageW.str[0] = fgetc(file1);
		ImageW.str[1] = fgetc(file1);

		// get the height of BMP  0x0016 = 22
		fseek(file1, 0x0016, SEEK_SET);
		ImageH.str[0] = fgetc(file1);
		ImageH.str[1] = fgetc(file1);



		// get the height of BMP  0x00A  = 10
		fseek(file1, 0x00A, SEEK_SET);

		//now put the BMP image
		y = ypos+ImageH.value;

		fseek(file1, 0x0076, SEEK_SET);

		  while (y>ypos)
			  {
			for(x=xpos;x<(xpos+ImageW.value);)
			   {
				 byte  = fgetc(file1);
				 LowN  = (byte & 0x0F);          // 0x0F = 15
				 HighN = ((byte >> 4) & 0x0F);
				 putpixel(x, y, palette[HighN]);x++;
				 putpixel(x, y, palette[LowN]); x++;
			   }//end of for - x - loop
			y--;
			  }//end of while - y

	   //	feof(file1);



		fclose(file1);
		 }//if file exists and sucessfully opened
}//end of  main program


 // TEXT IN B M P(INSIDE COMPUTER)

 void graph ::  showtext(int x,int y,char name[])
  {
    int i,n;
    char txt[2];
    txt[1]='
