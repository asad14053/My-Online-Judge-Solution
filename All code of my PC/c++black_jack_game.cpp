Code :
/*
	C++ Blackjack 2.0
	Made by Paritosh Mathur
	11th August 2005
	Turbo C++
	The flow of the program control is dictated majorly by flags and
labels.

	Thank you for downloading the source code. I hope it proves to be
	educational and fun!

	Mail me your comments and suggestions at: parry_mathur@yahoo.com
	If there's a bug that needs fixing, do tell!

	Paritosh Mathur
*/
/********************************HEADERS**********************************
************/
#include <iostream.h>
#include <time.h>
#include<comm.h>
#include<process.h>
#include<ctype.h>
#include<dos.h>
#include<conio.h>
/************************** SEC 1:
GLOBAL******************************************/
void init_mm( );
void gencard();
void play();
void about();
void help();
int noanim = 0;
int number_range( int from, int to );
int number_mm( void );
static	int	rgiState[2+55]; // leave this alone

int number,suit;
char faceace,soot;
/*****************************SEC 2.
MAIN***********************************************/
void main()
{
	char a;
	clrscr();
	textcolor(WHITE);
	clrscr();
	if(noanim == 0)
	{
		for(int i=0;i<3;i++)
		{	sound(400);cout<<"
*";delay(100);nosound();delay(50);clrscr();cout<<" ";}
		for(i=0;i<3;i++)
		{	sound(500);cout<<"
*";delay(100);nosound();delay(50);clrscr();cout<<" ";}
		for(i=0;i<3;i++)
		{	sound(400);cout<<"
*";delay(100);nosound();delay(50);clrscr();cout<<" ";}
		for(i=0;i<3;i++)
		{	sound(1000);cout<<"
*";delay(100);nosound();delay(50);clrscr();cout<<" ";}
	}

	for(;;)
	{
		clrscr();
		cout<<"

				 C++ BLACKJACK";
		cout<<"


				     MENU";
		cout<<"

				1. NEW GAME";
		cout<<"
				2. ALL ABOUT BLACKJACK";
		cout<<"
				3. ABOUT THE PROGRAM";
		cout<<"
				4. EXIT";
		cout<<"


				PLEASE MAKE YOUR CHOICE";
		a=getch();
		if(a == '1')
		{	sound(1000);delay(100);nosound();play();}
		else if(a == '2')
		{	sound(1000);delay(100);nosound();help();}
		else if(a == '3')
		{	sound(1000);delay(100);nosound();about();}
		else if(a == '4')
		{	sound(1000);delay(100);nosound();exit(0);}
		else
		{
			sound(400);delay(100);nosound();
			cout<<"


				INCORRECT CHOICE";
			delay(500);
		}
	}
}
/***********************************SEC 4:
GAMEPLAY**************************************************/
void play()
{
	long bet;
	int sum1,sum2,b1,b2;
	int value;
	long money=10000;
	int doubledown;
	int iter;
	char f;
	rb:
	b1=0;
	b2=0;
	sum1=0;
	sum2=0;
	iter = 0;
	doubledown=0;
	clrscr();
	cout<<"
AFTER YOUR FIRST TWO CARDS HAVE BEEN DEALT, PRESS:

H TO
HIT
S TO STAND
D TO DOUBLE DOWN";
	cout<<"

You have a total of $ "<<money;
	cout<<"
Enter your bet(not exceeding $ 5000) $ ";
	cin>>bet;
	if(bet>5000)
	{cout<<"

NOT exceeding 5000!"; delay(1000); goto rb;}
	else if(bet<=0)
	{cout<<"

INVALID BET!"; delay(1000); goto rb;}
	else if(bet>money)
	{cout<<"

You don't have enough money!"; delay(1000); goto rb;}

	char a;
	int acecheck = 0;
	int prem=0;
	cout<<"

-->Dealer's First card:
";
			gencard();

		switch(number)
		{
			case 1:
			{value = 11; acecheck = 1;}break;
			case 11:
			{value = 10; acecheck = 0;}break;
			case 12:
			{value = 10; acecheck = 0;}break;
			case 13:
			{value = 10; acecheck = 0;}break;
		}

		if(number == 1 || number >10)
			sum2+=value;
		else
			sum2+=number;

		if( (acecheck == 1) && (sum2>21) )
		{
			sum2-=value;
			value = 1;
			sum2+=value;
		}
		if(number==1 || number>10)
			cout<<"
"<<faceace<<" "<<soot<<" (Dealer's Total: "<<sum2<<" )";
		else
			cout<<"
"<<number<<" "<<soot<<" (Dealer's Total: "<<sum2<<" )";

	delay(1000);
	cout<<"


-->Your first two cards:
";
	for(;;)
	{
		h:
		gencard();

		switch(number)
		{
			case 1:
			{value = 11; acecheck = 1;}break;
			case 11:
			{value = 10; acecheck = 0;}break;
			case 12:
			{value = 10; acecheck = 0;}break;
			case 13:
			{value = 10; acecheck = 0;}break;
		}

		if(number == 1 || number >10)
			sum1+=value;
		else
			sum1+=number;

		if( (acecheck == 1) && (sum1>21) )
		{
			sum1-=value;
			value = 1;
			sum1+=value;
		}
		iter++;
		if(number==1 || number>10)
			cout<<"
"<<faceace<<" "<<soot<<" (Your Total: "<<sum1<<" )";
		else
			cout<<"
"<<number<<" "<<soot<<" (Your Total: "<<sum1<<" )";
		if(iter == 2 && sum1 == 21)
		{
			cout<<"

BLACKJACK!";
			sound(1000);delay(100);nosound();
			sound(800);delay(200);nosound();
			sound(600);delay(300);nosound();
			sound(400);delay(400);nosound();
			iter = -1;
			goto bj;
		}
		if(sum1>21)
		{
			cout<<"

BUSTED!";
			sound(400);delay(500);nosound();
			delay(50);sound(400);delay(800);nosound();
			b1=1;
			break;
		}
		if(prem == 0)
			{prem++; delay(1000); goto h;}
		fg:
		if(doubledown == 1)
			break;
		a = getch();

			if (a == 's' || a == 'S')
				break;
			else if(a == 'H' || a == 'h')
				goto h;
			else if(a == 'D' || a == 'd')
			{
				if( bet*2 > money)
				{
					cout<<"

YOU CANNOT DOUBLE DOWN!
";
					for(int j=0;j<24;j++)
						cout<<"";
					sound(400);
					delay(500);
					nosound();
					goto fg;
				}
				else
				{
					bet*=2;
					doubledown = 1;
					goto h;
				}
			}
			else
			{sound(800);delay(250);nosound(); goto fg;}
	}

	acecheck = 0;

	cout<<"


Dealer's turn...";
	cout<<"
";
	for(;;)
	{
		gencard();

		switch(number)
		{
			case 1:
			{value = 11; acecheck = 1;}break;
			case 11:
			{value = 10; acecheck = 0;}break;
			case 12:
			{value = 10; acecheck = 0;}break;
			case 13:
			{value = 10; acecheck = 0;}break;
		}

		if(number == 1 || number >10)
			sum2+=value;
		else
			sum2+=number;

		if( (acecheck == 1) && (sum2>21) )
		{
			sum2-=value;
			value = 1;
			sum2+=value;
		}
		delay(1500);
		if(number==1 || number>10)
			cout<<"
"<<faceace<<" "<<soot<<" (Dealer's Total: "<<sum2<<" )";
		else
			cout<<"
"<<number<<" "<<soot<<" (Dealer's Total: "<<sum2<<" )";
		if(sum2>21)
		{
			cout<<"

DEALER BUSTED!";
			sound(400);delay(500);nosound();
			delay(50);sound(400);delay(800);nosound();
			b2=1;
			break;
		}

		if(sum2>=17)
			break;

	}
	bj:
	if(iter == -1)
		{
			for(int i=0;i<10;i++)
			{
				sound(1000+i);delay(100);nosound();
			}
			money+=bet;
		}
	if(b1 == 1 && b2 == 0)
		{
		cout<<"

Dealer wins hand!";
			for(int i=10;i>0;i--)
			{
				sound(1000+i);delay(100);nosound();
			}
			money-=bet;
		}
	else if(b1 == 1 && b2 == 1)
		{
			cout<<"

Dealer wins hand!";
			for(int i=10;i>10;i--)
			{
				sound(1000+i);delay(100);nosound();
			}
			money-=bet;
		}
	else if(b1==0 && b2 == 1)
		{
			cout<<"

You win the hand!";
			for(int i=0;i<10;i++)
			{
				sound(1000+i);delay(100);nosound();
			}
			money+=bet;
		}
	else if(b1==0 && b2 == 0)
	{
		if(sum1>sum2)
			{
				cout<<"

You win the hand!";
				for(int i=0;i<10;i++)
				{
					sound(1000+i);delay(100);nosound();
				}
				money+=bet;
			}
		else if(sum1<sum2)
			{
				cout<<"

Dealer wins hand!";
				for(int i=10;i>0;i--)
				{
					sound(1000+i);delay(100);nosound();
				}
				money-=bet;
			}
		else
			{
				cout<<"

It's a push!";
				for(int i=0;i<10;i++)
				{
					sound(1000+i);delay(100);nosound();
				}
				for(i=10;i>0;i--)
				{
					sound(1000+i);delay(100);nosound();
				}
			}
	}

	cout<<"

Your money: $ "<<money;
	cout<<"
Press Enter to deal again or escape to exit... ";
	ra:
	f=getch();
	if(f == ENTER && money!=0)
		goto rb;
	else if(f == ESC)
	{ noanim = 1;	main();}
	else if(f == ENTER && money == 0)
	  {cout<<"

NO MONEY"; noanim = 1; sound(800);delay(1000);nosound();
main();}
	else
	{
		sound(800);
		delay(500);
		nosound();
		goto ra;
	}
}

/*****************************SEC 5: CARD
GENERATOR**********************************/

void gencard()

	 {
		init_mm(); //seed the number generator
		number = number_range( 1, 13 );
		suit = number_range(1,4);
		switch(number)
		{
			case 1:
			{faceace = 'A';}break;
			case 11:
			{faceace = 'J';}break;
			case 12:
			{faceace = 'Q';}break;
			case 13:
			{faceace = 'K';}break;
		}

		switch(suit)
		{
			case 1:
			{soot = char(3);}break;
			case 2:
			{soot = char(4);}break;
			case 3:
			{soot = char(5);}break;
			case 4:
			{soot = char(6);}break;
		}
}
/****************************SEC 6:  RANDOM NUMBER
GENERATOR*******************************************/
int number_mm( void )


	 {
	 int *piState;
	 int iState1;
	 int iState2;
	 int iRand;
	 piState		= &rgiState[2];
	 iState1	 	= piState[-2];
	 iState2	 	= piState[-1];
	 iRand	 	= ( piState[iState1] + piState[iState2] )
				& ( ( 1 << 30 ) - 1 );
	 piState[iState1]	= iRand;
	 if ( ++iState1 == 55 )
		iState1 = 0;
	 if ( ++iState2 == 55 )
		iState2 = 0;
	 piState[-2]		= iState1;
	 piState[-1]		= iState2;
	 return iRand >> 6;
}
/*
* Generate a random number.
*/
int number_range( int from, int to )


	 {
	 int power;
	 int number;
	 if ( ( to = to - from + 1 ) <= 1 )
		return from;
	 for ( power = 2; power < to; power <<= 1 )
		;
	 while ( ( number = number_mm( ) & ( power - 1 ) ) >= to )
		;
	 return from + number;
}
/*
* this is the Mitchell-Moore algorithm from Knuth Volume II.
*/
void init_mm( )


	 {
	 int *piState;
	 int iState;
	 piState	= &rgiState[2];
	 piState[-2]	= 55 - 55;
	 piState[-1]	= 55 - 24;
	 piState[0]	= ( (int) time( NULL ) ) & ( ( 1 << 30 ) - 1 );
	 piState[1]	= 1;
	 for ( iState = 2; iState < 55; iState++ )


		  {
			piState[iState] = ( piState[iState-1] + piState[iState-2] )
					& ( ( 1 << 30 ) - 1 );
	 }
	 return;
}
/***************************************SEC 7: HELP AND
ABOUT**********************************************************/
void about()
{
	clrscr();
	cout<<"

			    ABOUT THE PROGRAM";
	cout<<"

C++ BLACKJACK

MADE BY PARITOSH MATHUR IN 2005

PLEASE
NOTE THAT THIS GAME IS FOR ENTERTAINMENT PURPOSES ONLY. NO MONEY OF
ANY
KIND IS AWARDED.

DISCLAIMER: THE AUTHOR TAKES AND SHALL TAKE NO
RESPONSIBILITY WHATSOEVER TOWARDSANY HARM OR DAMAGE OF ANY KIND THIS
PROGRAM MAY CAUSE";
	cout<<"


PRESS ANY KEY TO CONTINUE...";
	getch();
}

void help()
{
	clrscr();
	cout<<"


				ALL ABOUT BLACKJACK";
	cout<<"


BLACKJACK IS A POPULAR CASINO GAME PLAYED BETWEEN THE
PLAYER
AND THE CASINO
DEALER. THE OBJECT OF THE GAME IS TO BEAT THE DEALER'S
HAND WITHOUT GOING OVER
21.";
	cout<<"THE PLAYER STARTS BY PLACING A BET, AFTER WHICH THE DEALER
DEALS
HIMSELF A
CARD AND THEN DEALS THE PLAYER TWO CARDS. THE SUITS MEAN
NOTHING. THE PLAYER
SIMPLY ADDS UP THE CARD VALUES (WHERE NUMBERED
CARDS
HAVE THEIR RESPECTIVE
VALUES, FACE CARDS ARE WORTH 10 AND ACES CAN BE
WORTH 11 (SOFT ACE) OR 1
(HARD ACE) ).";
	cout<<"THE PLAYER THEN DECIDES WHETHER TO ASK THE DEALER FOR ANOTHER
CARD
(KNOWN AS HITTING), OR ALLOW THE DEALER TO DRAW HIS CARDS (KNOWN AS
STAYING OR
STANDING). THE DEALER MUST DRAW CARDS TILL HE GETS A TOTAL
OF
17 OR HIGHER. IF
THE DEALER GOES ABOVE 21 IN THE PROCESS, HE BUSTS.
LIKEWISE, THE PLAYER CAN BUSTIF HE OR SHE GOES ABOVE 21 WHILE
HITTING.";
	cout<<"IF NOBODY BUSTS, THEN THE PERSON WITH
THE GREATEST TOTAL WINS
THE
BET. IF THE PLAYER BUSTS, HE LOSES, IRRESPECTIVE OF WHETHER THE DEALER
BUSTS OR NOT.";
	cout<<"IF THE PLAYER DOES NOT BUST AND THE DEALER
BUSTS, THE PLAYER
WINS
THE BET.";
	cout<<"IN CASE OF BOTH PLAYERS GETTING THE SAME TOTAL,
THE SITUATION
IS
CALLED A PUSH. THE PLAYER GETS BACK THE AMOUNT HE STAKED AND
HIS TOTAL
EARNINGS REMAIN THE SAME.";
	cout<<" ACES ARE NORMALLY VALUED AT 11. HOWEVER, IF A HAND HAS AN ACE
OR
AN ACE IS DRAWN, SUCH THAT THE TOTAL GOES ABOVE 21, THE ACEIS
AUTOMATICALLY REVALUED AT 1, SO AS TO PREVENT A BUST. HOWEVER, A BUST
IS
INEVITABLE IN CASES LIKE HITTING AND DRAWING AN ACE ON A 21.";
	cout<<" APART FROM HITTING
AND STANDING, ANOTHER OPTION CALLED
DOUBLING
DOWN IS AVAILABLE. BY DOUBLING
DOWN, THE PLAYER TELLS THE DEALER TO
DEAL
ONLY ONE MORE CARD TO HIM AND TO
DOUBLE THE AMOUNT OF THE BET. IF THIS
CARD MAKES THE PLAYER'S TOTAL GREATER THANTHE DEALER'S, OR IF THE
DEALER
BUSTS, THE THE PLAYER WINS DOUBLE THE AMOUNT HE
PREVIOUSLY STAKED. IF,
HOWEVER, THE PLAYER GETS A LESSER TOTAL OR BUSTS, HE
LOSES DOUBLE THE
AMOUNT HE PREVIOUSLY STAKED.";
	cout<<" IF THE FIRST TWO CARDS DEALT TO
THE PLAYER ARE AN ACE AND A
TEN
VALUE CARD, IT'S CALLED A BLACKJACK AND MEANS
INSTANT VICTORY. THE
PLAYER
WINS DOUBLE THE AMOUNT HE STAKED.";
	cout<<"

TO PLAY C++ BLACKJACK, CHOOSE OPTION 1 IN THE MAIN MENU,
PLACE
A BET UNDER
$ 5000, AND WAIT TILL ALL CARDS HAVE BEEN DEALT. THEN
CHOOSE
H TO HIT, S TO
STAND OR D TO DOUBLE DOWN. YOU CANNOT BET AN AMOUNT
GREATER THAN YOUR TOTAL
EARNINGS. YOU START WITH A TOTAL OF $
10,000.";
	cout<<"


PRESS ANY KEY TO CONTINUE...";
	getch();
}

