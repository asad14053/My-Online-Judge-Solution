#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>

int select(int mult)
{
 union REGS inregs, outregs ;
 int bli=1,use=1,key=34,i;
 settextstyle(2,0,5);
 while(key!=28)
  {
    if(bli>0)
    {
      use=bli;
      setfillstyle(1,0);
      bli=0-bli;
    }
    else if(bli<0)
    {
      use=0-bli;
      setfillstyle(1,8);
      bli=0-bli;
    }
    floodfill(221,111+use*40,15);
    delay(100);
    if(bli<0)
    {
      key=kbhit();
      if(kbhit())
      {
	inregs.h.ah = 0 ;
	int86(22, &inregs, &outregs) ;
	key=outregs.h.ah;
      }
    }
    if((key==72)&&(use>1))
     {
      bli=use-1;
     }
    if((key==80)&&(use<mult))
     {
      bli=use+1;
     }
  }
 if(bli<0)
  bli=0-bli;
 return(bli);
}

void main()
{
 int driver=DETECT,mode;
 initgraph(&driver,&mode,"");
 clrscr();
 int score,cho,b[15],ana,hang,num,guess,remain,count=-1,mica;
 char
a[15],h,le='?',ques[41][15]={"kuwait","giraffe","zebra","elephant","ostrit
ch","mangoose","donkey","baseball","rugby","crocodile","camel","chimpanzee
","dolphin","scorpion","tarantula","rattlesnake","alligator","greatdain","
alsation","dalmatian","bulldog","boxer","srilanka","indonesia","norway","v
ietnam","cameroon","zimbabwe","mexico","argentina","panama","singapore","s
weden","portugal","austria","switzerland","yugoslavia","greece","woodpecke
r","viper"};
 char clue[40][30]={"a country","a wild animal","a wild animal","a
wild/domestic animal","a wild bird","a wild animal","a domestic
animal","a
game","a game","a reptile","a wild/domestic animal","a wild animal","a
sea
mammal","an arthropod","an arthropod","a snake","a reptile","a dog","a
dog","a dog","a dog","a dog","a country","a country","a country","a
country","a country","a country","a country","a country","a country","a
country","a country","a country","a country","a country","a country","a
country","a bird","a snake"};
 char option[3][20]={"Human v/s human"," Human v/s cpu","      Exit"};
 char cue[30],loop;
 char d[15],inpu;
 randomize();
 guess=int(rand()%1000);
 remain=guess%40;
 do
 {
  for(int i=0;i<15;i++)
  {
   d[i]='_';
   a[i]='?';
  }
  mica=0;
  loop='y';
  score=0;
  ana=1;
  hang=0;
  strcpy(cue,"                            ");
  cleardevice();
  setcolor(15);
  rectangle(0,0,639,479);
  setfillstyle(1,8);
  floodfill(100,100,15);
  settextstyle(3,0,4);
  setcolor(15);
  outtextxy(230,70,"HANG MAN");
  rectangle(10,400,630,470);
  settextstyle(2,0,5);
  for(i=0;i<120;i+=40)
  {
   rectangle(220,150+i,390,180+i);
   setviewport(221,151+i,389,179+i,1);
   clearviewport();
   setviewport(0,0,639,479,1);
   outtextxy(247,157+i,option[i/40]);
   rectangle(240,155+i,370,175+i);
  }
  outtextxy(30,380,"About the game:-");
  outtextxy(20,420,"This game is very familiar to you. We will be
hiding a
word and you have to find");
  outtextxy(30,440,"it by guessing each of it's letters, a clue will be
provided.");
  cho=select(3);
  if(cho==1)
  {
   cleardevice();
   setcolor(15);
   rectangle(0,0,639,479);
   setfillstyle(1,8);
   floodfill(100,100,15);
   count++;
   b[count]=40;
   outtextxy(120,150,"Now one of you who is going to guess, type in
your
word");
   outtextxy(180,170,"(a single word < 13 words).I will hide it for
you.");
   setbkcolor(8);
   i=0;
   h=0;
   while(h!=13)
   {
    gotoxy(3,2);
    h=getche();
    a[i]=h;
    gotoxy(3,2);
    cout<<" ";
    i++;
   }
   a[i-1]='
