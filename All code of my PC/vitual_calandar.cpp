#include "conio.h"
#include "stdlib.h"
#include "dos.h"
#include "string.h"
#include "stdio.h"

void draw(int, int);  		//DRAWS BOX WITH MONTH & YEAR IN HEADER
void show_time();     		//DISPLAYS CURRENT TIME IN FOOTER OF BOX
void print_cal( int, int); //PRINTS DATES WITHIN BOX
int getkey();              //SCANS USER KEY AND RETUEN ITS SCAN CODE
int first_day( int, int ); //DETEMINES FIRST DAY OF MONTH
int today;

void main()
{
	int year, month;
	char ch;
	struct date d;
	getdate(&d);        //RETUNS CURRENT DATE
	year = d.da_year;
	month = d.da_mon - 1;
	today = d.da_day - 1;     //GET CURRENT DATE
	print_cal(year, month); //PRINTS CALENDER OF CURRENT MONTH
	flushall();
	while((ch = getkey()) != 1) //KEEP TRACK OF KEYS UNTILL 'ESC' PRESSED
	{
		switch(ch)
		{
			case 72: year++;  //UP ARROW KEY
						break;
			case 80: year--; //DOWN ARROW KEY
						break;

			case 77: month++;        //RIGHT ARROW KEY
						if(month > 11)
						{
							month = 0;
							year++;
						}
						break;
			case 75: month--;       //LEFT ARROW KEY
						if(month < 0)
						{
							month = 11;
							year--;
						}
						break;
		}
		print_cal(year, month);  //PRINTS CALENDER OF CHANGED MONTH OR YEAR
	}
}
void show_time()
{
	struct  time t;
	while(!kbhit())
	{
		textcolor(YELLOW);
		gettime(&t);  			//GET CURRENT TIME
		gotoxy(22,2);
		if(t.ti_hour < 13)
			printf(" CURRENT TIME => %2d:%02d:%02d AM",t.ti_hour, t.ti_min,
t.ti_sec);
		else
		{
			t.ti_hour -= 12;
			printf(" CURRENT TIME => %2d:%02d:%02d PM",t.ti_hour, t.ti_min,
t.ti_sec);
		}

		delay(1000);
	}
}

int first_day(int year, int month)  //DETEMINES FIRST DAY OF MONTH
{
	int mdays[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304,
334};
	int lpyear = ((year-1900)/4) + ((year-1900)/400) - ((year-1900)/100);
	long unsigned days = ((year-1900)*365) + lpyear + mdays[month];
	return days % 7;
}
int getkey()    //SCANS USER KEY AND RETURN ITS SCAN CODE
{
	union REGS i,o;
	while(!kbhit())
		;
	i.h.ah = 0;
	int86(22,&i,&o);
	return(o.h.ah);
}
void draw(int year, int month) //DRAWS BOX WITH MONTH & YEAR IN HEADER
{
	char *mo[] = { "January", "Feburary", "March", "April",
						"May", "June", "July", "August", "September",
						"October",  "November", "December" };
	char *day[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	int i, j;
	int ro = 205, co = 186;  //GARPH CHAR 205 '-', 186 '¦'
	clrscr();
	gotoxy(16, 8);
	printf("USE ARROW KEYS TO NAVIGATE AND ESC KEY TO CLOSE");
	for( i = 16; i <= 65; i++)
	{	gotoxy(i,10);
		printf ("%c",ro);
		gotoxy(i,14);
		printf ("%c",ro);
		gotoxy(i,36);
		printf ("%c",ro);
		gotoxy(i,40);
		printf ("%c",ro);
	}
	for(i = 11; i <= 39; i++)
	{	gotoxy(15,i);
		printf ("%c",co);
		gotoxy(66,i);
		printf ("%c",co);
	}
	gotoxy(15,10);
	printf("%c",201);  //GARPH CHAR 201 '+'
	gotoxy(66,10);
	printf("%c",187);  //GARPH CHAR 187 '+'
	gotoxy(15,40);
	printf("%c",200);  //GARPH CHAR 200 '+'
	gotoxy(66,40);
	printf("%c",188);  //GARPH CHAR 188 '+'
	gotoxy(15,14);
	printf("%c",204);  //GARPH CHAR 204 '¦'
	gotoxy(66,14);
	printf("%c",185);  //GARPH CHAR 185 '¦'
	gotoxy(15,36);
	printf("%c",204);  //GARPH CHAR 204 '¦'
	gotoxy(66,36);
	printf("%c",185);  //GARPH CHAR 185 '¦'

	textcolor(YELLOW + BLINK);
	int hed_sp = 16 +((49 - (strlen(mo[month]) + 5))/2); //ALLIGN HEADER
TO
CENTER
	gotoxy(hed_sp,12);
	cprintf("%s %d",mo[month],year);
	window(16,15,65,35);
	clrscr();
	for(i=1, j = 0; i<49; i+=7,j++) //PRINT DAY NAMES
	{
		  if(i < 7)
		textcolor(RED); // FOR SUNDAY
		  else
		textcolor(YELLOW); //OTHER THAN SUNDAY
		gotoxy(i,3);
		cprintf("%5s",day[j]);
	}
}
void print_cal(int year, int month)
{
	int i, j, start, count, limit;
	textmode(64);
	start = first_day(year, month);
	count = 0, limit = 31;
	draw(year, month);
	if( month == 3 || month == 5 || month == 8 || month == 10 )
	limit = 30;     //FOR APRIL, JUNE, SEPT, NOV
	if(month == 1 ) //FOR FEB
		limit = (year% 4==0 && year%100 != 0 || year%400==0)? 29: 28;
	for(j=7; j< 20; j+=3) //ROW COUNTER
	{
	  for(i=1; i<49; i+=7) //COLUMN COUNTER
	  {
			if(i < 7)
				textcolor(RED);     //DATES ON SUNDAY
			else
				textcolor(YELLOW);
			gotoxy(i,j);
			if(start)
				start--;     //EMPTY SPACES TILL NUMBERING STARTS
			else
			{
				if(count == today)      //HILIGHT CURRENT DATE
				{
					textcolor(BLUE);
					textbackground(YELLOW);
				}
				else
				{
					textcolor(YELLOW);
					textbackground(BLACK);
				}
				cprintf("%4d",count+1);   //PRINT DATE
				count++;
			}
			if(count >= limit)
				break;
		}
	}
	if(count <= 30 && count < limit) //FOR PRINTING IN FIRST ROW IF ALL
ROWS
EXUASTED
	{  for(i=1; i<49; i+=7)
		{
		if(i < 7)
			textcolor(RED);
		else
			textcolor(YELLOW);
		gotoxy(i,7);
		if(count == today)
		{
			textcolor(BLUE);
			textbackground(YELLOW);
		}
		else
		{
			textcolor(YELLOW);
			textbackground(BLACK);
		}
		cprintf("%4d",count+1);
		count++;
		if(count >= limit)
		break;
		}
	}
	window(16,37,65,39);  //SETS WINDOW TO BOTTOM OF BOX
	show_time();          //SHOWS TIME
}

