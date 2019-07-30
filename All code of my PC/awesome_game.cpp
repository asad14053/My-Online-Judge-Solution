Code :

#include<time.h>
#include<string.h>
#include<stdlib.h>
#include<iostream.h>
#include<stdio.h>
#include<conio.h>
/* The following are guessing game functions*/
void victory(char name[])
{   int a,c,d;char b,z,x,y;
	randomize();clrscr();
	b=1;y=2;
	for(int i=0;i<=99;i++)
	{   textcolor(random(15));
		c=rand();d=rand();
		c=(c%100);
		d=(d%100)/4;
		gotoxy(c,d);putch(b);
		c=rand();d=rand();
		c=(c%100);
		d=(d%100)/4;
		textcolor(random(15));
		gotoxy(c,d);putch(y);
	}
	int l=strlen(name);
	gotoxy(((80-l)/2)-4,10);
	textcolor(BLUE+BLINK);
	cprintf("%s has won!",name);
	gotoxy(30,15);
	textcolor(YELLOW+BLINK);
	cputs("Press enter to exit!");
}
void gclearm()
{   textbackground(BLACK);
	textcolor(LIGHTBLUE);
	for(int x=26,y=12;x<=56;x++)
	{   for(y=12;y<=13;y++)
		{   gotoxy(x,y);
			cprintf(" ");
		}
	}
	textbackground(BLACK);
	textcolor(LIGHTGRAY);
}
void gclearh()
{   textcolor(YELLOW);
	textbackground(BLACK);
	gotoxy(12,17);
	for(int i=0;i<=56;i++)
	{   cprintf(" ");
	}
	textbackground(BLACK);
	textcolor(LIGHTGRAY);
}
void gclearg()
{   textcolor(LIGHTRED);
	textbackground(BLACK);
	gotoxy(26,7);
	for(int i=0;i<=27;i++)
	{   cprintf(" ");
	}
	textbackground(BLACK);
	textcolor(LIGHTGRAY);
}
void boxes()
{   char ch;
	ch=205;int x,y;
	clrscr();
	textcolor(LIGHTGREEN);
	for(x=25;x<=54;x++)
	{   gotoxy(x,5);putch(ch);
		gotoxy(x,9);putch(ch);
	}
	for(x=10;x<=69;x++)
	{   gotoxy(x,15);putch(ch);
		gotoxy(x,19);putch(ch);
	}
	for(x=17;x<=61;x++)
	{   gotoxy(x,10);putch(ch);
		gotoxy(x,14);putch(ch);
	}
	ch=186;
	for(y=6;y<=8;y++)
	{   gotoxy(24,y);putch(ch);
		gotoxy(55,y);putch(ch);
	}
	for(y=16;y<=18;y++)
	{   gotoxy(9,y);putch(ch);
		gotoxy(70,y);putch(ch);
	}
	for(y=11;y<=13;y++)
	{   gotoxy(17,y);putch(ch);
		gotoxy(61,y);putch(ch);
	}
	gotoxy(24,5);ch=201;putch(ch);
	gotoxy(55,5);ch=187;putch(ch);
	gotoxy(24,9);ch=200;putch(ch);
	gotoxy(55,9);ch=188;putch(ch);
	gotoxy(9,15);ch=201;putch(ch);
	gotoxy(70,15);ch=187;putch(ch);
	gotoxy(9,19);ch=200;putch(ch);
	gotoxy(70,19);ch=188;putch(ch);
	gotoxy(17,10);ch=201;putch(ch);
	gotoxy(61,10);ch=187;putch(ch);
	gotoxy(17,14);ch=200;putch(ch);
	gotoxy(61,14);ch=188;putch(ch);
}
void play(int level,char name[])
{   int no,chk=1,guess;
	while(chk==1&& level<=3)
	{   chk=0;
		randomize();
		gclearh();
		switch(level)
		{   case 1: guess=random(100);
				gotoxy(12,17);
				cout<<"For level "<<level<<" the limits are :0-100!Press enter!";
				break;
			case 2: guess=random(1000);
				gotoxy(12,17);
				cout<<"For level "<<level<<" the limits are :0-1000!Press enter!";
				break;
			case 3: guess=random(10000);
				gotoxy(12,17);
				cout<<"For level "<<level<< " the limits are :0-10000!Press
enter!";
				break;
			default: guess=random(100);
		}
		getch();
		gotoxy(12,17);
		cout<<"At any time enter a -ve number in the guess box to exit!";
		getch();
		gotoxy(26,7);
		for(int i=0;i<10 ;i++)
		{   gclearh();gclearm();gclearg();
			gotoxy(28,13);
			cout<<"The current level is :" <<level;
			gotoxy(33,12);
			if((10-i)==1)
			{   textcolor(RED+BLINK);
				textbackground(WHITE);
				cprintf("Last Chance!");
				textcolor(LIGHTGRAY);
				textbackground(BLACK);
			}
			else cout<<"Chances left:"<<(10-i);
			gotoxy(26,7);
			cout<<"Enter your guess:";
			cin>>no;
			if(no<0)
			{   gclearh();gclearg();gclearm();
				gotoxy(12,17);
				cout<<"You entered the exit code.Exiting!Bye "<<name;
				getch();level=10;
				break;
			}
			if(no==guess)
			{   gclearh();
				gotoxy(12,17);
				cout<<"You Won! The guess is right!";
				chk=1;getch();
				gclearh();gclearg();gclearm();
				if(level<=2)
				{   gotoxy(12,17);
					cout<<"Moving you to the next level automatically!";
					getch();
				}
				else victory(name);
				break;
			}
			else if(no > guess)
			{   gclearh();
				gotoxy(12,17);
				cout<<"Your guess is too high!Press Enter to continue!";
				getch();
			}
			else if(no < guess)
			{   gclearh();
				gotoxy(12,17);
				cout<<"Your guess is too low!Press any key to continue!";
				getch();
			}
			gclearg();
		 }
		 if(chk==0)
		 {  gclearh();gclearg();gclearm();
			gotoxy(12,17);
			cout<<"Sorry! You Lost! The correct guess is:"
				<<guess<<" Bye "<<name<<".";
			getch();level=10;
		 }
		 if(chk==1)
			level++;
	}
}
void guessgame()
{    char name[25];
	 int level=0,guess;
	 textbackground(BLACK);
	 textcolor(LIGHTGRAY);
	 boxes();gotoxy(12,17);
	 cout<<"Enter your name:";
	 gets(name);
	 while(level<=0 || level>3)
	 {   gclearh();
		 gotoxy(12,17);
		 cout<<"Enter the level you want to start in: ";
		 cin>>level;
		 if(level<=0 || level>3)
		 {  gclearh();gotoxy(12,17);
			cout<<"Your input is beyond permissible limits!Press Enter!";
			getch();gclearh();
			gotoxy(12,17);
			cout<<"Enter a level between 1-3!Press enter!";
			getch();
		 }
	 }
	 int l=strlen(name);
	 gotoxy(((int)(80-l)/2),11);
	 textcolor(WHITE);
	 cputs(name);
	 textbackground(BLACK);
	 textcolor(LIGHTGRAY);
	 play(level,name);
}

