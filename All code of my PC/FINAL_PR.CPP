
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void start_display();
void develop();
void how_play();
void chart_display();
void main()
  {
      int driver=DETECT,gm;
      int p=500,q=200,maxx,maxy,x_radius=10,y_radius=30,m=30,n=180,a=0;
      int x,y,i;
      int stangle=90,endangle=270,radius=30;
      char ch,c,d;
      initgraph(&driver,&gm,"c:\\tc\\bgi");
	   start_display();
	   getch();
	   cleardevice();
	   chart_display();
	   for(;;)
	   {
		c=getch();
		   if(c=='e')
		      break;
		   else if(c=='d')
		      {
			 cleardevice();
			 develop();
			 getch();
			 cleardevice();
			 chart_display();
		      }
		   else if(c=='h')
		      {
			 cleardevice();
			 how_play();
			 getch();
			 cleardevice();
			 chart_display();
		      }
		   else if(c=='n'||c=='a')
		      {
		       cleardevice();
		       maxx=getmaxx();
		       maxy=getmaxy();
		       setfillstyle(1,0);
			bar(0,50,maxx,350);
			setfillstyle(1,6);
			setcolor(6);
			bar(0,0,maxx,50);
			     setfillstyle(1,6);
			     setcolor(6);
			     bar(0,350,maxx,maxy);


/*show score*/

	   settextstyle(0,0,2);
	   setcolor(1);
	   outtextxy(490,405,"Arrows:");
	   outtextxy(490,430,"Score:");

 // 20 arrows show
		  char str[5];
		  int number=5;
		  settextstyle(0,0,2);
		  setcolor(1);
		  gcvt(number,5,str);
		  outtextxy(600,405,str);

//numeric score show
		    char arr[5];
		    int num=0;
		    settextstyle(0,0,2);
		    setcolor(1);
		    gcvt(num,5,arr);
		    outtextxy(585,430,arr);

//bow showing with arrow
		   setcolor(15);
		   arc(p+80,q,stangle,endangle,radius);
		   arc(p+80,q,stangle,endangle,radius-1);
		   line(p+80,q-30,p+80,q+30);
		   setcolor(15);
			line(p,q,p+80,q);
			line(p,q-2,p,q+2);
			line(p,q-2,p-7,q);
			line(p-7,q,p,q+2);
		   arc(p+80,q-40,270,355,10);
		   arc(p+80,q-40,270,355,11);
		   arc(p+80,q+40,5,90,10);
		   arc(p+80,q+40,5,90,11);
 //ellipse with green region
		   setfillstyle(1,2);
		   setcolor(2);
		   fillellipse(m,n,x_radius,y_radius);

 //ellipse with yellow region
		   setfillstyle(1,14);
		   setcolor(14);
		   fillellipse(m,n,x_radius-7,y_radius-13);

 //ellipse with red region
		   setfillstyle(1,4);
		   setcolor(4);
		   fillellipse(m,n,x_radius-9,y_radius-25);
for(;;){
x=p;
y=q;
a=0;
for(;;){
ch=getch();
switch(ch){
	     case 'a':
		       for(;;){                   //touch the ellipse
			      {
				setcolor(0);
				line(x,y,x+80,y);
				line(x,y-2,x,y+2);
				line(x,y-2,x-7,y);
				line(x-7,y,x,y+2);
			      }
			      x--;
				setcolor(15);
				line(x,y,x+80,y);
				line(x,y-2,x,y+2);
				line(x,y-2,x-7,y);
				line(x-7,y,x,y+2);
				if(x==100-a)
				   break;
			      }
			      sound(340);
			      delay(70);
			      nosound();
		     break;


	// arrow backward
	      case 'd':
			    if(a>75)
			    break;
			setcolor(0);        //erase the previous arrow
			line(x,y,x+80,y);
			line(x,y-2,x,y+2);
			line(x,y-2,x-7,y);
			line(x-7,y,x,y+2);
					     //draw the new arrow
			x++;
			a+=3;
			    setcolor(15);
			    line(x,y,x+80,y);
			    line(x,y-2,x,y+2);
			    line(x,y-2,x-7,y);
			    line(x-7,y,x,y+2);
		    break;

	   //upper moving the bow
	       case 'w':                //erase the previous bow
			  setcolor(0);
			  line(x,y,x+80,y);
			  line(x,y-2,x,y+2);
			  line(x,y-2,x-7,y);
			  line(x-7,y,x,y+2);
			  arc(x+80,y,stangle,endangle,radius);
			  arc(x+80,y,stangle,endangle,radius-1);
			  arc(x+80,y-40,270,355,10);
			  arc(x+80,y-40,270,355,11);
			  arc(x+80,y+40,5,90,10);
			  arc(x+80,y+40,5,90,11);
			  line(x+80,y-30,x+80,y+30);
					     //draw the new bow
		       y--;
		       setcolor(15);
			  line(x,y,x+80,y);
			  line(x,y-2,x,y+2);
			  line(x,y-2,x-7,y);
			  line(x-7,y,x,y+2);
			  arc(x+80,y,stangle,endangle,radius);
			  arc(x+80,y,stangle,endangle,radius-1);
			  arc(x+80,y-40,270,355,10);
			  arc(x+80,y-40,270,355,11);
			  arc(x+80,y+40,5,90,10);
			  arc(x+80,y+40,5,90,11);
			  line(x+80,y-30,x+80,y+30);
		       break;

	//lower moving the bow
		  case 'z':
			    setcolor(0);
			    line(x,y,x+80,y);
			    line(x,y-2,x,y+2);
			    line(x,y-2,x-7,y);
			    line(x-7,y,x,y+2);
			    arc(x+80,y,stangle,endangle,radius);
			    arc(x+80,y,stangle,endangle,radius-1);
			    arc(x+80,y-40,270,355,10);
			    arc(x+80,y-40,270,355,11);
			    arc(x+80,y+40,5,90,10);
			    arc(x+80,y+40,5,90,11);
			    line(x+80,y-30,x+80,y+30);
					     //draw the position
			    y++;
			    setcolor(15);
			    line(x,y,x+80,y);
			    line(x,y-2,x,y+2);
			    line(x,y-2,x-7,y);
			    line(x-7,y,x,y+2);
			    arc(x+80,y,stangle,endangle,radius);
			    arc(x+80,y,stangle,endangle,radius-1);
			    arc(x+80,y-40,270,355,10);
			    arc(x+80,y-40,270,355,11);
			    arc(x+80,y+40,5,90,10);
			    arc(x+80,y+40,5,90,11);
			    line(x+80,y-30,x+80,y+30);
			    break;
	     }

	       if(x<500)
	       {
	       delay(1000);
	       break;
	       }
	}			 //for switch


		if(x==37&&y>=175&&y<=185)
		   {
		      setcolor(6);
		      outtextxy(585,430,arr);
		      num+=50;
		      settextstyle(0,0,2);
		      setcolor(1);
		      gcvt(num,5,arr);
		      outtextxy(585,430,arr);

		 }
		 else if(x>=34&&x<=40&&y>=186&&y<=190||x==37&&y>=191&&y<=196||x>=34&&x<=40&&y>=170&&y<=174||x==37&&y>=165&&y<=169||x==40&&y>=175&&y<=185||x==34&&y>=175&&y<=185)
		 {
		     setcolor(6);
		     outtextxy(585,430,arr);
		     num+=30;
		     settextstyle(0,0,2);
		     setcolor(1);
		     gcvt(num,5,arr);
		     outtextxy(585,430,arr);
			  setcolor(6);
			  outtextxy(600,405,str);
			  number--;
			  settextstyle(0,0,2);
			  setcolor(1);
			  gcvt(number,5,str);
			  outtextxy(600,405,str);
		 }
		 else if(x>=40&&x<=46&&y>=165&&y<=197||x>=28&&x<=34&&y>=165&&y<=197||x>=28&&x<=43&&y>=197&&y<=200||x>=28&&x<=43&&y>=162&&y<=164||x>=43&&x<=49&&y>=155&&161||x>=43&&x<=49&&y>=201&&y<=210)
		 {
		      setcolor(6);
		      outtextxy(585,430,arr);
		      num+=20;
		      gcvt(num,5,arr);
		      settextstyle(0,0,2);
		      setcolor(1);
		      outtextxy(585,430,arr);
			  setcolor(6);
			  outtextxy(600,405,str);
			  number--;
			  gcvt(number,5,str);
			  settextstyle(0,0,2);
			  setcolor(1);
			  outtextxy(600,405,str);
		 }
		 else
		 {
		     setcolor(6);
		     outtextxy(600,405,str);
		     number--;
		     gcvt(number,5,str);
		     settextstyle(0,0,2);
		     setcolor(1);
		     outtextxy(600,405,str);
		}

	    setcolor(0);
	    line(x,y,x+80,y);
	    line(x,y-2,x,y+2);
	    line(x,y-2,x-7,y);
	    line(x-7,y,x,y+2);
	 arc(500+80,y,stangle,endangle,radius);
	 arc(580,y,stangle,endangle,radius-1);
	 arc(580,y-40,270,355,10);
	 arc(580,y-40,270,355,11);
	 arc(580,y+40,5,90,10);
	 arc(580,y+40,5,90,11);
	 line(500+80,y-30,500+80,y+30);
	 setfillstyle(1,0);
	 setcolor(0);
	 fillellipse(m,n,x_radius,y_radius);
	 setfillstyle(1,0);
	 setcolor(0);
	 fillellipse(m,n,x_radius-7,y_radius-13);
	 setfillstyle(1,0);
	 setcolor(0);
	 fillellipse(m,n,x_radius-9,y_radius-25);


	if(number==0)
	{
	delay(1000);
	setfillstyle(1,6);
	bar(0,0,maxx,140);
	setfillstyle(1,6);
	bar(0,340,maxx,maxy);
	settextstyle(7,0,7);
	setcolor(2);
	gcvt(num,5,arr);
	outtextxy(170,150,"Your Score");
	outtextxy(300,220,arr);
	settextstyle(3,0,3);
	setcolor(15);
	outtextxy(210,380,"Press a for PLAY AGAIN");
	outtextxy(250,420,"Press e for EXIT");
	break;
	}
	    setfillstyle(1,2);
	    setcolor(2);
	    fillellipse(m,n,x_radius,y_radius);
	    setfillstyle(1,14);
	    setcolor(14);
	    fillellipse(m,n,x_radius-7,y_radius-13);
	    setfillstyle(1,4);
	    setcolor(4);
	    fillellipse(m,n,x_radius-9,y_radius-25);

	setcolor(15);
	arc(580,200,stangle,endangle,radius);
	arc(580,200,stangle,endangle,radius-1);
	arc(580,160,270,355,10);
	arc(580,160,270,355,11);
	arc(580,240,5,90,10);
	arc(580,240,5,90,11);
	line(580,170,580,230);
	   setcolor(15);
	   line(500,200,580,200);
	   line(500,198,500,202);
	   line(500,198,493,200);
	   line(493,200,500,202);
	   }
	   }
	  }
    closegraph();
    }

