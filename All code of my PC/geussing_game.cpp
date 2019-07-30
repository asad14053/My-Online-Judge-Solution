// A Number Guessing Game //
		  // By:  Rakesh Juyal //
	      // I.T.S. Mohan Nagar, Gzb //
	       // mailme: juyalrules@yahoo.com //
		// mailme: rakesh@mindless.com //



#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"time.h"
#include"dos.h"

void display(char s[],int col);
void main()
{
	int ch,range=100;
	int num,try1=5,guess;

	char larger[5][40]={"Sir. Please guess a larger number.",
			"You Have to guess a little larger.",
			"Kya Aap isse bada nahi soch sakte. :-(",
			"Are yaar thoda bada socho.. :-(",
			"Aapke Liya Badaa Hee Behtar Hai..;-("
			};
	char smaller[5][42]={"Sir! Please guess a smaller number.",
			 "Ooops.. guess a little smaller. :-(",
			 "Oh.. Kya Aap isse chota nahi soch sakte.",
			 "Are Nahin.. yaar thoda chota socho.:-(",
			 "I'll go with him, who will have smaller."
			};
	char sorry[][49]={ "Aur Yeh Bilkul Galat guess Hai... ;-)",
			   "Aur Yeh Guess Bilkul Galat Hai.",
			   "Aapka Guess Galat Hai..",
			   "Foolish.",
			   "Are Bhaiyaa, Use the hints and Mind too.",
			   "Pathetic..",
			   "Disgusting.",
			   "Rooky..",
			   "Don't Quit Your Job Today.",
			   "I Can't Believe it.U R Wrong.",
			   "Congratulations! You r Stupid. ;-)",
			   "Here is the winner and still Champion of stupids."
			};

	char congrats[][42]={"Oh. Yeh Galat guess nahin hai..",
			   "Aur Yeh Bilkul Sahi guess Hai... ;-)",
			   "Oh my God.I Can't Believe. UR Correct.",
			   "Congratulations, You r Genius. :-) ",
			   "Here is the winner and still Champion.",
			   "I Can't Believe it. UR Right.",
			   "Foolish. Sorry Genius."
			};

	_setcursortype(0);
	do
	{
menu:	clrscr();
		gotoxy(25,8);
		display("1. PLAY",BROWN);
		gotoxy(25,10);
		display("2. OPTIONS",WHITE);
		gotoxy(25,12);
		display("3. EXIT",GREEN);
		display("


  Enter you Choice.:- ",YELLOW);
		ch=getche();
	}while((ch<'1')||(ch>'3'));
	randomize();

	guess=0;
	switch(ch)
	{
		case '1':
			clrscr();
			ch=random(range)+1;
			do
			{
				if(wherey()>23)
				{
					getch();
					clrscr();
				}
				printf("

 %d. Guess The Number.(1 to %d):- ",try1-guess,range);
				scanf("%d",&num);
				if(num==ch)
				{
					printf("	");
					display(congrats[random(7)],GREEN);
					printf("
		");
					display("YOU WIN",YELLOW+BLINK);
					getch();
					break;
				}
				guess++;
				if(guess==try1) break;
				else if(num<ch)
				{
					gotoxy(8,wherey());
					display(sorry[random(12)],GREEN);
					gotoxy(8,wherey()+1);
					display(larger[random(5)],YELLOW);
				}
				else if(num>ch)
				{
					gotoxy(8,wherey());
					display(sorry[random(12)],GREEN);
					gotoxy(8,wherey()+1);
					display(smaller[random(5)],YELLOW);
				}
			}while(guess<try1);
			if(guess>=try1)
			{
				gotoxy(8,wherey()+1);
				display(sorry[random(12)],RED);
				gotoxy(12,wherey()+1);
				display("The Answer Was:-  ",WHITE);
				cprintf("%d",ch);
				gotoxy(15,wherey()+1);
				display("YOU LOSE.",WHITE+BLINK);
				getch();
			}
			goto menu;

		case '2':
			clrscr();
			gotoxy(12,10);
			display("R A N G E : - ",WHITE);
			do
			{
				gotoxy(30,10);
				cprintf("         ");
				gotoxy(30,10);
				cprintf("%d",range);

				ch=getch();
				if(ch==0)
				{
					ch=getch();
					if ((ch==77)&&(range<500))
						range+=10;
					else if((ch==75)&&(range>10))
						range-=10;
				}
			}while(ch!='
');

			gotoxy(12,13);
			display("G U E S S E S : - ",YELLOW);
			do
			{
				gotoxy(32,13);
				cprintf("         ");
				gotoxy(32,13);
				cprintf("%d",try1);
				ch=getch();
				if(ch==0)
				{
					ch=getch();
					if ((ch==77)&&(try1<8))
					{
						try1+=1;
					}
					else if((ch==75)&&(try1>3))
					{
						try1-=1;
					}
				}
			}while(ch!='
');

			goto menu;
		case '3':
				gotoxy(1,25);
			 for(int i=0;i<20;i++)
			 {
				cprintf("
");
				delay(100);
			 }
			 gotoxy(35,10);
			 cprintf("Bye-Bye");
			 getch();
			 break;
	}
}

void display(char s[],int col)
{
	int i;
	textcolor(col);
	for(i=0;s[i]!='
