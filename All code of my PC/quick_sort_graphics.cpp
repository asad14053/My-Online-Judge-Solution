	// Quick Sort //
		// By:  Rakesh Juyal //
		// I.T.S. Mohan Nagar, Gzb //
	     // mailme: juyalrules@yahoo.com //
	      // mailme: rakesh@mindless.com //



	#include <iostream.h>
	#include <stdio.h>
	#include <dos.h>
	#include <conio.h>

	#define   MAX	15

	#define ValueOf( x ) 	( x.value() )
	#define Exchange( x , y ) 	( x.exchange(y) )

	class element
	{
		int _value;
		int _color;
	public:
		element() { _color = 15; }
		void get()
		{
			scanf ( "%d", &_value );
		}
		int value (){	return _value;}
		void exchange ( element &e )
		{
			element temp;
			temp = e;
			e = *this;
			*this = temp;
		}

		void setcolor ( int col ) { _color = col; }

		void show()
		{
			textbackground ( _color );
			if ( _color == 15 )
			{
				textcolor ( 0 );
			}
			else
			{
				textcolor ( 15 );
			}
			cprintf ( " %d " , _value );
			printf ( " " );
		}
	};
	/*
	int element :: value ()
	{
		return _value;
	}
	  */
	void QuickSort ( element * , int , int );
	int partition ( element * , int  , int  );

	void Display  ( element *A , int p , int r );
	void main()
	{
		element array[MAX];
		int i = 1;

		textbackground ( 0 );
		textcolor ( 15 );
		clrscr ();
		printf ( "
 Enter %d elements:-
 > ", MAX - 1 );
		for ( i = 1; i < MAX; i++ )
			array[i].get();

		printf ( "
" );
		for ( i = 1; i < MAX; i++ )
			array[i].show();

		getch();
		printf ( "
" );
		QuickSort ( array , 1 , MAX - 1 );

		printf ( "
 " );
		for ( i = 1; i < MAX; i++ )
			array[i].show();

		getch();
	}

	void QuickSort ( element *A , int p , int r )
	{
		int q;
		if ( p < r )
		{
			q = partition ( A , p , r );
			QuickSort ( A , 1 , q - 1 );
			QuickSort ( A , q + 1 , r );
		}
	}

	int partition ( element *A , int p , int r )
	{
		int key , i = 1 , j = 1;

		key = ValueOf ( A[r] );
		A[r].setcolor ( RED );

		i = p - 1;
		for ( j = p ; j <= r; j++ )
		{
			if ( ValueOf ( A[j] ) <= key )
			{
				i = i + 1;
				Exchange ( A[j] , A[i] );
			}
			else
			{
//				A[j].setcolor ( BLUE );
			}
			Display ( A  , 1 , MAX );
			delay ( 100 );
		}

		A[i].setcolor ( GREEN );
		Display ( A  , 1 , MAX );
		printf ( "
 > %d at correct position. ", ValueOf ( A[i] ) );
		return i ;
	}

	void Display  ( element *A , int p , int r )
	{
		if ( wherey () > 23 )
		{
			getch();
			textbackground ( 0 );
			textcolor ( 15 );
			clrscr();
		}
		printf ( "

 " );
		for ( int i = p; i < r; i++ )
		{
			A[i].show();
		}
	}

