#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<dos.h>

void*message;
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
void box(char mes[50])
{ putimage(5,5,message,0);
  settextstyle(0,0,1);
  outtextxy(20,30,mes);
}
void draw(char mn[3][3])
{
 char as[3][3][3];
 char num[9][3];
 for(int i=0;i<10;i++)
 { strcpy(num[i]," ");
   num[i][0]=char(49+i);
 }
 for(i=0;i<3;i++)
  for(int j=0;j<3;j++)
   strcpy(as[i][j],"  ");
 for(i=0;i<3;i++)
 { for(j=0;j<3;j++)
    {as[i][j][0]=mn[i][j];}
 }
 clearviewport();
 setcolor(15);
 rectangle(0,0,639,479);
 setfillstyle(1,8);
 settextstyle(0,0,1);
 for(i=0;i<3;i++)
 {
  rectangle(192,117+i*85,267,192+i*85);
  outtextxy(260,185+i*85,num[0+i*3]);
  rectangle(277,117+i*85,352,192+i*85);
  outtextxy(345,185+i*85,num[1+i*3]);
  rectangle(362,117+i*85,437,192+i*85);
  outtextxy(430,185+i*85,num[2+i*3]);
 }
 floodfill(500,430,15);
 setcolor(15);
 settextstyle(1,0,4);
 for(i=0;i<3;i++)
 {
  outtextxy(221,135+i*85,as[i][0]);
  outtextxy(306,135+i*85,as[i][1]);
  outtextxy(391,135+i*85,as[i][2]);
 }
}
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
message=malloc(imagesize(5,5,634,55));
setcolor(15);
rectangle(5,5,634,55);
setfillstyle(1,RED);
floodfill(30,30,15);
outtextxy(10,10,"Message:-");
getimage(5,5,634,55,message);
char col[3][3],input,madu,comps,hums,mess[70]={"computer has selected
the
symbol   . Press any key to continue.."};
int
exii,dang[8],my[8],hard,many,result,guess=7,bre,mad=2,count=0,dont=0,play[
8],p,q,end=0,note,inpu,first,use;
do
{guess=7;mad=2;count=0;dont=0;end=0;result=0;
for(int i=0;i<8;i++)
play[i]=0;
many=0;exii=1;
clearviewport();
setcolor(15);
rectangle(0,0,639,479);
rectangle(20,320,620,460);
rectangle(220,150,390,180);
rectangle(240,155,370,175);
setfillstyle(1,8);
floodfill(100,100,15);
setcolor(15);
settextstyle(4,0,4);
outtextxy(200,50,"TIC TAC TOE");
settextstyle(3,0,1);
outtextxy(40,290,"How to play :-");
outtextxy(35,330,"In this Game, you may select your symbol. You must
try
attain");
outtextxy(26,350,"three of your symbols in a line. if you suceed you
are
the winner.");
outtextxy(35,370," But at the same time you should prevent the computer
from");
outtextxy(35,390,"getting three of its symbols in a line. To play enter
the number");
outtextxy(32,410,"associated with the place where you want to play.
Press
any key");
outtextxy(35,430,"to start");
settextstyle(2,0,6);
outtextxy(258,155,"Start Game");
select(1);
hard=2;
for(int j=0;j<8;j++)
{dang[j]=0;my[j]=0;play[j]=0;}
for(j=0;j<3;j++)
{
 for(int k=0;k<3;k++)
 col[j][k]=' ';
 }
draw(col);
box("Please type in your symbol");
hums=getche();
if((hums!='X')&&(hums!='x')
)
comps='X';
else
comps='0';
mess[33]=comps;
box(mess);
getch();
randomize();
first=(int(rand()%100));
if(hard==2)guess=(int(rand()%100));
else guess=5;
if((first%4)>=2)
{use=guess%3;box("Computer has the first chance to play!");}
else
{use=3;
mad=0;box("You have the first chance to play!");}
delay(2000);
do
{
for(int j=0;j<8;j++)
{dang[j]=0;my[j]=0;}
count++;
mad++;bre=0;
if((end!=1)&&(mad!=1))
{
switch(use)
{
  case 0:{ switch(count)
	   {
	   case 1: col[2][2]=comps;break;
	   case 2: {if(col[1][1]==hums)
		    {col[0][0]=comps;play[0]=1;}
		   else if((col[2][0]==hums)||(col[2][1]==hums))
		    {col[0][2]=comps;play[1]=1;}
		   else if((col[0][1]==hums))
		    {col[0][2]=comps;play[3]=1;}
		    else if((col[1][0]==hums))
		    {col[2][0]=comps;play[4]=1;}
		   else if((col[0][2]==hums)||(col[1][2]==hums))
		    {col[2][0]=comps;play[2]=1;}
		   else if (col[0][0]==hums)
		   {col[0][2]=comps;play[3]=1;}
		    else dont=1;
		   }break;
	   case 3:{if(play[0]==1)
		      dont=1;
		   else if((play[1]==1)&&(col[1][2]==hums))
		       {col[0][0]=comps;}
		   else if((play[2]==1)&&(col[2][1]==hums))
		       {col[0][0]=comps;}
		   else if((play[3]==1)&&((col[2][1]==hums)||(col[1][2]==hums)))
			{col[2][0]=comps;}
		   else if((play[4]==1)&&(col[2][1]==hums))
			{col[0][2]=comps;}
		   else
			dont=1;
		   }break;
	   case 4:dont=1;break;
	       }
	   }break;
  case 1:{switch(count)
	  { case 1:col[0][1]=comps;break;
	    case 2:{if(col[2][0]==hums)
		      col[0][0]=comps;
		    else if(col[1][0]==hums)
		      col[0][0]=comps;
		    else if(col[0][2]==hums)
		      col[1][0]=comps;
		    else if(col[1][2]==hums)
		      col[0][2]=comps;
		    else if(col[0][0]==hums)
		      col[1][2]=comps;
		    else if(col[2][2]==hums)
		      col[0][2]=comps;
		    else if(q<=1)
		      col[2][2]=comps;
		    else
		      col[2][0]=comps;
		    } break;
	    case 3:dont=1;
	   }

	   }break;
  case 2:{switch(count)
	  { case 1:col[1][1]=comps;break;
	    case 2:dont=1;
	  }
	  }break;
  case 3:{dont=1;
	  }break;
}
if(dont==1)
{
for(int i=0,l=2;i<3;i++,l--)
{
if(col[i][i]==hums)
 dang[0]++;
else if(col[i][i]==comps)
 my[0]++;
if(col[i][l]==hums)
 dang[1]++;
else if(col[i][l]==comps)
 my[1]++;
}
for(j=0;j<3;j++)
{
 for(int k=0;k<3;k++)
     {
       if(col[j][k]==hums)
	dang[j+2]++;
       else if(col[j][k]==comps)
	my[j+2]++;
       if(col[k][j]==hums)
	dang[j+5]++;
       else if(col[k][j]==comps)
	my[j+5]++;
     }
}
for(int j=0;j<8;j++)
{
if((my[j]==3)||(dang[j]==3)||(count==5))
end=1;
if((dang[j]==2)&&(my[j]!=0))
dang[j]=0;
if((my[j]==2)&&(dang[j]==0))
{my[j]=3;bre=1;}
}
if(bre==1)
{for(j=0;j<8;j++)
  dang[j]=0;
}
if((dang[0]==2)||(my[0]==3))
  {
   for(int i=0;i<3;i++)
   { if(col[i][i]==' ')
       col[i][i]=comps;

    }}
else if((dang[1]==2)||(my[1]==3))
      {
       for(int i=0,l=2;i<3;i++,l--)
       { if(col[i][l]==' ')
	 col[i][l]=comps;
       }}

else
if((dang[2]==2)||(my[2]==3)||(dang[3]==2)||(my[3]==3)||(dang[4]==2)||(my[4
]==3))
{
for(j=0;j<3;j++)
 {if((dang[j+2]==2)||(my[j+2]==3))
  for(int k=0;k<3;k++)
     {if(col[j][k]==' ')
	{col[j][k]=comps;bre=1;}}
  }
}
else
if((dang[5]==2)||(my[5]==3)||(dang[6]==2)||(my[6]==3)||(dang[7]==2)||(my[7
]==3))
{
for(int j=0;j<3;j++)
 {if((dang[j+5]==2)||(my[j+5]==3))
  for(int k=0;k<3;k++)
     {if(col[k][j]==' ')
	{col[k][j]=comps;bre=1;}}
  }
}
else if(col[1][1]==' ')
col[1][1]=comps;
else if((use==2)&&(col[2][2]==' '))
col[2][2]=comps;
else if((use==2)&&(col[0][2]==' '))
col[0][2]=comps;
else
if((((col[0][0]==hums)&&(col[2][2]==hums))||((col[0][2]==hums)&&(col[2][0]
==hums)))&&(col[1][2]==' '))
col[1][2]=comps;
else
if((col[1][1]!=hums)&&((col[0][0]==hums)||(col[2][2]==hums))&&((col[0][1]=
=hums)||(col[1][2]==hums))&&(col[0][2]==' '))
col[0][2]=comps;
else
if((col[1][1]!=hums)&&((col[0][0]==hums)||(col[2][2]==hums))&&((col[1][0]=
=hums)||(col[2][1]==hums))&&(col[2][0]==' '))
col[2][0]=comps;
else
if((col[1][1]!=hums)&&((col[0][2]==hums)||(col[2][0]==hums))&&((col[2][1]=
=hums)||(col[1][2]==hums))&&(col[2][2]==' '))
col[2][2]=comps;
else
if((col[1][1]!=hums)&&((col[0][2]==hums)||(col[2][0]==hums))&&((col[0][1]=
=hums)||(col[1][0]==hums))&&(col[0][0]==' '))
col[0][0]=comps;
else if((col[1][1]!=comps)&&(col[2][2]==' '))
col[2][2]=comps;
else if((col[1][1]!=comps)&&(col[0][2]==' '))
col[0][2]=comps;
else if(col[0][0]==' ')
col[0][0]=comps;
else if(col[2][2]==' ')
col[2][2]=comps;
else if(col[0][1]==' ')
col[0][1]=comps;
else if(col[1][2]==' ')
col[1][2]=comps;
else if(col[0][2]==' ')
col[0][2]=comps;
else if(col[2][0]==' ')
col[2][0]=comps;
else if(col[1][0]==' ')
col[1][0]=comps;
else if(col[2][1]==' ')
col[2][1]=comps;
}
for(int i=0;i<8;i++)
{if(my[i]==3)
end=1;
}
}
star:
draw(col);
box(" ");
if(end!=1)
{
box("play");
madu=getche();
if((int(madu)<49)||(int(madu)>57))
{box("INVALID ENTRY!");for(long double jk=0;jk<99999999;jk++);goto
star;}
inpu=int(madu)-48;
p=(inpu-1)/3;
switch(inpu%3)
{case 0:q=2;break;
 case 1:q=0;break;
 case 2:q=1;break;
 }
if(col[p][q]!=' ')
{box("Space is already occupied!");for(long double
jk=0;jk<99999999;jk++);goto star;}
col[p][q]=hums;
}
for(j=0;j<8;j++)
{dang[j]=0;my[j]=0;}
for(int i=0,l=2;i<3;i++,l--)
{
if(col[i][i]==hums)
 dang[0]++;
else if(col[i][i]==comps)
 my[0]++;
if(col[i][l]==hums)
 dang[1]++;
else if(col[i][l]==comps)
 my[1]++;
}
for(j=0;j<3;j++)
{
 for(int k=0;k<3;k++)
     {
      if(col[j][k]==hums)
	dang[j+2]++;
       else if(col[j][k]==comps)
	my[j+2]++;
       if(col[k][j]==hums)
	dang[j+5]++;
       else if(col[k][j]==comps)
	my[j+5]++;
     }
}
for(j=0;j<8;j++)
{if((my[j]==3)||(dang[j]==3))
 end=1;
}
}while((end!=1));
draw(col);
for(int asd=0;asd<6;asd++)
{many=many+1;
 if((my[0]==3)||(dang[0]==3))
  {exii=0;
  if(many%2==1)
   for(int m=0,n=0;m<3;m++,n++)
   { setfillstyle(1,BLUE);floodfill(193+m*85,118+n*85,15); }
  else
   for(int m=0,n=0;m<3;m++,n++)
   { setfillstyle(1,BLACK);floodfill(193+m*85,118+n*85,15); }}
 else if((my[1]==3)||(dang[1]==3))
  {exii=0;
  if(many%2==1)
   for(int m=0,n=2;m<3;m++,n--)
   { setfillstyle(1,BLUE);floodfill(193+m*85,118+n*85,15); }
  else
   for(int m=0,n=2;m<3;m++,n--)
   { setfillstyle(1,BLACK);floodfill(193+m*85,118+n*85,15); }}
   else for(j=2;j<8;j++)
  {if(((my[j]==3)||(dang[j]==3))&&(j<5))
   {exii=0;
  if(many%2==1)
   for(int m=0,n=j-2;m<3;m++)
    { setfillstyle(1,BLUE);floodfill(193+m*85,118+n*85,15); }
  else
   for(int m=0,n=j-2;m<3;m++)
    { setfillstyle(1,BLACK);floodfill(193+m*85,118+n*85,15); }}
  else if((my[j]==3)||(dang[j]==3))
   {exii=0;
  if(many%2==1)
   for(int m=0,n=j-5;m<3;m++)
    { setfillstyle(1,BLUE);floodfill(193+n*85,118+m*85,15); }
  else
   for(int m=0,n=j-5;m<3;m++)
    { setfillstyle(1,BLACK);floodfill(193+n*85,118+m*85,15); }}
  }
for(long double jk=0;jk<9999999;jk++);
if(exii==1)break;
}
for(int m=0;m<8;m++)
 { if(my[m]==3)
  result=1;
 }
for(m=0;m<8;m++)
 { if(dang[m]==3)
  result=2; }
switch(result)
{case 1:box("You loose! Want to try again(y/n)");break;
 case 2:box("You win! Want to try again(y/n)");break;
 default:box("The game is draw! Want to try again(y/n)");break;
}
input=getche();
}while(input=='Y'||input=='y');
clearviewport();
outtextxy(80,150,"This game is developed by Anand ts. Watch out! coming
soon");
outtextxy(170,175,"from the same developer `The Gunman'!");
for(long double mas=0;mas<=99999999;mas++);
exit(0);
}