void start_display()
	 {
	   int maxx,maxy;
	   maxx=getmaxx();
	   maxy=getmaxy();
		setfillstyle(1,0);
		bar(0,0,maxx,maxy);
		setfillstyle(1,2);
		bar(0,0,650,100);
		bar(0,370,maxx,maxy);
			setcolor(6);
			settextstyle(10,0,6);
			outtextxy(150,80,"Archery");
			setcolor(6);
			settextstyle(7,0,5);
			outtextxy(65,180,"A bow and arrow game");
			settextstyle(3,0,3);
		 setcolor(15);
		 outtextxy(180,260,"Press Enter to continue");
		 outtextxy(220,320,"Press Esc to Exit");
	}
  void develop()
	   {
	     int i;
	     settextstyle(3,0,6);
	     setcolor(4);
	     outtextxy(150,80,"Developed by");
	     settextstyle(7,0,7);
	     setcolor(2);
	     outtextxy(190,150,"Nazmul");
	     outtextxy(225,210,"Jakir");
	     outtextxy(230,270,"Yasin");
	     settextstyle(3,0,3);
			setcolor(15);
			outtextxy(200,370,"Press any key to BACK");


	    }
 void how_play()
	  {
	     int i;
	     settextstyle(7,0,3);
	     setcolor(2);
	     outtextxy(250,20,"How to play");
	     outtextxy(50,70,"Press 'w' to move up the shaft");
	     outtextxy(50,110,"Press 'z' to move down the shaft");
	     outtextxy(50,150,"Press 'd' to move backward the arrow then");
	     outtextxy(50,190,"Press 'a' to move forward the arrow to");
	     outtextxy(180,230,"hit the destination point");
	     settextstyle(3,0,3);
			  setcolor(14);
			  outtextxy(210,370,"Press any to BACK");
	  }
	  void chart_display()
	  {
	  setfillstyle(1,4);
	  bar(180,100,490,150);
	  setfillstyle(1,2);
	  bar(190,170,480,220);
	  setfillstyle(1,1);
	  bar(210,240,460,290);
	  setfillstyle(1,6);
	  bar(220,310,450,360);
	  settextstyle(3,0,3);
	  setcolor(15);
	  outtextxy(205,175,"Press 'n' for NEW GAME");
	  outtextxy(195,105,"Press 'd' for DEVELOPER");
	  outtextxy(235,315,"Press 'e' for EXIT");
	  outtextxy(225,245,"Press 'h' for HELP");
	  }