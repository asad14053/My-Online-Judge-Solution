#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"mouse.cpp"
#include<dos.h>
#include<string.h>
void outtext(void);
void bacground(void);
void mouse(void);
void main()
{
    int driver=DETECT,mode;
    initgraph(&driver,&mode,"C:\\TC\\BGI");
    bacground();
    outtext();
    mouse_on();

    mouse();

    getch();
    closegraph();
}


void bacground()   //function for graphical view of ludu start
{
    int maxx,maxy,i,z=0,color;
    maxx=getmaxx();
    maxy=getmaxy();

    setfillstyle(1,14);
    bar(1,1,maxx,maxy);
    int j,r,d;
    setcolor(9) ;
    d=maxy-20;
    for(j=1; j<=4; j++)
    {
        r=70,d-=60;
        for(i=1; i<=7; i++)
        {
            setcolor(2);
            for(color=1; color<=49; color++)
                line(r,d+color,r+50,d+color) ;
            setcolor(0);
            rectangle(r,d,r+50,d+50);
            r+=60 ;
            //	outtextxy(ax[i]+5,ay[i]+15,c);
        }

    }
    //exit box
    setfillstyle(9,4);
    bar(609,2,637,18);
    //letter box
    setfillstyle(9,4);
    bar(70,60,250,200);
    //word box
    setfillstyle(9,4);
    bar(260,60,480,200);

}

void outtext(void)
{
    settextstyle(1,0,3);
    outtextxy(90,410," ");
    outtextxy(150,410,"V");
    outtextxy(210,410,"W");
    outtextxy(270,410,"X");
    outtextxy(330,410,"Y");
    outtextxy(390,410,"Z");
    outtextxy(450,410," ");

    outtextxy(90,350,"O");
    outtextxy(150,350,"P");
    outtextxy(210,350,"Q");
    outtextxy(270,350,"R");
    outtextxy(330,350,"S");
    outtextxy(390,350,"T");
    outtextxy(450,350,"U");


    outtextxy(90,290,"H");
    outtextxy(150,290,"I");
    outtextxy(210,290,"J");
    outtextxy(270,290,"K");
    outtextxy(330,290,"L");
    outtextxy(390,290,"M");
    outtextxy(450,290,"N");

    outtextxy(90,230,"A");
    outtextxy(150,230,"B");
    outtextxy(210,230,"C");
    outtextxy(270,230,"D");
    outtextxy(330,230,"E");
    outtextxy(390,230,"F");
    outtextxy(450,230,"G");

    setcolor(15);
    settextstyle(1,0,1);
    outtextxy(616,0,"x");



}

