// [ MAGIC CARD TRICK - 1]
		// By:  Rakesh Juyal //
		// I.T.S. Mohan Nagar, Gzb //
	     // mailme: juyalrules@yahoo.com //
	      // mailme: rakesh@mindless.com //

	#include <stdio.h>
	#include <conio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <dos.h>

	#define Col	5
	#define Row	(Col-1)

	void _rectangle ( int left , int top , int right , int bottom );
	void Initialize ( int Grid[Row][Col] );
	int Any_Zero_Remaining_In_Row ( int Grid[Row][Col] , int i );
	void InitializeTrick ( int MagicGrid[Row][Col] );

	class Card
	{
		char _num[ Row * Col ] , _suit[ Row * Col ];
		char top;
	public:
		Card(){ top = 0;}
		void show( int i )
		{
			if ( ( _suit[i] == 3 ) || ( _suit[i] == 4 ) )
				textcolor ( RED );
			else
				textcolor ( DARKGRAY );

			cprintf ( "%c%c", _num[i] , _suit[i] );
		}
		int HaveSame( char num , char suit , int i )
		{
			if ( ( num == _num[i] ) && ( suit == _suit[i] ) )
				return 1;
			else
				return 0;
		}
		void set( char num , char suit , int i )
		{
			_num[i] = num;
			_suit[i] =suit;
			top = top + 1;
		}
		int Card_Used ( char num , char suit )
		{
			for ( int i = 0; i < top; i++ )
			{
				if ( ( num == _num[i] ) && ( suit == _suit[i] ) )
					return 1;
			}
			return 0;
		}
		void InitializeCards ( );
	};

	void DisplayCards ( Card Cards );
	void DisplayCardsInGrid ( Card Cards , int MagicGrid[Row][Col] );
	void message2( char *msg , int x , int y , int times , int col1 = 8 ,
int
col2 = 7 );
	int WhatIsCommon( int MagicGrid[Row][Col] , int i , int j );

	void main ()
	{
	/***** Variables *******/
		int MagicGrid[Row][Col];
		int i ,j;
		int TotalCards;
		Card Cards;

	/***** Variables *******/

		clrscr();

		_setcursortype ( 0 );

		gotoxy ( 20 , 5 );
		textcolor ( RED );
		cprintf ( "Dont Press Any Key . . ." );
		message2("Magic Created By:- " , 30 , 10 , 1 , CYAN);
		message2("Rakesh Juyal" , 40 , 11 , 2 , BLUE );

		gotoxy ( 20 , 5 );
		textcolor ( GREEN );
		message2( "     Press Any Key . . ." , 20,5,0 , GREEN);
//		cprintf ( "     Press Any Key . . ." );

		getch ();
		clrscr();
		TotalCards = Row * Col ;
		Cards.InitializeCards (  );

		InitializeTrick ( MagicGrid );

		textcolor ( GREEN );
		_rectangle ( 1 , 1 , 79 , 24 );
		DisplayCards ( Cards );

		gotoxy ( 30 , 23 );
		textcolor ( CYAN + BLINK );
		cprintf ( " Choose Any Pair " );

		textcolor ( GREEN + BLINK );
		gotoxy ( 29 , 24 );
		cprintf ( " And Press Any Key " );
		getch();
		textcolor ( YELLOW );

		clrscr ();

		DisplayCardsInGrid ( Cards , MagicGrid );

		gotoxy ( 1 , 23 );
		_setcursortype ( 2 );
		textcolor ( CYAN );
		cprintf ( "Enter the rows having your Cards [ row1 row2 ]:-    " );
		scanf ( "%d%d",&i , &j );
		if ( ( i <= Row ) && ( i > 0 ) && ( j <= Row ) && ( j > 0 ) )
		{

			i = WhatIsCommon( MagicGrid , i - 1 , j - 1 );

			clrscr();
			gotoxy ( 5 , 3 );
			textcolor ( GREEN );
			cprintf ( "Your Cards Are:- " );
			textcolor ( WHITE );
			_rectangle ( 12 , 5 , 20 , 13 );
			_rectangle ( 25 , 5 , 33 , 13 );

			gotoxy ( 13 , 6 );
			Cards.show(i * 2 - 2);

			gotoxy ( 26 , 6 );
			Cards.show(i * 2 - 1);
		}
		else
		{
			textcolor ( RED );
			cprintf ( "Valid entries are like:-  ( 1 1 )  or ( 2 1 ). Dont input braces.");
			printf ( "
" );
			cprintf ( "InValid entries are like:-  ( 0 1 )  or ( 2 0 ) or ( 1,1 ) or ( 2,1 )");
		}

		getch();

		_setcursortype ( 2 );
	}

	void _rectangle ( int left , int top , int right , int bottom )
	{
		int i  = 0;
		/****** Horizontal Lines ******/
		for ( i = left; i <= right; i++ )
		{
			gotoxy ( i , top );
			putch ( '-' );

			gotoxy ( i , bottom );
			putch ( '-' );
		}

		/****** Vertical Lines ******/
		for ( i = top; i <= bottom; i++ )
		{
			gotoxy ( left , i );
			putch ( '¦' );

			gotoxy ( right , i );
			putch ( '¦' );
		}

	       /********* Corners ******/
	       gotoxy ( left , top );
	       putch ( '+' );

	       gotoxy ( right , top );
	       putch ( '+' );

	       gotoxy ( left , bottom );
	       putch ( '+' );

	       gotoxy ( right , bottom );
	       putch ( '+' );

	}

	void Initialize ( int Grid[Row][Col] )
	{
		int i , j;
		for ( i = 0; i < Row; i++ )
			for ( j = 0; j < Col; j++ )
				Grid[i][j] = 0;
	}

	void InitializeTrick ( int MagicGrid[Row][Col] )
	{
		int  i , j , k = 1;
		int loc;

		Initialize ( MagicGrid );

		randomize();
		for ( i = 0; i < Row; i++ )
		{
			MagicGrid[i][ random ( Col ) ] = k;
			do
			{
				loc = random ( Col );
			}while ( MagicGrid[i][loc] != 0 );
			MagicGrid[i][ loc ] = k;
			k = k + 1;
		}

		for ( i = 0; i < Row ; i++ )
		{
			j = i + 1;
			while ( Any_Zero_Remaining_In_Row ( MagicGrid , i ) )
			{
				do
				{
					loc = random ( Col );
				}while ( MagicGrid[i][loc] != 0 );
				MagicGrid[i][ loc ] = k;

				do
				{
					loc = random ( Col );
				}while ( MagicGrid[j][loc] != 0 );
				MagicGrid[j][ loc ] = k;
				if ( j < Row )  j = j + 1;
				k = k + 1;
			}
		}
	}



	int Any_Zero_Remaining_In_Row ( int Grid[Row][Col] , int i )
	{
		int  j;
		for ( j = 0; j < Col; j++ )
		{
			if ( Grid[i][j] == 0 )
				return 1;
		}
		return 0;
	}

	void Card :: InitializeCards ( )
	{
		char num , suit;
		int i , TotalCards;

		TotalCards = Row * Col ;
		for ( i = 0; i < TotalCards; i = i + 1 )
		{
			_num[i] = 0;
			_suit[i] = 0;
		}

		randomize();
		for ( i = 0; i < TotalCards; i = i + 1 )
		{
			do
			{
				num = random ( 12 ) + 1;
				suit = random ( 4 ) + 3;

			switch ( num )
			{
				case 1:
					num = 'A';
					break;
				case 10:
					num = 'J'; // Surprised why [ J should be 11 ? No]
					break;
				case 11:
					num = 'Q';
					break;
				case 12:
					num = 'K';
					break;
				default:
					num = num + '0';
			}
			}while ( Card_Used ( num , suit ) );

			set ( num , suit , i );
		}

	}

	void DisplayCards ( Card Cards )
	{
		int i , j , k;
		int TotalCards;
		int Rand[ Row * Col ] = {0};

		TotalCards = Row * Col / 2 ;

		randomize();
		for ( i = 0; i < TotalCards; i++ )
		{
			while ( 1 )
			{
				k = random ( TotalCards );
				for ( j = 0; j < i; j++ )
				{
					if ( Rand[j] == k )
						break;
				}
				if ( j == i )	break;
			}
			Rand[i] = k;
		}

		j = 5;
		k = 2;

		for ( i = 0; i < TotalCards; i = i + 1 )
		{
			textcolor ( WHITE );

			_rectangle ( j , k , j + 8 , k + 2 );
			_rectangle ( j , k + 2 , j + 8 , k + 6 );

			gotoxy ( j , k + 2 );
			putch ( '+' );

			gotoxy ( j + 8 , k + 2 );
			putch ( '¦' );

			gotoxy ( j + 1 , k + 1 );
			Cards.show( Rand[ i ] * 2 );

			gotoxy ( j + 1 , k + 3 );
			Cards.show( Rand [ i ] * 2 + 1 );

			delay ( 100 );
			j = j + 10;
			if ( j > 71 )
			{
				j = 5;
				k = k + 7;
			}
		}
	}

	void DisplayCardsInGrid ( Card Cards , int MagicGrid[Row][Col] )
	{
		int i , j;
		int x , y , xinc , yinc ;
		char first[( Row * Col ) + 1];

		for ( i = 0; i < Row * Col; i++ )
			first [i] = '0' ;

		x = y = 2;

		yinc = ( 23 - Row ) / Row;
		xinc = yinc + 1;

		for ( i = 0; i < Row; i = i + 1 )
		{
			gotoxy ( 1 , y + 1 );
			cprintf ( "%d", i + 1 );
			x = 2;
			for ( j = 0; j < Col; j = j + 1 )
			{
				textcolor ( WHITE );
				_rectangle ( x , y , x + xinc , y + yinc );

				gotoxy ( x + 1 , y + 1 );

				if ( first [ MagicGrid[i][j] - 1] == '0' )
					Cards.show(MagicGrid[i][j] * 2 - 2);
				else
					Cards.show( MagicGrid[i][j] * 2 - 1 );

				delay ( 100 );
				first [ MagicGrid[i][j] - 1 ] = '1';
				x = x + xinc + 4;
			}
			y = y + yinc + 1 ;
		}
	}

	int WhatIsCommon( int MagicGrid[Row][Col] , int i , int j )
	{
		int k ,l;
		if ( i == j )
		{
		for ( k = 0; k < Col - 1; k++ )
		{
		for ( l = k + 1; l < Col; l++ )
		{
		if ( MagicGrid[i][k] == MagicGrid[i][l] )
			return MagicGrid[i][k];
		}
		}
		}
		else
		{
		for ( k = 0; k < Col; k++ )
		{
		for ( l = 0; l < Col; l++ )
		{
		if ( MagicGrid[i][k] == MagicGrid[j][l] )
			return MagicGrid[i][k];
				}
			}
		}
		return 0;
	}

	void message2( char *msg , int x , int y , int times , int col1 , int col2 )
	{
		int len = 0 , i , j = 0;
		char *temp;

		temp = msg;
		while ( *msg++ != '
