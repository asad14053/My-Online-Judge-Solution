#include<dos.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>

sstf();
about();
calculation();
conclusion(int,int,int,int,int);
begin();
acknowledgement();
int drawlinefrd(int,int);
int drawlinebkd(int,int);
int y=50;
int x=0;
int q=1;
int n;
int a[15],l[15],r[15],st;
int cl[15],cr[15];
int b[15],c[15];
int k[20];
int throughput;
main()
{
 clrscr();
 int dr=DETECT,gm,ch;
 initgraph(&dr,&gm,"d:\cpp\bgi");
 int i,m,temp,num;
 int lpos=0,rpos=0,j;
 int min1=0,min,next=0;
// int a[15],l[15],r[15],st;
// int cl[15],cr[15];
// int b[15],c[15];
 begin();
// about();
// getch();
 acknowledgement();
 cleardevice();
 setbkcolor(BLACK);
 cout<<"
Enter the number of request
";
 cin>>n;
 if(n>10 || n<0)
 {
 cout<<"Enter between 0 to 10";
 getch();
 exit(0);
 }
 label:
 gotoxy(10,10);
 cout<<"
Enter the start point (non -ve number < 200)
";
 cin>>a[0];
 if(a[0]>200 || a[0]<0)
 {
  cout<<"Enter non -ve number less than 200";
  cleardevice();
 goto label;
 }
 //x=a[0];
 //st=a[0];
 label1:
 gotoxy(15,15);
 cout<<"
Enter the remaining
";
 for(i=1;i<n;i++)
 {
   cin>>a[i];
   if(a[i]>200 || a[i]<0 || a[i]==a[i-1])
   {
    cout<<"Enter less than 200 and more than 0 and non-repeating
number.";
    getch();
    cleardevice();
    goto label1;
   }
 }

 for(i=0;i<n;i++)
  a[i]=2*a[i];
 for(i=0;i<n;i++)
  c[i]=a[i];

min=abs(a[0]-a[1]);
while(ch<7)
{
 cleardevice();
 setfillstyle(SOLID_FILL,8);
 bar(0,0,650,100);
 bar(0,370,650,550);
 bar(0,100,100,400);
 bar(500,100,650,400);
 setbkcolor(RED);
 settextstyle(7,0,1);
 setcolor(YELLOW);
 outtextxy(120,130,"DISK SCHEDULING ALGORITHM MENU");
 outtextxy(120,170,"1. FIRST IN FIRST OUT");
 outtextxy(120,190,"2. SHORTEST SEEK TIME FIRST");
 outtextxy(120,210,"3. SCAN SCHEDULING");
 outtextxy(120,230,"4. C-SCAN SCHEDULING");
 outtextxy(120,250,"5. LOOK SCHEDULING");
 outtextxy(120,270,"6. ABOUT THE PROJECT TEAM");
 outtextxy(120,290,"7. CONCLUSION AND EXIT PROJECT");
 outtextxy(120,330," ENTER YOUR CHOICE:  ");
 gotoxy(45,22);
 cin>>ch;
 cleardevice();

 x=a[0],st=x;
// setbkcolor(BLACK);
 setfillstyle(SOLID_FILL,LIGHTGRAY);
 bar(0,50,400,450);
 settextstyle(2,0,4);
 line(0,40,0,55);
  line(25,45,25,50);
  outtextxy(0,30,"0");
 line(50,40,50,55);
  line(75,45,75,50);
  outtextxy(50,30,"25");
 line(100,40,100,55);
  line(125,45,125,50);
  outtextxy(100,30,"50");
 line(150,40,150,55);
  line(175,45,175,50);
  outtextxy(150,30,"75");
 line(200,40,200,55);
  line(225,45,225,50);
  outtextxy(200,30,"100");
 line(250,40,250,55);
  line(275,45,275,50);
  outtextxy(250,30,"125");
 line(300,40,300,55);
  line(325,45,325,50);
  outtextxy(300,30,"150");
 line(350,40,350,55);
  line(375,45,375,50);
  outtextxy(350,30,"175");
 line(400,40,400,55);
  outtextxy(400,30,"200");
// setbkcolor(RED);
 setlinestyle(DOTTED_LINE,1,1);
 line(0,55,0,450);
 line(100,55,100,450);
 line(200,55,200,450);
 line(300,55,300,450);
 line(400,55,400,450);
 line(50,55,50,450);
 line(150,55,150,450);
 line(250,55,250,450);
 line(350,55,350,450);
 gotoxy(55,7);
 cout<<" THE POINTS ARE:
";
 gotoxy(55,6);
 cout<<"STARTING POINT IS:"<<st/2;
 switch(ch)
 {
  case 1: setcolor(GREEN);
	  settextstyle(7,0,2);
	  outtextxy(100,0,"FIRST COME FIRST SERVE ALGORITHM");
	  st=a[0];
	  x=st;
	  q=0;
	  y=50;
	  int fifothr;
		for(i=1;i<n;i++)
		{
		if(a[i]<st)
		 {
		  m=a[i];
		  x=drawlinebkd(m,st);
		  st=x;
		 }
		else
		 {
		  m=a[i];
		  x=drawlinefrd(m,st);
		  st=x;
		 }
		}
		for(i=0;i<n;i++)
		 k[i]=a[i]/2;
	  getch();
	   calculation();
	   fifothr=throughput;
	   break;
  case 2:  setcolor(GREEN);
	   settextstyle(7,0,2);
	   int sstfthr;
	   outtextxy(90,0,"SHORTEST SEEK TIME FIRST ALGORITHM");
	   sstf();
	   getch();
	   calculation();
	   sstfthr=throughput;
	   break;
  case 3:  setcolor(GREEN);
	   settextstyle(7,0,2);
	   outtextxy(200,0,"SCAN SCHEDULING");
	   int scanthr;
	   st=a[0];
	   lpos=0,rpos=0,q=0;
	   x=st,y=50;

		 for(i=0;i<n;i++)
		 {
		 if(st>=a[i])
		  {
		  r[rpos]=a[i];
		  rpos=rpos+1;
		  }
		 else
		  {
		  l[lpos]=a[i];
		  lpos=lpos+1;
		  }
		 }
		 /* cout<<"
";
		  for(i=0;i<lpos;i++)
		   cout<<" "<<l[i];
		  cout<<"
";
		 for(i=0;i<rpos;i++)
		  cout<<" "<<r[i];*/
		// sorting....

		 for(j=0;j<lpos;j++)
		{
		 for(i=0;i<lpos;i++)
		  {
		  if(l[i]>l[i+1])
		    {
		    temp=l[i];
		    l[i]=l[i+1];
		    l[i+1]=temp;
		    }
		  }
		}
		for(j=0;j<rpos;j++)
		{
		 for(i=0;i<rpos;i++)
		 {
		  if(r[i]<r[i+1])
		  {
		   temp=r[i];
		   r[i]=r[i+1];
		   r[i+1]=temp;
		  }
		 }
		}
		r[rpos+1]=0;
		for(i=0;i<rpos+1;i++)
		{
		 if (r[i]<0 || r[i]>400)
		  break;
		 else
		 {
		 m=r[i];
		 x=drawlinebkd(m,st);
		 st=x;
		 }
		}
		for(i=0;i<lpos;i++)
		{
		 if(l[i]<0 || l[i]>400)
		  break;
		 else
		 {
		 m=l[i];
		 x=drawlinefrd(m,st);
		 st=x;
		 }
		}
	       for(i=0;i<rpos;i++)
		k[i]=r[i]/2;
	       for(i=0;i<lpos;i++)
		k[rpos+i]=l[i]/2;
	       /*	 cout<<"
After sorting
";
		for(i=0;i<rpos;i++)
		 cout<<" "<<r[i]/2;
		 cout<<"
";
		for(i=0;i<lpos;i++)
		 cout<<" "<<l[i]/2;
		cout<<"
";
	       for(i=0;i<n;i++)
		cout<<" "<<k[i]/2;
	       */
	  //scan();
	  getch();
	  calculation();
	  scanthr=throughput;
	  break;
  case 4:  setcolor(GREEN);
	   settextstyle(7,0,2);
	   int cscanthr;
	   outtextxy(200,0,"C-SCAN SCHEDULING");
	   st=a[0];
	   lpos=rpos=q=0;
	   x=st,y=50;
		 for(i=0;i<n;i++)
		  {
		   if(a[i]<st)
		   {
		    cl[lpos]=a[i];
		    lpos++;
		   }
		   else
		   {
		    cr[rpos]=a[i];
		    rpos++;
		   }
		  }
		/* cout<<"
";
		 for(i=0;i<lpos;i++)
		  cout<<" "<<cl[i];
		 cout<<"
";
		 for(i=0;i<rpos;i++)
		  cout<<" "<<cr[i];
		*/
		 for(j=0;j<lpos;j++)
		 {
		  for(i=0;i<lpos;i++)
		  {
		   if(cl[i]>cl[i+1])
		   {
		    temp=cl[i];
		    cl[i]=cl[i+1];
		    cl[i+1]=temp;
		   }
		  }
		 }
		 for(j=0;j<rpos;j++)
		 {
		  for(i=0;i<rpos;i++)
		  {
		   if(cr[i]>cr[i+1])
		   {
		    temp=cr[i];
		    cr[i]=cr[i+1];
		    cr[i+1]=temp;
		   }
		  }
		 }
		 // drawing line
		 for(i=0;i<rpos;i++)
		 {
		  if(cr[i]<0 || cr[i]>400)
		   break;
		  else
		  {
		   m=cr[i];
		   x=drawlinefrd(m,st);
		   st=x;
		  }
		 }
		 x=drawlinebkd(cl[0],st);
		 st=x;
		 for(i=0;i<lpos;i++)
		 {
		  if(cl[i]<0 || cl[i]>400)
		   break;
		  else
		  {
		   m=cl[i];
		   x=drawlinefrd(m,st);
		   st=x;
		  }
		 }
	       for(i=0;i<rpos;i++)
		k[i]=cr[i]/2;
	       for(i=0;i<lpos;i++)
		k[rpos+i]=cl[i]/2;
	     /*
	      cout<<"
After sorting
";
		 for(i=0;i<rpos;i++)
		  cout<<" "<<cr[i]/2;
		 cout<<"
";
		 for(i=0;i<lpos;i++)
		  cout<<" "<<cl[i]/2;

	      cout<<"
";
	      for(i=0;i<n;i++)
	       cout<<" "<<k[i]/2;
	     */
	  //cscan();
	  getch();
	  calculation();
	  cscanthr=throughput;
	  break;
  case 5:  setcolor(GREEN);
	   settextstyle(7,0,2);
	   int lookthr;
	   outtextxy(200,0,"LOOK SCHEDULING");
	   st=a[0];
	   lpos=rpos=q=0;
	   x=st,y=50;
		 for(i=0;i<n;i++)
		  {
		   if(a[i]<st)
		   {
		    cl[lpos]=a[i];
		    lpos++;
		   }
		   else
		   {
		    cr[rpos]=a[i];
		    rpos++;
		   }
		  }
		/* cout<<"
";
		 for(i=0;i<lpos;i++)
		  cout<<" "<<cl[i];
		 cout<<"
";
		 for(i=0;i<rpos;i++)
		  cout<<" "<<cr[i];
		*/
		 for(j=0;j<lpos;j++)
		 {
		  for(i=0;i<lpos;i++)
		  {
		   if(cl[i]>cl[i+1])
		   {
		    temp=cl[i];
		    cl[i]=cl[i+1];
		    cl[i+1]=temp;
		   }
		  }
		 }
		 for(j=0;j<rpos;j++)
		 {
		  for(i=0;i<rpos;i++)
		  {
		   if(cr[i]>cr[i+1])
		   {
		    temp=cr[i];
		    cr[i]=cr[i+1];
		    cr[i+1]=temp;
		   }
		  }
		 }
		 // drawing line
		 for(i=1;i<rpos+1;i++)
		 {
		  if(cr[i]<0 || cr[i]>400)
		   break;
		  else
		  {
		   m=cr[i];
		   x=drawlinefrd(m,st);
		   st=x;
		  }
		 }
		 x=drawlinebkd(cl[0],st);
		 st=x;
		 for(i=0;i<lpos;i++)
		 {
		  if(cl[i]<0 || cl[i]>400)
		   break;
		  else
		  {
		   m=cl[i];
		   x=drawlinefrd(m,st);
		   st=x;
		  }
		 }
	       for(i=0;i<rpos;i++)
		k[i]=cr[i]/2;
	       for(i=0;i<lpos;i++)
		k[rpos+i]=cl[i]/2;

	       //	 cout<<"
After sorting
";
	       //	 for(i=0;i<rpos;i++)
	       //	  cout<<" "<<cr[i];
	       //	 cout<<"
";
	       //	 for(i=0;i<lpos;i++)
	       //	  cout<<" "<<cl[i];

	   getch();
	   calculation();
	   lookthr=throughput;
	   //look();
	  break;
  case 6: about();
	  break;
  case 7: conclusion(fifothr, sstfthr, scanthr, cscanthr, lookthr);
	  exit(0);
  default:cleardevice();
	  gotoxy(27,14);
	  cout<<"ENTER CHOICE FROM 1 TO 7";
}
getch();
}
getch();
}