void mouse()
{
    int x,y;

    while(1)
    {

        get_position(&x,&y);
        delay(300);

        if(left_button_pressed())
        {
            if(x>608&&y>1&&x<638&&y<19)
                exit(0);

            if(x>=70&&y>=229&&x<=120&&y<=279)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);
                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"A");
                settextstyle(1,0,3);
                outtextxy(270,65,"Apple");
                outtextxy(270,87,"Ant");
                outtextxy(270,109,"Angry");
                outtextxy(270,131,"Ass");
                outtextxy(270,153,"Aunt");


            }


            if(x>=130&&y>=229&&x<=180&&y<=279)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);
                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"B");
                settextstyle(1,0,3);
                outtextxy(270,65,"Ball");
                outtextxy(270,87,"Baby");
                outtextxy(270,109,"Boy");
                outtextxy(270,131,"Ballon");
                outtextxy(270,153,"Bird");

            }
            if(x>=190&&y>=229&&x<=240&&y<=279)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);
                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"C");
                settextstyle(1,0,3);
                outtextxy(270,65,"Cat");
                outtextxy(270,87,"Cottage");
                outtextxy(270,109,"Cable");
                outtextxy(270,131,"Cold");
                outtextxy(270,153,"Cute");


            }
            if(x>=250&&y>=229&&x<=300&&y<=279)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"D");
                settextstyle(1,0,3);
                outtextxy(270,65,"Doll");
                outtextxy(270,87,"Dove");
                outtextxy(270,109,"Dude");
                outtextxy(270,131,"Dady");
                outtextxy(270,153,"Dog");

            }
            if(x>=310&&y>=229&&x<=360&&y<=279)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);


                settextstyle(1,0,8);
                outtextxy(135,85,"E");
                settextstyle(1,0,3);
                outtextxy(270,65,"Eagle");
                outtextxy(270,87,"Ear");
                outtextxy(270,109,"Easy");
                outtextxy(270,131,"Eye");
                outtextxy(270,153,"Early");
                setcolor(15);

            }

            if(x>=370&&y>=229&&x<=420&&y<=279)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);


                settextstyle(1,0,8);
                outtextxy(135,85,"F");
                settextstyle(1,0,3);
                outtextxy(270,65,"Fat");
                outtextxy(270,87,"Face");
                outtextxy(270,109,"Fear");
                outtextxy(270,131,"Fair");
                outtextxy(270,153,"Fax");

            }
            if(x>=430&&y>=229&&x<=480&&y<=279)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"G");
                settextstyle(1,0,3);
                outtextxy(270,65,"Goat");
                outtextxy(270,87,"God");
                outtextxy(270,109,"Good");
                outtextxy(270,131,"Google");
                outtextxy(270,153,"Go");

            }
            if(x>=70&&y>=289&&x<=120&&y<=339)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                settextstyle(1,0,8);
                outtextxy(135,85,"H");
                settextstyle(1,0,3);
                outtextxy(270,65,"Hat");
                outtextxy(270,87,"House");
                outtextxy(270,109,"Horse");
                outtextxy(270,131,"Hot");
                outtextxy(270,153,"Hello");

            }
            if(x>=130&&y>=289&&x<=180&&y<=339)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                settextstyle(1,0,8);
                outtextxy(135,85,"I");
                settextstyle(1,0,3);
                outtextxy(270,65,"Ink");
                outtextxy(270,87,"Internet");
                outtextxy(270,109,"Ice");
                outtextxy(270,131,"Idle");
                outtextxy(270,153,"Icon");

            }

            if(x>=190&&y>=289&&x<=240&&y<=339)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                settextstyle(1,0,8);
                outtextxy(135,85,"J");
                settextstyle(1,0,3);
                outtextxy(270,65,"Jog");
                outtextxy(270,87,"July");
                outtextxy(270,109,"Joy");
                outtextxy(270,131,"Job");
                outtextxy(270,153,"Jackle");

            }
            if(x>=250&&y>=289&&x<=300&&y<=339)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"K");
                settextstyle(1,0,3);
                outtextxy(270,65,"Kite");
                outtextxy(270,87,"Keen");
                outtextxy(270,109,"Kind");
                outtextxy(270,131,"Kick");
                outtextxy(270,153,"Kid");
            }
            if(x>=310&&y>=289&&x<=360&&y<=339)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"L");
                settextstyle(1,0,3);
                outtextxy(270,65,"Lady");
                outtextxy(270,87,"Lazy");
                outtextxy(270,109,"Late");
                outtextxy(270,131,"Luck");
                outtextxy(270,153,"Liberty");

            }
            if(x>=370&&y>=289&&x<=420&&y<=339)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"M");
                settextstyle(1,0,3);
                outtextxy(270,65,"Mother");
                outtextxy(270,87,"Mango");
                outtextxy(270,109,"Madam");
                outtextxy(270,131,"Moon");
                outtextxy(270,153,"Mouse");

            }
            if(x>=430&&y>=289&&x<=480&&y<=339)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"N");
                settextstyle(1,0,3);
                outtextxy(270,65,"Nice");
                outtextxy(270,87,"Nature");
                outtextxy(270,109,"Nail");
                outtextxy(270,131,"Name");
                outtextxy(270,153,"Nurse");
            }
            if(x>=70&&y>=349&&x<=120&&y<=399)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"O");
                settextstyle(1,0,3);
                outtextxy(270,65,"Orange");
                outtextxy(270,87,"Old");
                outtextxy(270,109,"One");
                outtextxy(270,131,"Ok");
                outtextxy(270,153,"Only");

            }
            if(x>=130&&y>=349&&x<=180&&y<=399)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"P");
                settextstyle(1,0,3);
                outtextxy(270,65,"Palm");
                outtextxy(270,87,"Put");
                outtextxy(270,109,"Pull");
                outtextxy(270,131,"Pipe");
                outtextxy(270,153,"Pot");

            }
            if(x>=190&&y>=349&&x<=240&&y<=399)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"Q");
                settextstyle(1,0,3);
                outtextxy(270,65,"Qeen");
                outtextxy(270,87,"Quarrel");
                outtextxy(270,109,"Quality");
                outtextxy(270,131,"Question");
                outtextxy(270,153,"Quantity");


            }
            if(x>=250&&y>=349&&x<=300&&y<=399)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"R");
                settextstyle(1,0,3);
                outtextxy(270,65,"River");
                outtextxy(270,87,"Rat");
                outtextxy(270,109,"Road");
                outtextxy(270,131,"Right");
                outtextxy(270,153,"Request");

            }
            if(x>=310&&y>=349&&x<=360&&y<=399)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"S");
                settextstyle(1,0,3);
                outtextxy(270,65,"Sit");
                outtextxy(270,87,"Sea");
                outtextxy(270,109,"Say");
                outtextxy(270,131,"Sell");
                outtextxy(270,153,"Sad");


            }
            if(x>=370&&y>=349&&x<=420&&y<=399)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"T");
                settextstyle(1,0,3);
                outtextxy(270,65,"Toy");
                outtextxy(270,87,"Tail");
                outtextxy(270,109,"Table");
                outtextxy(270,131,"Ticket");
                outtextxy(270,153,"Tiger");

            }
            if(x>=430&&y>=349&&x<=480&&y<=399)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"U");
                settextstyle(1,0,3);
                outtextxy(270,65,"Uncle");
                outtextxy(270,87,"Umbrella");
                outtextxy(270,109,"Ugly");
                outtextxy(270,131,"Unity");
                outtextxy(270,153,"Union");


            }

            if(x>=130&&y>=409&&x<=180&&y<=459)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"V");
                settextstyle(1,0,3);
                outtextxy(270,65,"Vacation");
                outtextxy(270,87,"Vain");
                outtextxy(270,109,"Valence");
                outtextxy(270,131,"Vaccine");
                outtextxy(270,153,"Vector");

            }
            if(x>=190&&y>=409&&x<=240&&y<=459)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"W");
                settextstyle(1,0,3);
                outtextxy(270,65,"Wood");
                outtextxy(270,87,"Wool");
                outtextxy(270,109,"Win");
                outtextxy(270,131,"Well");
                outtextxy(270,153,"Weak");

            }
            if(x>=250&&y>=409&&x<=300&&y<=459)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"X");
                settextstyle(1,0,3);
                outtextxy(270,65,"X-ray");
                outtextxy(270,87,"Xylem");
                outtextxy(270,109,"Xylene");
                outtextxy(270,131,"XY");
                outtextxy(270,153,"Xylol");

            }
            if(x>=310&&y>=409&&x<=360&&y<=459)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"Y");
                settextstyle(1,0,3);
                outtextxy(270,65,"Year");
                outtextxy(270,87,"Yes");
                outtextxy(270,109,"Yard");
                outtextxy(270,131,"Yellow");
                outtextxy(270,153,"Yahoo");

            }

            if(x>=430&&y>=409&&x<=480&&y<=459)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

                setcolor(15);
                settextstyle(1,0,8);
                outtextxy(135,85,"Z");
                settextstyle(1,0,3);
                outtextxy(270,65,"Zoo");
                outtextxy(270,87,"Zakat");
                outtextxy(270,109,"Zebra");
                outtextxy(270,131,"Zinc");
                outtextxy(270,153,"Zoom");

            }
            if(x>=70&&y>=229&&x<=120&&y<=279)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

            }
            if(x>=70&&y>=229&&x<=120&&y<=279)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

            }
            if(x>=70&&y>=229&&x<=120&&y<=279)
            {
                //letter box
                setfillstyle(9,4);
                bar(70,60,250,200);
                //word box
                setfillstyle(9,4);
                bar(260,60,480,200);

            }
            mouse_on();

        }


    }

}
//-------------------------------*-----------------------------------//

