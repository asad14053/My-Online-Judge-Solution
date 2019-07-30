// The Mind Reader Game

#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>

void First_Card(void);void Second_Card(void);
void Third_Card(void);void Fourth_Card(void);
void Fifth_Card(void);void Sixth_Card(void);
void Analyze(void); Check(void);
void main(void)
{  int ans=0,in=0;
   clrscr();
   _setcursortype(_NOCURSOR);
   First_Card();
     in=Check(); if (in==0) ans+=1;
   Second_Card();
     in=Check(); if (in==0) ans+=2;
   Third_Card();
     in=Check(); if (in==0) ans+=4;
   Fourth_Card();
     in=Check(); if (in==0) ans+=8;
   Fifth_Card();
     in=Check(); if (in==0) ans+=16;
   Sixth_Card();
     in=Check(); if (in==0) ans+=32;
     textcolor(WHITE);textbackground(BLACK);
     clrscr(); Analyze();     clrscr();
   if(ans>60) {gotoxy(20,12);printf("You Entered Incorrect Information.");}
   else
   {gotoxy(28,13);printf("Your No Is : "%d"",ans);}
   gotoxy(20,14);printf("Thanks For Using This Program... ");
   gotoxy(30,22);printf("Made By : ");
   gotoxy(37,23);printf("MUHAMMAD WASIQ ANSARI");getch();
}

void First_Card(void)
{
gotoxy(25,6);  printf("+-----------------------------+");
gotoxy(25,7);  printf("¦  C O M P U T E R   G A M E  ¦");
gotoxy(25,8);  printf("¦-----------------------------¦");
gotoxy(25,9);  printf("¦ 1  ¦ 3  ¦ 5  ¦ 7  ¦ 9  ¦ 11 ¦");
gotoxy(25,10); printf("¦----+----+----+----+----+----¦");
gotoxy(25,11); printf("¦ 13 ¦ 15 ¦ 17 ¦ 19 ¦ 21 ¦ 23 ¦");
gotoxy(25,12); printf("¦----+----+----+----+----+----¦");
gotoxy(25,13); printf("¦ 25 ¦ 27 ¦ 29 ¦ 31 ¦ 33 ¦ 35 ¦");
gotoxy(25,14); printf("¦----+----+----+----+----+----¦");
gotoxy(25,15); printf("¦ 37 ¦ 39 ¦ 41 ¦ 43 ¦ 45 ¦ 47 ¦");
gotoxy(25,16); printf("¦----+----+----+----+----+----¦");
gotoxy(25,17); printf("¦ 49 ¦ 51 ¦ 53 ¦ 55 ¦ 57 ¦ 59 ¦");
gotoxy(25,18); printf("+-----------------------------+");
}

void Second_Card(void)
{
gotoxy(25,6);  printf("+-----------------------------+");
gotoxy(25,7);  printf("¦  C O M P U T E R   G A M E  ¦");
gotoxy(25,8);  printf("¦-----------------------------¦");
gotoxy(25,9);  printf("¦ 2  ¦ 3  ¦ 6  ¦ 7  ¦ 10 ¦ 11 ¦");
gotoxy(25,10); printf("¦----+----+----+----+----+----¦");
gotoxy(25,11); printf("¦ 14 ¦ 15 ¦ 18 ¦ 19 ¦ 22 ¦ 23 ¦");
gotoxy(25,12); printf("¦----+----+----+----+----+----¦");
gotoxy(25,13); printf("¦ 25 ¦ 27 ¦ 30 ¦ 31 ¦ 34 ¦ 35 ¦");
gotoxy(25,14); printf("¦----+----+----+----+----+----¦");
gotoxy(25,15); printf("¦ 38 ¦ 39 ¦ 42 ¦ 43 ¦ 46 ¦ 47 ¦");
gotoxy(25,16); printf("¦----+----+----+----+----+----¦");
gotoxy(25,17); printf("¦ 50 ¦ 51 ¦ 54 ¦ 55 ¦ 58 ¦ 59 ¦");
gotoxy(25,18); printf("+-----------------------------+");
}

void Third_Card(void)
{
gotoxy(25,6);  printf("+-----------------------------+");
gotoxy(25,7);  printf("¦  C O M P U T E R   G A M E  ¦");
gotoxy(25,8);  printf("¦-----------------------------¦");
gotoxy(25,9);  printf("¦ 4  ¦ 5  ¦ 6  ¦ 7  ¦ 12 ¦ 13 ¦");
gotoxy(25,10); printf("¦----+----+----+----+----+----¦");
gotoxy(25,11); printf("¦ 14 ¦ 15 ¦ 20 ¦ 21 ¦ 22 ¦ 23 ¦");
gotoxy(25,12); printf("¦----+----+----+----+----+----¦");
gotoxy(25,13); printf("¦ 28 ¦ 29 ¦ 30 ¦ 31 ¦ 36 ¦ 37 ¦");
gotoxy(25,14); printf("¦----+----+----+----+----+----¦");
gotoxy(25,15); printf("¦ 38 ¦ 39 ¦ 44 ¦ 45 ¦ 46 ¦ 47 ¦");
gotoxy(25,16); printf("¦----+----+----+----+----+----¦");
gotoxy(25,17); printf("¦ 52 ¦ 53 ¦ 54 ¦ 55 ¦ 60 ¦ 60 ¦");
gotoxy(25,18); printf("+-----------------------------+");
}