//___________________________

int drawlinefrd(int a,int st)
{
 int j;
 int i=0;
  for(j=0;j<(a-st);j++)
 {
 i=j/4;
 putpixel(x+j,y+i,BLACK);
 delay(20);
 }
 setcolor(BLACK);
 setfillstyle(SOLID_FILL,BLACK);
 circle(x+j,y+i,2);
 floodfill(x+j,y+i,0);
 y=y+i;
 x=x+j;
 gotoxy(55,8+q);
 cout<<a/2;
 delay(500);
 q++;
 return (x);
}

//++++++++++++++++++++++++++++

int drawlinebkd(int a,int st)
{
  int j;
  int i=0;
  for(j=0;j<(st-a);j++)
 {
 i=j/4;
 putpixel(x-j,y+i,BLACK);
 delay(20);
 }
 setcolor(BLACK);
 setfillstyle(SOLID_FILL,BLACK);
 circle(x-j,y+i,2);
 floodfill(x-j,y+i,0);
 x=st-j;
 y=y+i;
 gotoxy(55,8+q);
 cout<<a/2;
 delay(500);
 q++;
 return(x);
 }

//function defn.------------------------------------------------------
//--------------------------------------------------------------------

sstf()
{
  int n1,i,m;
//  int sstfthr;
  q=1,y=50;
// cout<<"Enter num
";*/
 for(i=0;i<n;i++)
  c[i]=a[i];
// cin>>c[i];
 int num=0;
 n1=n;
 int min1,min,j=0,next=0;
int pos=0,flag=0;
int st=c[0];
while(n1!=0)
{
//min=abs(st-a[1]);
 min=400;
for(i=0;i<n1;i++)
  {
   min1=abs(st-c[i]);
   if(min>=min1)
   {
    min=min1;
    if(st<c[i])
    {
     next=abs(min+st);
     pos=i;
    }
    else
    {
     next=abs(min-st);
     pos=i;
    }
   }
  }
  b[j]=next;
  j++;
  num++;
 // cout<<"

min= "<<min;
//  cout<<"

next= "<<next<<"
";

  for(i=0;i<n1;i++)
   if(c[i]==next)
   {
    pos=i;
    flag=1;
    break;
   }
  if(flag==1)
  {
  for(i=0;i<n1;i++)
  {
   c[pos]=c[pos+1];
   pos++;
  }
  }
 st=next;
 n1=n1-1;

//for(i=1;i<n1;i++)
// cout<<" "<<c[i];
}
//cout<<"
";
//for(i=0;i<num;i++)
//cout<<" "<<b[i];
st=b[0];
x=st;
for(i=0;i<num;i++)
{
// cout<<" "<<b[i];
 if(b[i]<st)
 {
  m=b[i];
  x=drawlinebkd(m,st);
  st=x;
 }
 else
 {
  m=b[i];
  x=drawlinefrd(m,st);
  st=x;
 }
}
for(i=0;i<num;i++)
 k[i]=b[i]/2;
//getch();
}


