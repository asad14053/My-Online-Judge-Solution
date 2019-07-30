#include <graphics.h>
	#include <stdio.h>
	#include <conio.h>
	#include <stdlib.h>
	#include <dos.h>

	#define _LEFT	120
	#define _TOP	100
	#define _WIDTH  	40
	#define _HEIGHT  	35

	#define xBlockSpace  5
	#define yBlockSpace  5

	#define fixedBlockFillColor	RED
	#define fixedTextColor    	GREEN

	#define BlockFillColor1    	LIGHTBLUE
	#define BlockFillColor2    	GREEN
	#define playerTextColor   	RED

	#define SudokuTableColor   	GREEN

	#define BlockLineColor   	BLUE
	#define activeBlockLineColor    CYAN

	#define UP_ARROW      	72
	#define DOWN_ARROW  	80
	#define LEFT_ARROW    	75
	#define RIGHT_ARROW   	77
	#define F2	   	60
	#define F3	   	61

	#define AND	&&
	#define YA	||

	#define TRUE	1
	#define FALSE	0

	int Sudoku[9][3][3] = {0};
	int fixedBlocks[9][3][3] = {0};

	int activeBlock = 0;
	int activeRow = 0;
	int activeCol = 0;

	int graphicsON ( );
	int insertInto (  int block , int row , int col ,  int value );
	void DrawBlock( int block , int row , int col, int active );
	void keyPressed ( char keyCode );
	int isFixedBlock( int block = activeBlock, int row = activeRow, int col = activeCol );
	void initializeGame();
	void showHint();
	void DrawOut();
	void DrawAllBox();
	int isCompleted();
	void showWin();
	void signature();
	int Menu ();
	void drawMenu ( int selected , int defCol , int selCol );
	void HowToPlay();
	void About();
	void SaveGame();
	void LoadGame();
	void Play();

	/*
	¦¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¦
	¦    MAIN FUNCTION START   ¦
	¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	*/
	void main()
	{
	if ( graphicsON ( ) == FALSE ) return;
	int rep;

	Again:
	cleardevice();
	DrawOut ();
	rep = Menu();
	switch ( rep )
	{
	case 4:
	closegraph();
	return;
	case 1:
	/*
	 ______________________
	 ¯¦ Initialize Trick ¦¯
	  ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	*/
	initializeGame();
	Play();
	goto Again;
	case 2:
	HowToPlay();
	goto Again;
	case 3:
	About();
	goto Again;
	}
	}
	/*
	¦¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¦
	¦  MAIN FUNCTION COMPLETED ¦
	¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
	*/
	int graphicsON ( )
	{
	char path[128] = { "d:\tc\bgi" };
	int i = 0;

	while ( TRUE )
	{
	int g = DETECT , d;
	initgraph ( &g , &d , path );
	if ( i > 2 ) return FALSE;
	i++;

	if ( graphresult() != grOk )
	{
	printf ( "
 BGI file not found: [ EGAVGA.BGI ]" );
	printf ( "
 Enter the path of BGI directory:[ c:\tc\bgi ]-> " );
	gets ( path );
	}
	else
	{
	return TRUE;
	}
	}
	}

	int insertInto ( int block , int row , int col ,  int value )
	{
	if ( isFixedBlock( block , row , col ) ) return FALSE;

	if ( ( value > 9 ) || ( value < 0 ) ) return FALSE;
	if ( ( block >= 9 ) || ( block < 0 ) ) return FALSE;
	if ( ( row   >= 3 ) || ( row   < 0 ) ) return FALSE;
	if ( ( col   >= 3 ) || ( col   < 0 ) ) return FALSE;

	for ( int i = 0; i < 3; i++ )
	{
	for ( int j = 0; j < 3; j++ )
	{
	if ( Sudoku[block][i][j] == value )
	   //	return FALSE;
	return ( block + 1 )* 100 + i * 10 + j;
	}
	}
	int tempBlock = 3 * ( block / 3 );

	for ( i = 0; i < 3; i++ )
	{
	for ( int j = 0; j < 3; j++ )
	{
	if ( Sudoku[tempBlock + i][row][j] == value )
	//	return FALSE;
	return ( tempBlock + i + 1 )* 100 + row * 10 + j;
	}
	}

	tempBlock = block % 3;

	for ( i = 0; i < 3; i++ )
	{
	for ( int j = 0; j < 3; j++ )
	{
	if ( Sudoku[tempBlock + i * 3 ][j][col] == value )
	//	return FALSE;
	return ( tempBlock + i * 3 + 1 )* 100 + j * 10 + col;
	}
	}

	Sudoku[block][row][col] = value;

	return TRUE;
	}

	void DrawBlock( int block , int row , int col , int active )
	{
	int temp;

	temp = 3 * ( block % 3 );
	int x = temp * ( _WIDTH + xBlockSpace ) + _LEFT ;

	temp = 3 * ( block / 3 );
	int y = _TOP + temp * ( _HEIGHT + yBlockSpace );

	x = x + col * _WIDTH;
	y = y + row * _HEIGHT;
	char str[3];
	settextstyle ( 1 , 0 , 1 );
	int midTextWidth = textwidth ( "0" ) / 2;
	int midTextHeight = textheight ( "0" ) / 2;

	if  ( isFixedBlock( block , row , col ) )
	{
	setfillstyle ( 1 , fixedBlockFillColor );
	setcolor ( fixedTextColor );
	}
	else if ( Sudoku[block][row][col] != 0 )
	{
	setfillstyle ( 1 , BlockFillColor2 );
	setcolor ( playerTextColor );
	}
	else if ( Sudoku[block][row][col] == 0 )
	{
	setfillstyle ( 1 , BlockFillColor1 );
	}

	bar ( x , y , x + _WIDTH , y + _HEIGHT );
	if ( Sudoku[block][row][col] != 0 )
	{
	itoa ( Sudoku[block][row][col] , str , 10 );
	outtextxy ( x + _WIDTH / 2 - midTextWidth,
	y + _HEIGHT / 2 - midTextHeight, str );
	}

	setcolor ( active == TRUE ? activeBlockLineColor : BlockLineColor );
	rectangle ( x , y , x + _WIDTH , y + _HEIGHT );
	}

	void keyPressed ( char keyCode )
	{
	switch ( keyCode )
	{
	case UP_ARROW:
	if ( activeRow == 0 )
	{
	activeRow = 2;
	switch ( activeBlock )
	{
	case 0: case 1: case 2:
	activeBlock += 6;
	break;
	case 3: case 4: case 5:
	case 6: case 7: case 8:
	activeBlock -= 3;
	break;
	}
	}
	else
	{
	activeRow--;
	}
	break;
	case DOWN_ARROW:
	if ( activeRow == 2 )
	{
	activeRow = 0;
	switch ( activeBlock )
	{
	case 6: case 7: case 8:
	activeBlock -= 6;
	break;
	case 3: case 4: case 5:
	case 0: case 1: case 2:
	activeBlock += 3;
	break;
	}
	}
	else
	{
	activeRow++;
	}
	break;
	case LEFT_ARROW:
	if ( activeCol == 0 )
	{
	activeCol = 2;
	switch ( activeBlock )
	{
	case 0: case 3: case 6:
	activeBlock += 2;
	break;
	case 1: case 2: case 4:
	case 5: case 7: case 8:
	activeBlock -= 1;
	break;
	}
	}
	else
	{
	activeCol--;
	}
	break;
	case RIGHT_ARROW:
	if ( activeCol == 2 )
	{
	activeCol = 0;
	switch ( activeBlock )
	{
	case 2: case 5: case 8:
	activeBlock -= 2;
	break;
	case 0: case 1: case 3:
	case 4: case 7: case 6:
	activeBlock += 1;
	break;
	}
	}
	else
	{
	activeCol++;
	}
	break;
	}
//	if ( isFixedBlock() ) keyPressed ( keyCode );
	DrawBlock( activeBlock , activeRow , activeCol , TRUE );
	}

	int isFixedBlock( int block , int row , int col )
	{
	if ( fixedBlocks[block][row][col] == 1 )
	return TRUE;
	else
	return 0;
	}

	void showHint()
	{
	for ( int i = 1; i <=20 ; i++ )
	{
	if ( insertInto ( activeBlock , activeRow , activeCol , random ( 9 ) + 1 ) == TRUE )
	{
	DrawBlock ( activeBlock , activeRow , activeCol , TRUE );
	sound ( 140 );
	delay ( 300 );
	nosound ();

	return;
	}
	}
	sound ( 400 );
	delay ( 300 );
	nosound ();
	}

	void initializeGame()
	{
	int i, j, temp;
	randomize( );
	for ( i = 0; i < 9; i++ )
	{
	for ( j = 0; j < 3; j++ )
	{
	for ( int k = 0; k < 3; k++ )
	{
	Sudoku[i][j][k] = 0;
	fixedBlocks[i][j][k] = 0;
	}
	}
	}

	for ( i = 0; i < 9; i++ )
	{
	temp = random( 3 ) + 1;
	for ( j = 0; j < temp; j++ )
	{
	int row = random ( 3 );
	int col = random ( 3 );
	if ( insertInto ( i , row , col ,random ( 9 ) + 1 ) != TRUE )
	{
	j--;
	continue;
	}
	else
	{
	fixedBlocks[i][row][col] = 1;
	}
	}
	}
	}

	void DrawOut()
	{
	setbkcolor ( 8 );
	settextstyle ( 4 , 0 , 6 );

	char pattern[8] = { 254 ,2 ,250 ,138 ,186 ,162 ,190 ,128};

	setfillpattern ( pattern , 6 );
	setfillstyle ( 12 , 6 );
	bar ( 0 , 0 , 639 ,80 );
	setcolor ( 6 );
	rectangle ( 0 , 0 , 639 , 80 );

	setcolor ( 7 );
	outtextxy ( 31 , 1 , " SUDOKU " );
	setcolor ( RED );
	outtextxy ( 30 , 2 , " SUDOKU " );

	settextstyle ( 4 , 1 , 7 );
	setcolor ( 7 );
	outtextxy ( 11 , 101 , " SUDOKU " );
	setcolor ( RED );
	outtextxy ( 10 , 100 , " SUDOKU " );

	settextstyle ( 4 , 1 , 7 );
	setcolor ( 7 );
	outtextxy ( 531 , 101 , " SUDOKU " );
	setcolor ( RED );
	outtextxy ( 530 , 102 , " SUDOKU " );

	settextstyle ( 5 , 0 , 4 );
	setcolor ( 7 );
	outtextxy ( 301 , 9 , " By:  Rakesh Juyal " );
	setcolor ( GREEN );
	outtextxy ( 300 , 10 , " By:  Rakesh Juyal " );
	}

	int isCompleted()
	{
	int i , j , k;
	for ( i = 0; i < 9; i++ )
	{
	for ( j = 0; j < 3; j++ )
	{
	for ( k = 0; k < 3; k++ )
	{
	if ( Sudoku[i][j][k] == 0 )
	return FALSE;
	}
	}
	}
	return TRUE;
	}

	void showWin()
	{
	settextstyle ( 4 , 0  , 9 );

	for ( int i = 0; i <= 15; i += 1 )
	{
	setcolor ( i );
	outtextxy ( 50 + i, 150 + i , " YOU WIN " );
	}
	getch();
	return;
	}

	int Menu ()
	{
	int ch;
	int selected = 1;
	int TotalOptions = 4;
	setbkcolor ( 0 );
//	setbkcolor ( BLUE );
	signature();
	drawMenu ( selected , RED , GREEN );
	do
	{
	ch = getch();
	if ( ch == DOWN_ARROW )
	{
	selected = selected >= TotalOptions ? 1 : selected + 1;
	}
	else if ( ch == UP_ARROW )
	{
	selected = selected < 2 ? TotalOptions : selected - 1;
	}
	drawMenu ( selected , RED , GREEN );
	}while ( ch != '
' );

	return selected;
	}

	void signature()
	{
	setcolor ( BROWN );
	settextstyle ( 0 , 0 , 0 );
	outtextxy ( 350 , 400 , " Programmer: " );
	outtextxy ( 350 , 410 , "     mailto: " );
	outtextxy ( 350 , 420 , "     mailto: " );

	setcolor ( YELLOW );
	outtextxy ( 450 , 400 , " Rakesh Juyal " );
	outtextxy ( 450 , 410 , " juyalrules@Yahoo.com " );
	outtextxy ( 450 , 420 , " rakesh@mindless.com " );

	setcolor ( 12 );
	outtextxy ( 450 , 410 , "           @Yahoo.com " );
	outtextxy ( 450 , 420 , "       @mindless.com " );
	}

	void drawMenu ( int selected , int defCol , int selCol )
	{
	int x = 230;
	int y = 120;
	int width = 150;
	int height = 30;
	int i;
	int TotalOptions = 4;
	char menu_option[5][14]= {
	"    PLAY     ",
	" HOW TO PLAY ",
	"  ABOUT GAME " ,
	"     EXIT    "
	};
	setcolor ( WHITE );
	setfillstyle ( 1 , defCol );
	setlinestyle ( 0 , 0 , 0  );
	settextstyle ( 0 , 0 , 0 );

	for ( i = 1; i <= TotalOptions; i++ )
	{
	bar ( x , y , x + width , y + height );
	rectangle ( x , y , x + width , y + height );
	outtextxy ( x + 20 , y + 10 , menu_option[i - 1] );
	y = y + height + 30;
	}

	setfillstyle ( 1 , selCol );
	setcolor ( 14 );
	y = y - TotalOptions * ( height + 30 );
	y = y + ( selected - 1 ) * ( height + 30 );

	bar ( x , y , x + width , y + height );
	rectangle ( x , y , x + width , y + height );
	outtextxy ( x + 20 , y + 10 , menu_option[selected - 1] );
	}

	void HowToPlay()
	{
	cleardevice();
	DrawOut();
	setbkcolor ( 0 );
	settextstyle ( 0 , 0 , 0 );
	setcolor ( LIGHTGREEN );
	int y = 140 , yInc = 20;

	outtextxy ( 150 , y , " 1. Use arrow keys to move UP, DOWN, LEFT, RIGHT." );
	y = y + yInc;
	outtextxy ( 150 , y , " 2. Press the number you want to enter [ 1 - 9 ]." );
	y = y + yInc;
	outtextxy ( 150 , y , " 3. Press '?' to get the HINT." );
	y = y + yInc;
	outtextxy ( 150 , y , " 4. Press 'F2' to save the GAME." );
	y = y + yInc;
	outtextxy ( 150 , y , " 5. Press 'F3' to load the GAME." );
	y = y + yInc;

	y = y + yInc;
	outtextxy ( 150 , y , " 1. Fill all the blocks." );
	y = y + yInc;
	outtextxy ( 150 , y , " 2. Any number must not be repeated neither " );
	y = y + yInc;
	outtextxy ( 150 , y , "    horizontally, neither vertically, nor in Box." );

	setcolor ( WHITE );

	y = 120;
	outtextxy ( 80 , y , " Instructions:" );
	y = y + 6 * yInc;
	outtextxy ( 80 , y , " Objective:" );


	signature();
	getch();
	}

	void About()
	{
	cleardevice();
	DrawOut();
	setbkcolor ( 0 );
	settextstyle ( 0 , 0 , 0 );
	setcolor ( LIGHTGREEN );
	outtextxy ( 150 , 120 , " is a Japaneese Game. ( Actually i'm not sure )" );
	outtextxy ( 150 , 140 , " Use any search engine to find about it." );

	outtextxy ( 150 , 180 , " Rakesh Juyal " );
	outtextxy ( 150 , 200 , " back with another Game after SNAKE WAR. " );
	outtextxy ( 150 , 220 , " GOOD NEWS: SNAKE WAR will not have another version. " );

	outtextxy ( 150 , 260 , " If you have any suggestion, or encountered a bug" );
	outtextxy ( 150 , 280 , " feel free to mail me. " );

	setcolor ( WHITE );
	outtextxy ( 80 , 100 , " SUDOKU:" );
	outtextxy ( 80 , 160 , " Programmer:" );
	outtextxy ( 80 , 240 , " Bugs and Suggestions:" );

	signature();
	getch();
	}

	void SaveGame()
	{
	FILE *fp;
	fp = fopen ( "SUDOKU.001" , "w");

	settextstyle ( 2 , 0 , 6 );
	setcolor ( RED );
	setfillstyle ( 1 , 0 );
	if ( fp == NULL )
	{
	bar ( 200 , 460 , 500 , 480 );
	outtextxy ( 200 , 460 , " UNABLE TO SAVE " );
	delay ( 300 );
	bar ( 200 , 460 , 500 , 480 );
	return;
	}

	bar ( 200 , 460 , 500 , 480 );
	outtextxy ( 200 , 460 , " Saving... " );
	delay ( 300 );

	int i , j , k;
	for ( i = 0; i < 9; i++ )
	{
	for ( j = 0; j < 3; j++ )
	{
	for ( k = 0; k < 3; k++ )
	{
	fputc ( Sudoku[i][j][k] , fp );
	}
	}
	}

	for ( i = 0; i < 9; i++ )
	{
	for ( j = 0; j < 3; j++ )
	{
	for ( k = 0; k < 3; k++ )
	{
	fputc ( fixedBlocks[i][j][k] , fp );
	}
	}
	}
	bar ( 200 , 460 , 500 , 480 );
	outtextxy ( 200 , 460 , " Game Saved... " );
	delay ( 300 );
	bar ( 200 , 460 , 500 , 480 );

	fclose ( fp );
	}

	void LoadGame()
	{
	FILE *fp;
	fp = fopen ( "SUDOKU.001" , "r");

	settextstyle ( 2 , 0 , 6 );
	setcolor ( RED );
	setfillstyle ( 1 , 0 );
	if ( fp == NULL )
	{
	bar ( 200 , 460 , 500 , 480 );
	outtextxy ( 200 , 460 , " UNABLE TO OPEN " );
	delay ( 300 );
	bar ( 200 , 460 , 500 , 480 );
	return;
	}

	bar ( 200 , 460 , 500 , 480 );
	outtextxy ( 200 , 460 , " Reading... " );
	delay ( 300 );

	int i , j , k;
	int ch;

	for ( i = 0; i < 9; i++ )
	{
	for ( j = 0; j < 3; j++ )
	{
	for ( int k = 0; k < 3; k++ )
	{
	Sudoku[i][j][k] = 0;
	fixedBlocks[i][j][k] = 0;
	}
	}
	}

	for ( i = 0; i < 9; i++ )
	{
	for ( j = 0; j < 3; j++ )
	{
	for ( k = 0; k < 3; k++ )
	{
	ch = fgetc ( fp );
	Sudoku[i][j][k] = ch;
	}
	}
	}

	for ( i = 0; i < 9; i++ )
	{
	for ( j = 0; j < 3; j++ )
	{
	for ( k = 0; k < 3; k++ )
	{
	ch = fgetc ( fp );
	fixedBlocks[i][j][k] = ch;
	}
	}
	}
	fclose ( fp );

	bar ( 200 , 460 , 500 , 480 );
	outtextxy ( 200 , 460 , " Game Loaded... " );
	delay ( 300 );
	bar ( 200 , 460 , 500 , 480 );

	Play();
	}

	void Play()
	{
	char ch;

	cleardevice();
	DrawOut();
	setbkcolor ( BLACK );
	DrawAllBox();
	DrawBlock( activeBlock , activeRow , activeCol , TRUE );

	while ( TRUE )
	{
	ch = getch();
	if ( ( ch >= '0' ) && ( ch <= '9' ) )
	{
	int temp = insertInto ( activeBlock , activeRow , activeCol ,
	ch - '0' );
	if ( temp == TRUE )
	{
	DrawBlock ( activeBlock , activeRow , activeCol , TRUE );
	if ( isCompleted() )
	{
	showWin();
	//goto Again;
	return;
	}
	}
	else if ( temp == FALSE )
	{
	sound ( 700 );
	delay ( 400 );
	nosound ();
	}
	else
	{
	sound ( 500 );
	DrawBlock ( activeBlock , activeRow , activeCol , FALSE );
	DrawBlock ( temp / 100 - 1, ( temp / 10 ) % 10,
	temp % 10 , TRUE );
	delay ( 300 );
	DrawBlock ( temp / 100 - 1,  ( temp / 10 ) % 10,
	temp % 10 , FALSE );
	DrawBlock ( activeBlock , activeRow , activeCol , TRUE );

	nosound ();
	}
	}
	else if ( ch == '?' )
	{
	showHint();
	}
	else if ( ch == 0 )
	{
	ch = getch();
	if ( ch == F2 )
	{
	SaveGame();
	continue;
	}
	else if ( ch == F3 )
	{
	LoadGame();
	return;
	}
	DrawBlock( activeBlock , activeRow , activeCol , FALSE );
	keyPressed ( ch );
	}
	else if ( ch == 0x1b )
	break;
	}
	}

	void DrawAllBox()
	{
	int x , y;
	int i , j;
	int temp;

	setcolor ( BlockLineColor );
	settextstyle ( 1 , 0 , 1 );

	setlinestyle ( 0 , 0 , 3 );
	y = _TOP - yBlockSpace ;
	x = _LEFT - xBlockSpace;
	setcolor ( SudokuTableColor );

	for ( i = 0; i < 3; i++ )
	{
	for ( j = 0; j < 3; j++ )
	{
	rectangle ( x , y , x + 3 * _WIDTH + 2 * xBlockSpace  ,
	y + 3 * _HEIGHT + 2 * yBlockSpace );

	x = x + 3 * ( _WIDTH + xBlockSpace );
	delay ( 100 );
	}
	y = y + 3 * ( _HEIGHT + yBlockSpace ) ;
	x = _LEFT - xBlockSpace ;
	}

	x = _LEFT;
	y = _TOP;

	for ( i = 0; i < 9; i++ )
	{
	for ( j = 0; j < 3; j++ )
	{
	for ( int k = 0; k < 3; k++ )
	{
	DrawBlock ( i , j , k , FALSE );
	setcolor ( BlockLineColor );
	rectangle ( x , y , x + _WIDTH , y + _HEIGHT );
	x = x + _WIDTH;
	delay ( 10 );
	}
	y = y + _HEIGHT;
	temp = 3 * ( i % 3 );
	x = _LEFT + temp * ( _WIDTH + xBlockSpace );
	}

	temp = 3 * ( ( i + 1 ) % 3 );
	x = temp * ( _WIDTH + xBlockSpace ) + _LEFT ;
	temp = 3 * ( ( i + 1 ) / 3 );
	y = _TOP + temp * ( _HEIGHT + yBlockSpace );
	}
	}