/* All tic tac toe functions*/
void matrix()
{   int i,j;
	textcolor(14);
	char ch;
	ch=186;
	clrscr();
	for(i=1;i<=22;i=i+7)
	{   for(j=2;j<=9;j=j+1)
		{   gotoxy(i,j);putch(ch);	}
	}
	ch=205;
	for(j=2;j<=22;j++)
	{   for(i=1;i<=10;i=i+3)
		{   gotoxy(j,i);putch(ch);  }
	}
	int k=1;textcolor(WHITE);
	for(i=7;i<=21;i=i+7)
	{   for(j=2;j<=9;j=j+3)
		{   gotoxy(i,j);cprintf("%d",k);
			k++;
		}
	}
	textcolor(YELLOW);ch=206;
	gotoxy(8,4);putch(ch);gotoxy(15,4);putch(ch);
	gotoxy(8,7);putch(ch);gotoxy(15,7);putch(ch);
	ch=201;gotoxy(1,1);putch(ch);
	ch=200;gotoxy(1,10);putch(ch);
	ch=187;gotoxy(22,1);putch(ch);
	ch=188;gotoxy(22,10);putch(ch);
	ch=185;gotoxy(22,4);putch(ch);gotoxy(22,7);putch(ch);
	ch=204;gotoxy(1,4);putch(ch);gotoxy(1,7);putch(ch);
	ch=203;gotoxy(8,1);putch(ch);gotoxy(15,1);putch(ch);
	ch=202;gotoxy(8,10);putch(ch);gotoxy(15,10);putch(ch);
	textcolor(WHITE);
}
void position(int &x,int &y,int cell)
{   switch(cell)
	{   case 1: x=0;y=0;break;
		case 2: x=1;y=0;break;
		case 3: x=2;y=0;break;
		case 4: x=0;y=1;break;
		case 5: x=y=1;break;
		case 6: x=2;y=1;break;
		case 7: x=0;y=2;break;
		case 8: x=1;y=2;break;
		case 9:x=y=2;break;
	}
}
int player1(char name[])
{   int cellno;gotoxy(1,13);
	cout<<name<<": " ;
	cin>>cellno;
	return(cellno);
}
int player2(char name[])
{   int cellno;gotoxy(1,13);
	cout<<name<<": " ;
	cin>>cellno;
	return(cellno);
}
int checkrepeat(int mat[3][3],int cell)
{   int x,y;position(x,y,cell);
	if(mat[x][y]==0)
	   return(0);
	else return(1);
}
int check(int mat[3][3])
{	int i=0,j=0;
	while (j<3 )
	{	if (mat[i][j]==mat[i+1][j] && mat[i][j]==mat[i+2][j] &&
mat[i][j]!=0)
		{ if (mat[i][j]==1)
			return 1;
		  else if (mat[i][j]==2)
			return 2;
		}
		if (mat[j][i]==mat[j][i+1] && mat[j][i]==mat[j][i+2] && mat[j][i]!=0)
		{ if (mat[j][i]==1)
			return 1;
		  else if (mat[j][i]==2)
			return 2;
		 }
		 if (mat[0][0]==mat[1][1] && mat[1][1]==mat[2][2])
		 {   if (mat[0][0]==1)
				return 1;
			 else if (mat[0][0]==2)
				return 2;
		 }
		 if (mat[0][2]==mat[1][1] && mat[1][1]==mat[2][0])
		 {   if (mat[0][2]==1)
				return 1;
			 else if (mat[0][2]==2)
				return 2;
		 }
		 j++;
		 }
		 return(0);
}
void nutcross(int cell,int player)
{   int x,y;char a;
	switch(cell)
	{   case 1 :x=2;y=3;break;
		case 2 :x=2;y=6;break;
		case 3 :x=2;y=9;break;
		case 4 :x=9;y=3;break;
		case 5 :x=9;y=6;break;
		case 6 :x=9;y=9;break;
		case 7 :x=16;y=3;break;
		case 8 :x=16;y=6;break;
		case 9 :x=16;y=9;break;
	}
	if(player==2)
	{   a=257;textcolor(RED);
		gotoxy(x,y);putch(a);
	}
	else if(player==1)
	{   a=258;textcolor(BLUE);
		gotoxy(x,y);putch(a);
	}
}
void tclear()
{   int x,y;textcolor(WHITE);
	randomize();
	for(y=13;y<=25;y++)
	{   for(x=1;x<=79;x++)
		{   gotoxy(x,y);
			cputs(" ");
		}
	}
}
void ttt()
{   textcolor(WHITE);	textbackground(0);
	int mat[3][3]={0},i=0,cell;
	int flag=1,j,x,y,chk=0;
	gotoxy(1,12);
	char name1[25],name2[25];
	clrscr();
	cputs("Enter your first name(Player 1) : ");gets(name1);
	cputs("Enter your first name(Player 2) : ");gets(name2);
	matrix();tclear();textcolor(WHITE);	gotoxy(1,12);
	cputs("Enter the cell number where you want to play:");
	for( ; i<9;i++)
	{   if(flag ==1 )
		{   flag=2;cell=player1(name1);
			if(cell < 0)
			{   puts("You Entered the exit code!Exiting!");
				getch();i=10;
			}
			else
			{   if(checkrepeat(mat,cell) !=0)
				{   textcolor(RED+BLINK);
					cputs("This cell has been played in!");
					flag=1;i--;
					cputs("Press enter to retry! " );
					getch();textcolor(WHITE);
				}
				else
				{   nutcross(cell,flag);
					position(x,y,cell);mat[x][y]=1;
				}
			}
		}
		else if(flag ==2 )
		{   flag=1;cell=player2(name2);
			if(cell < 0)
			{   cputs("You entered the exit code.Exiting!");
				getch();i=10;
			}
			else
			{   if(checkrepeat(mat,cell) !=0)
				{   textcolor(RED+BLINK);
					flag=2;i--;
					cputs("This cell has been played in!");
					cputs("Press enter to retry! " );
					getch();textcolor(WHITE);
				}
				else
				{   nutcross(cell,flag);
					position(x,y,cell);mat[x][y]=2;
				}
			}
		}
		if(check(mat)==1)
		{   victory(name1);chk=1;
			break;
		}
		else if(check(mat)==2)
		{   getch();victory(name2);
			chk=1;break;
		}
		tclear();
	}
	if (chk==0)
		{   gotoxy(27,6);
			cout<<"The Game Has Been Drawn.";
		}
	getch();
}
/*The following functions are of HANGMAN*/
//THE FOLLOWING FUNCTION DISPLAYS THE CHARACTERS WHICH CAN BE USED
void usedchar(char used[],int u)
{   gotoxy(1,1);textcolor(DARKGRAY);
	cprintf("The characters which can be used are:");
	gotoxy(1,24);
	cprintf("Used Characters:");
	textcolor(LIGHTMAGENTA);gotoxy(1,2);
	char ch[53];
	int i=0,j=97;
/* 	AN ARRAY IS INITIALISED WHICH INITIALLY CONTAINS THE CAHARCTERS
FROM A TO Z. AS EACH CHARACTER IS GUESSED, THE ANALOGOUS CHARACTER
IS REPLACED BY A BLANK SPACE IN THE ARRAY AND EACH TIME, THE ARRAY
IS DISPLAYED ON THE FIRST LINE OF THE SCREEN.			*/
	for (;i<52;i++)
	{   if (i%2!=0)
		{ ch[i]=j;j++;
		}
		else ch[i]=' ';
	}
	for (i=0;i<=u;i++)
	{   for (j=0;j<52;j++)
		{   if ( ch[j]==used[i] )
			ch[j]=' ';
		}
	}
	gotoxy(1,2);
	for (i=0;i<52;i++)
		 putch(ch[i]);
}
/* THE FOLLOWING FUNCTION DISPLAYS A SEA TO WHICH THE MAN IS
HURTLED EACH TIME  THE USER MAKES A WRONG GUESS.	*/
void sea( )
{   textcolor(LIGHTBLUE);
	char ch=205;
	for (int i=18;i<24;i++)
	{   for (int j=1;j<=80;j++)
		{	gotoxy(j,i);
			putch(ch);
		}
	}
}
/* THE FOLLOWING FUNCTION CLEARS THE OLD MAN BEFORE THE MAN IS
HURTLED DOWN BY	ONE ROW TO THE SEA, EACH TIME THE USER MAKES A
WRONG GUESS.			*/
void clearoldman(int y)
{	for (int x=65;x<80;x++)
	{    for (;y<24;y++)
		 {	gotoxy(x,y);
			putch(' ');
		 }
	}
	sea( );
}
/*THE FOLLOWING FUNCTION TAKES THE X & Y COORDINATES OF THE END
POINT OF THE ROPE AND DRAWS A MAN FROM THAT POINT DOWNWARDS. */
void man(int x,int y)
{	char ch=202;
	textcolor(LIGHTRED);
	gotoxy(x,y);putch(ch);
	ch=196;
	textcolor(WHITE);
	for (int i=-2;i<=2;i++)
	{	gotoxy(x+i,y+3);putch(ch); 	}
	ch=203;gotoxy(x,y+3);putch(ch);
	ch=202;gotoxy(x,y+4);putch(ch);
	ch='/';gotoxy(x-1,y+1);putch(ch);
		   gotoxy(x+1,y+2);putch(ch);
		   gotoxy(x-1,y+5);putch(ch);
		   gotoxy(x-2,y+6);putch(ch);
	ch='\';gotoxy(x+1,y+1);putch(ch);
			gotoxy(x-1,y+2);putch(ch);
			gotoxy(x+1,y+5);putch(ch);
			gotoxy(x+2,y+6);putch(ch);
	sea( );
}
/* THIS FUNCTION GETS THE WORD AND A CONSTANT AND DRAWS A ROPE.
IF THE CONSTANT  IS EQUAL TO ZERO, IT DRAWS THE TO A LENGTH GREATER
THAN THE PREVIOUS LENGTH BY ONE.							*/
static int chk=7;
void rope(int bool,int &cnt)
{   textcolor(LIGHTRED);
	if (bool==0)
		chk++;
	static int x=70;int y;
	if(chk>16)
	{	cnt=2; ::chk=7; return;	}
	char ch=186;
	for (y=1;y<8;y++)
	{   gotoxy(x,y);
		putch(ch);
	}
	for (y=8;y<(::chk);y++)
	{	gotoxy(x,y);
		putch(ch);
	}
	// OLD MAN IS CLEARED, NEW MAN DRAWN.
	clearoldman(y-1);man(x,y);
}
/* CLEARING OF THE SCREEN  */
void hclear( )
{	for (int x=1;x<=80;x++)
	{	for (int y=6;y<24;y++)
		{	gotoxy(x,y);putch(' '); }
	}
	for (x=65;x<80;x++)
	{	for (int y=1;y<24;y++)
		{	gotoxy(x,y);putch(' '); }
	}
}
/*	THIS FUNCTION IS THE SPINAL CORD OF THE WHOLE GAME. IT GETS
A WORD. THEN IT ASKS THE USER IF HE WANTS TO ENTER A CHARACTER OR
THE WHOLE WORD. IT TAKES THE USER'S CHOICE AND ACCORDINGLY GETS
HIS INPUT. IF HIS INPUTTED	WORD IS RIGHT, IT TERMINATES GIVING
APPROPRIATE MESSAGE. IF THE CHARACTER INPUTTED IS THERE IN THE
WORD SELECTED, IT DISPLAYS IT. OTHERWISE, IF THE WORD GUESSED IS
WRONG OR A WRONG CHARACTER IS GUESSED, IT INSTRUCTS THE OTHER
FUNCTIONS TO LOWER THE MAN CLOSER TO THE SEA BY ONE ROW. */
int guess(char word[],int level)
{   int m=0,n=3,chk=0,bool=0,len,bht,u=-1;
	len=strlen(word);
	char ch,ges,guessw[15];
	char used[26]={"                          "};
	char string[50];
	for (int i=0;i<len;i++)
	guessw[i]='_';
	for (i=14;i>=len;i--)
	guessw[i]=' ' ;
	while(chk==0)
	{   bool=0;
		hclear( );sea( );rope(1,chk);
		textcolor(LIGHTCYAN);
		gotoxy(2,6);
		cprintf("Would you like to enter:

 (1) the whole");
		cprintf("word.

 (2) a character.

 (3) exit .");
		cprintf("

");cin>>ch;
		while ( ch!='1' && ch!='2' && ch!='3')
	   {	gotoxy(1,10);
			textcolor(CYAN);
			cprintf("Wrong input. Please enter 1,2 or 3 only: ");
			cin>>ch;
	   }
	   hclear( );
	   if (ch=='3')
	   {   	textcolor(WHITE);
			cprintf("

  Sorry, you lost. ");
			getch( );chk=2;return(chk);
	   }
	   gotoxy(3,5);
	   textcolor(LIGHTGREEN);
	   for (int i=0;i<len;i++)
			putch(guessw[i]);
	   rope(1,chk);sea( );
	   if (ch=='1')
	   {	gotoxy(2,6);textcolor(YELLOW);
			cprintf("Enter the word: ");
			gets(string);chk=0;
			bht=strcmp(string,word);
			if (bht==0)
		   {	chk=1; bool=1;
				gotoxy(10,12);textcolor(MAGENTA);
				cprintf("The correct word is: ");
				textcolor(BROWN);puts(word);
		   }
		}
		else if (ch=='2')
		{   bool=0;int pqr=1;u++;
			gotoxy(2,6);textcolor(YELLOW);
			cprintf("Enter the character: ");
			cin>>ges;
			while (ges<97 && ges>122)
			{	gotoxy(2,9);
				cprintf("Enter a charater from a to z only: ");
				cin>>ges;
			}
			for (int mno=0;mno<u;mno++)
			{	if (used[mno]==ges)
				   pqr=0;
			}
			while (pqr==0)
			{   gotoxy(2,6);
				for (int abc=1;abc<54;abc++)
					cprintf(" ");
				gotoxy(2,6);textcolor(CYAN);
				cprintf("This character has already been");
				cprintf("played, please renter:");
				cin>>ges;
				while (ges<97 && ges>122)
			   {  gotoxy(2,9);
				  cprintf("Enter a charater from a to z only: ");
				  cin>>ges;
			   }
				pqr=1;
				for (int mno=0;mno<u;mno++)
				{	if (used[mno]==ges)
					   pqr=0;
				}
			}
			used[u]=ges;
			for (int q=0;q<=u;q++)
				{	gotoxy(17+u,24);
					textcolor(LIGHTGREEN);
					putch(used[q]);
				}
			for (i=0;i<len;i++)
				{   if (word[i]==ges)
					  { gotoxy(n+i,5);
						putch(ges);bool=1;
						guessw[i]=ges;m++;
						if (m==level+2)
						   chk=1;
					  }
				}

		}
		usedchar(used,u);rope(bool,chk);sea( );
	}
	return(chk);
}
/* LEVEL WISE DICTIONARY */
static char LEV1[][4]={"cat","bat","hat","bet","pop","pin","big",
   "dog","bit","van"};
static char LEV2[][5]={"arch","alum","aqua","base","lass","bunk",
   "bank","loop","leaf","dame"};
static char LEV3[][6]={"scion","herbs","music","ideal","metre",
   "irate","poppy","octet","brush","salad"};
static char LEV4[][7]={"vector","pulses","bodkin","nimble",
   "scorch","scalar","dobbin","bursae","island","rotate"};
static char LEV5[][8]={"gravity","miserly","lagoons","adrenal",
   "consice","modesty","benzene","foolish","abdomen","inertia"};
static char LEV6[][9]={"destruct","ethylene","cochlear",
"conifers","engineer","ensconce","sidekick","matchbox",
"lattices","lacerate"};
static char LEV7[][10]={"assistant","amaryllis","cathedral",
"privateer","corrugate","botanical","reproduce","exorcisms",
"rigmarole","dogmatism"};
static char LEV8[][11]={"whipstocks","selectable","spirituous",
"exteriorly","seismology","coronaries","thrombosis","articulate",
"ancestress","neutralist"};
static char LEV9[][12]={"boondoggler","employments","cryptograph",
"geotropisms","obfuscatory","extemporary","polemicists",
"emulsifying","telecasting","suppurative"};
static char LEV10[][13]={"felicitously","attitudinize",
"untenability","nonobjective","expectorated","coordination",
"etherealizes","spectroscopy","trigonometry","checkerboard"};
/*THIS GETS THE WORD FROM THE DICTIONARY ACCORDING TO THE LEVEL
REQUIRED AND SEND THE WORD TO "GUESS" FUNCTON.				*/
void word(int level,char string[ ])
{   int l=level,m;randomize( );
	switch (l)
	{
	case 1:	strcpy(string,LEV1[ ( int ) ( rand()%10 ) ] );break;
	case 2:	strcpy(string,LEV2[ ( int ) ( rand()%10 ) ] );break;
	case 3:	strcpy(string,LEV3[ ( int ) ( rand()%10 ) ] );break;
	case 4:	strcpy(string,LEV4[ ( int ) ( rand()%10 ) ] );break;
	case 5:	strcpy(string,LEV5[ ( int ) ( rand()%10 ) ] );break;
	case 6:	strcpy(string,LEV6[ ( int ) ( rand()%10 ) ] );break;
	case 7:	strcpy(string,LEV7[ ( int ) ( rand()%10 ) ] );break;
	case 8:	strcpy(string,LEV8[ ( int ) ( rand()%10 ) ] );break;
	case 9:	strcpy(string,LEV9[ ( int ) ( rand()%10 ) ] );break;
	case 10:strcpy(string,LEV10[ ( int ) ( rand()%10 ) ] );break;
	}
}
void hangman( )
{	clrscr( );
	textcolor(GREEN);
	cprintf("Thank you for selecting to play Hangman. The game is very
simple



");
	cprintf("You get ten chances to guess a word generated by the
computer.



");
	cprintf("The number of letters in each word depends on the level
selected.


");
	cprintf("For each wrong guess of the word or the character, the man
moves
down


");
	cprintf("by one step. If you guess the word right, you win! So, lets
begin.

");
	gotoxy(10,10);
	cprintf("




 This programme has been authored by Srinath.R
and
Akshay.G.Kini !");
	getch( );clrscr( );
	char player[30];
	char string[50]={"
"};
	gotoxy(1,1);textcolor(RED);
	cprintf("Please enter your name:");
	gets(player);gotoxy(1,3);
	cprintf("Enter the level you want to play (1 to 10): ");
	int level,ch=0;	cin>>level;
	if (level>10 || level<1)
		ch=0;
	else ch=1;
	while(ch==0)
	{   gotoxy(1,5);textcolor(CYAN+BLINK);
		cprintf("Wrong Input.Please Renter:");
		cin>>level;
		if (level>10 || level<1)
			ch=0;
		else ch=1;
	}
	clrscr( );gotoxy(1,1);
	textcolor(DARKGRAY);
	cprintf("The characters which can be used are:

");
	gotoxy(1,2);char chr=97;
	textcolor(LIGHTMAGENTA);
	for (int x=0;x<52;x++)
	{    if (x%2!=0)
		 {   putch(chr);chr++;   }
		 else putch(' ');
	}
	word(level,string);
	int cnt=guess(string,level);
	if (cnt==1)
	{   gotoxy(10,10);textcolor(MAGENTA);
		cprintf("You won, Congratulations!!!");
	}
	else if (cnt==2)
	{   gotoxy(10,10);textcolor(MAGENTA);
		cprintf("You Lose. The correct word was: ");
		textcolor(BROWN);puts(string);
	}
	::chk=7;textcolor(WHITE);getch( );
}
void main( )
{   int ch=1;
	while (ch==1)
	{   clrscr( );
		textcolor(YELLOW);
		textcolor(LIGHTMAGENTA);
		cprintf("Welcome to the GAMERZ, the game paradise.");
		textcolor(YELLOW);
		cprintf("


 Choose the game you wish to play:");
		textcolor(LIGHTBLUE);
		cprintf("


           1.  Tic-Tac-Toe ");
		textcolor(LIGHTRED);
		cprintf("


           2.  Hangman ");
		textcolor(LIGHTGREEN);
		cprintf("


           3.  Guessing Game ");
		textcolor(WHITE);
		cprintf("


           4.  Exit ");
		cprintf("



 Plese enter your choice: ");
		int choice=0;
		cin>>choice;
		while ( choice<1 && choice>4)
		{
			gotoxy(1,10);
			cprintf("Wrong Input. Please enter a number between 1 & 4 only: ");
			getch( );
			cin>>choice;
			getch( );
		}
		switch(choice)
		{
			case 1: ttt( );break;
			case 2: hangman( );break;
			case 3: guessgame( );break;
			case 4: textcolor(LIGHTCYAN);
					cprintf("



 Thank You for playing. Hope you enjoyed
yourself.
Bye!!!");
					ch=0;
					break;
		}
	}
	getch( );
}