acknowledgement()
{
// int dr=DETECT,gm;
// initgraph(&dr,&gm,"d:\cpp\bgi");
 int i;
 cleardevice();
 setcolor(LIGHTBLUE);
 for(i=0;i<10;i++)
  rectangle(0+i,0+i,639-i,479-i);
 settextstyle(7,0,2);
 setcolor(YELLOW);
 setbkcolor(DARKGRAY);
 outtextxy(180,45,"ACKNOWLEDGEMENT");
 rectangle(10,10,629,469);
 setcolor(RED);
 line(180,70,403,70);
 setcolor(YELLOW);
 settextstyle(8,0,1);
 outtextxy(20,100," ");
 outtextxy(20,140," ");
 outtextxy(20,180," ");
 outtextxy(20,220," ");
 outtextxy(20,260," ");
 outtextxy(20,300," ");
 outtextxy(20,340," ");
 setcolor(RED);
 line(100,400,530,400);
 line(100,403,530,403);
 getch();
}

//++++++++++++++++++++++++++++++++++++++++
begin()
{
// int dr=DETECT,gm;
// initgraph(&dr,&gm,"d:\cpp\bgi");
 int i;
 setbkcolor(RED);
 settextstyle(7,0,4);
 for(i=0;i<180;i+=5)
 {
 cleardevice();
 setcolor(GREEN);
 outtextxy(20,-50+i,"SIMULATION OF DISK-SCHEDULING");
 delay(30);
 }
 for(i=0;i<600;i+=5)
 {
 setcolor(WHITE);
 line(17,130,20+i,130);
 line(615,160,610-i,160);
 delay(50);
 }
 settextstyle(2,0,5);
  setcolor(YELLOW);
  outtextxy(250,180,"DEVELOPED BY");
  settextstyle(1,0,3);
  outtextxy(200,210,"CHIHOMI HONGRAY");
   setcolor(WHITE);
//  for(i=0;i<200;i+=5)
//  {
//  line(200,240,210+i,240);
//  line(400,320,390-i,320);
//  delay(50);
//  }
  delay(200);
  settextstyle(2,0,5);
  setcolor(WHITE);
  outtextxy(400,450,"Press any key to continue...");
 getch();
  setcolor(BLUE);
  for(i=0;i<250;i++)
  {
   rectangle(0+i,0+i,639-i,479-i);
   delay(10);
  }
}