void Fourth_Card(void)
{
gotoxy(25,6);  printf("+-----------------------------+");
gotoxy(25,7);  printf("¦  C O M P U T E R   G A M E  ¦");
gotoxy(25,8);  printf("¦-----------------------------¦");
gotoxy(25,9);  printf("¦ 8  ¦ 9  ¦ 10 ¦ 11 ¦ 12 ¦ 13 ¦");
gotoxy(25,10); printf("¦----+----+----+----+----+----¦");
gotoxy(25,11); printf("¦ 14 ¦ 15 ¦ 24 ¦ 25 ¦ 26 ¦ 27 ¦");
gotoxy(25,12); printf("¦----+----+----+----+----+----¦");
gotoxy(25,13); printf("¦ 28 ¦ 29 ¦ 30 ¦ 31 ¦ 40 ¦ 41 ¦");
gotoxy(25,14); printf("¦----+----+----+----+----+----¦");
gotoxy(25,15); printf("¦ 42 ¦ 43 ¦ 44 ¦ 45 ¦ 46 ¦ 47 ¦");
gotoxy(25,16); printf("¦----+----+----+----+----+----¦");
gotoxy(25,17); printf("¦ 56 ¦ 57 ¦ 58 ¦ 59 ¦ 60 ¦ 60 ¦");
gotoxy(25,18); printf("+-----------------------------+");
}

void Fifth_Card(void)
{
gotoxy(25,6);  printf("+-----------------------------+");
gotoxy(25,7);  printf("¦  C O M P U T E R   G A M E  ¦");
gotoxy(25,8);  printf("¦-----------------------------¦");
gotoxy(25,9);  printf("¦ 16 ¦ 17 ¦ 18 ¦ 19 ¦ 20 ¦ 21 ¦");
gotoxy(25,10); printf("¦----+----+----+----+----+----¦");
gotoxy(25,11); printf("¦ 22 ¦ 23 ¦ 24 ¦ 25 ¦ 26 ¦ 27 ¦");
gotoxy(25,12); printf("¦----+----+----+----+----+----¦");
gotoxy(25,13); printf("¦ 28 ¦ 29 ¦ 30 ¦ 31 ¦ 48 ¦ 49 ¦");
gotoxy(25,14); printf("¦----+----+----+----+----+----¦");
gotoxy(25,15); printf("¦ 50 ¦ 51 ¦ 52 ¦ 53 ¦ 54 ¦ 55 ¦");
gotoxy(25,16); printf("¦----+----+----+----+----+----¦");
gotoxy(25,17); printf("¦ 56 ¦ 57 ¦ 58 ¦ 59 ¦ 60 ¦ 60 ¦");
gotoxy(25,18); printf("+-----------------------------+");
}
void Sixth_Card(void)
{
gotoxy(25,6);  printf("+-----------------------------+
52 ¦ 53 ¦ 54 ¦ 55 ¦");
gotoxy(25,16); printf("¦----+----+----+----+----+----¦");
gotoxy(25,17); printf("¦ 56 ¦ 57 ¦ 58 ¦ 59 ¦ 60 ¦ 60 ¦");
gotoxy(25,18); printf("+-----------------------------+");
}
Check(void)
{
  int loop,key,index=0;
  char *menu[]={" Yes "," No "};
  textcolor(WHITE);
  textbackground(CYAN);
  while(1)
  { for (loop=0;loop<2;loop++)
    { if (loop==index)
	textbackground(YELLOW);
      else
	textbackground(CYAN);
      gotoxy(33+loop*10,20);cprintf("%s",menu[loop]);
    }
    key=getch();
    switch(key)
    { case 75:
	index--;if (index<0) index=1;break;
      case 77:
	index++;if (index>1) index=0;break;
      case 13: return index;
    }
  }
}
void Analyze(void)
{
 gotoxy(30,10); printf("Analyzing Result...");
 gotoxy(25,11); printf("+-----------------------------+");
 gotoxy(25,12); printf("¦ ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦ ¦");
 gotoxy(25,13); printf("+-----------------------------+");
 for(int a=27;a<=53;a++)
 { delay(100);
   gotoxy(a,12);printf("%c",219);
 }
}