// defn of about.....................
about()
{
// int dr=DETECT,gm;
// initgraph(&dr,&gm,"c:\tc\bgi");
 cleardevice();
// setcolor(GREEN);
// setcolor(RED);
// settextstyle(1,0,4);
// outtextxy(200,30,"ABOUT THE PROJECT");
// setcolor(YELLOW);
// line(150,68,470,68);
 setbkcolor(DARKGRAY);
 settextstyle(8,0,3);
 outtextxy(130,30,"ABOUT THE PROJECT");
 settextstyle(6,0,1);
 setcolor(LIGHTRED);
 outtextxy(25,90,"     THIS  PROJECT  SHOWS  THE  GRAPHICALLY
REPRESENTATION OF");
 outtextxy(25,120,"DISK-SCHEDULING ALGORITHM. IT SHOWS HOW WITH THE
SAME
GIVEN SET");
 outtextxy(25,150,"OF REQUEST, BY PERFORMING FIVE DIFFERENT ALGORITHM,
WE
OBTAIN");
 outtextxy(25,180,"DIFFERENT GRAPHS, OF HOW IT IS BEING FULLFILLED.");
 outtextxy(25,220,"THE MAIN OBJECTIVES OF DISK-SCHEDULLING ALGORITHM
ARE:");
 outtextxy(25,250,"    1) MINIMIZED THE THROUGHPUT:");
 outtextxy(25,280,"  - THE AVERAGE NUMBER OF REQUEST SATISFIED PER UNIT
TIME.");
 outtextxy(25,310,"    2) MAXIMIZED THE RESPONSE TIME:");
 outtextxy(25,340,"  - THE AVERAGE TIME THAT A REQUEST MUST WAIT BEFORE
IT
IS SATISFIED.");
 setcolor(YELLOW);
 line(100,400,520,400);
 line(100,402,520,402);
 setfillstyle(WIDE_DOT_FILL,GREEN);
 bar(0,0,639,20);
 bar(0,0,20,479);
 bar(615,0,639,479);
 bar(0,455,639,479);
}

calculation()
{
 int dr=DETECT,gm;
 initgraph(&dr,&gm,"d:\cpp\bgi");
 int trav=0;
 int diff=0,i;
 settextstyle(7,0,2);
 setcolor(YELLOW);
 outtextxy(230,80,"CALCULATION");
 for(i=0;i<n-1;i++)
 {
  diff=abs(k[i]-k[i+1]);
  trav=trav+diff;
 }
 throughput=trav/(n-1);
 setbkcolor(BLUE);
 gotoxy(20,11);
 cout<<"THE TOTAL NUMBER OF REQUEST IS: "<<n-1;
 gotoxy(20,13);
 cout<<"THE TOTAL TRACK TRAVERSE IS: "<<trav;
 gotoxy(20,15);
 cout<<"THROUGHPUT IS: "<<throughput;
 gotoxy(20,17);
 cout<<"THE TOTAL TIME (SEEK TIME) IS: "<<5*trav<<"ms";
// getch();
}

conclusion(int fifothr, int sstfthr, int scanthr, int cscanthr, int
lookthr)
{
// int dr=DETECT,gm;
// initgraph(&dr,&gm,"c:\tc\bgi");
 cleardevice();
 setbkcolor(DARKGRAY);
 gotoxy(30,10);
 settextstyle(7,0,2);
 setcolor(YELLOW);
 if(sstfthr==0 || scanthr==0 || fifothr==0 || cscanthr==0 ||
lookthr==0)
 {
  outtextxy(150,100,"YOU HAVE TO PERFORM ALL THE");
  outtextxy(150,140,"ALGORITHMS TO GET THE OUTPUT");
  getch();
  exit(0);
 }
 outtextxy(250,100,"CONCLUSION");
 settextstyle(7,0,2);
 setcolor(WHITE);
 gotoxy(18,13);
 cout<<"FROM THE GIVEN SET OF REQUEST WE CAN CONCLUDE";
 gotoxy(18,15);
 cout<<"THAT THE ALGORITHM WHICH WILL GIVE THE MINIMUM";
 gotoxy(18,17);
 cout<<"THROUGHPUT IS: ";
 int min;
 if(fifothr<sstfthr)
   min=fifothr;
 else
   min=sstfthr;
 if(min>scanthr)
   min=scanthr;
 if(min>cscanthr)
   min=cscanthr;
 if(min>lookthr)
   min=lookthr;
 if(min==fifothr)
  cout<<"FIRST COME FIRST SERVE ALGORITHM";
 else if(min==sstfthr)
  cout<<"SHORTEST SEEK-TIME FIRST ALGORITHM";
 else if(min==scanthr)
  cout<<"SCAN ALGORITHM";
 else if(min==cscanthr)
  cout<<"C-SCAN ALGORITHM";
 else
  cout<<"LOOK ALGORITHM";
 gotoxy(25,20);
 cout<<"THROUGHPUT IS:";
 cout<<min;
 getch();
}

