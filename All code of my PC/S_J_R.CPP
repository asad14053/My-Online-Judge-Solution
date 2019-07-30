#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <string.h>


#include<math.h>
#include"calcu.h"
//#include"base.h"

#define pi 2acos0
# define UNCLICKED 0
# define CLICKED 1


int X,Y;


///***************************** Function of Mouse ************************************//


char input_string[100],print=5,convert_string[10],for_pow[4],x_n[4],*string,*char_for_base,base_convert[100],*D,*B,*H,*O,base_array[10],*pch_base, angle_conversion_array[100],angle_conversion_string[100],*pch_angle,*s;
double row,col,l=0,flag=1,number_power,shift_flag,x_n_flag,base_number,base_flag,base,angle_conversion_flag=0,angle_conversion_number;
double some_flag=0;

int angle_increment;
int initmouse();
void showmouseptr();
void get_position(int *x, int *y);
int left_button_pressed();
union REGS i, o;


int initmouse()
{
    i.x.ax = 0;
    int86(0X33,&ik,&o);
    return ( o.x.ax );
}

void showmouseptr()
{
    i.x.ax = 1;
    int86(0X33,&i,&o);
}

void mouse_reset()
{
    union REGS r;
    r.x.ax=0;
    int86(0x33,&r,&r);
    if(int(r.x.ax)!=-1)
    {
        printf("Hardware failure !");
        exit(1);
    }
}
void mouse_on()
{
    union REGS r;
    r.x.ax=1;
    int86(0x33,&r,&r);
}

void mouse_off()
{
    union REGS r;
    r.x.ax=2;
    int86(0x33,&r,&r);
}
int left_button_pressed()

{
    union REGS r;
    r.x.ax=3;
    int86(0x33,&r,&r);
    return(r.x.bx & 1);
}
int right_button_pressed()
{
    union REGS r;
    r.x.ax=3;
    int86(0x33,&r,&r);
    return (r.x.bx & 2);
}

void get_position(int *x,int *y)
{
    union REGS r;
    r.x.ax=3;
    int86(0x33,&r,&r);
    *x=r.x.cx;
    *y=r.x.dx;
}




void mouse()
{
    int button,x1,y1;
    union REGS iregs, oregs;


    iregs.x.ax = 3;
    int86 (0x33,&iregs,&oregs);


    button = oregs.x.bx & 3;
    x1 = oregs.x.cx;
    y1 = oregs.x.dx;


    if(oregs.x.bx & 1)
    {
        X = x1 ;
        Y = y1;
    }
    if(button == 3)
        exit(0);
}

void hide_mouse()
{
    union REGS ioRegs;
    ioRegs.x.ax=2;
    int86(0x33,&ioRegs,&ioRegs);
}

void show_mouse()
{
    union REGS ioRegs;
    ioRegs.x.ax=1;
    int86(0x33,&ioRegs,&ioRegs);
}


void remove_mouse()
{
    union REGS ioRegs;
    ioRegs.x.ax=0;
    int86(0x33,&ioRegs,&ioRegs);
}

int angle_conversion_function(char angle_conversion_array[],int angle_increment,char text_angle);
int base_conversion_function(char *text_print,char *pch_base);



/**************************Base_Conversion_function************************/



int base_conversion_function(char *text_print,char *pch_base)
{
    switch(*text_print)
    {
    case 'B':
    {

        base_number=atoi(pch_base);
        itoa(base_number,base_convert,2);
        setcolor(10);
        settextstyle(2,0,5);
        outtextxy(365-(strlen(base_convert))*3,105,base_convert);
        settextstyle(0,0,0);
        break;
    }



    case 'D':
    {

        base_number=atoi(pch_base);
        itoa(base_number,base_convert,10);
        setcolor(10);
        settextstyle(2,0,5);
        outtextxy(365-(strlen(base_convert))*3,105,base_convert);
        settextstyle(0,0,0);
        break;
    }


    case 'O':
    {

        base_number=atoi(pch_base);
        itoa(base_number,base_convert,8);
        setcolor(10);
        settextstyle(2,0,5);
        outtextxy(365-(strlen(base_convert))*3,105,base_convert);
        settextstyle(0,0,0);
        break;
    }



    case 'H':
    {

        base_number=atoi(pch_base);
        itoa(base_number,base_convert,16);
        setcolor(10);
        settextstyle(2,0,5);
        outtextxy(365-(strlen(base_convert))*3,105,base_convert);
        settextstyle(0,0,0);
        break;
    }

    }
    return 0;

}


/**************************End_of_Base_Conversion_function************************/




/****************************Angle_conversion_variable************************/








/**************************Angle_conversion_function_start************************/





int angle_conversion_function(char angle_conversion_array[],int angle_increment, char text_angle)
{
    double angle_conversion_number;
    sscanf(angle_conversion_array,"%lf",&angle_conversion_number);
    printf("number==%lf\n",angle_conversion_number);
    switch(text_angle)

    {
    case 's':
    {
        angle_conversion_number=sin((angle_conversion_number*3.1416)/180);
        break;

    }
    case 'c':
    {
        angle_conversion_number=cos((angle_conversion_number*3.1416)/180);
        break;
    }

    case 't':
    {
        angle_conversion_number=tan((angle_conversion_number*3.1416)/180);
        break;
    }

    case 'u':
    {

        angle_conversion_number=asin((angle_conversion_number*3.1416)/180);
        break;
    }

    case 'v':
    {
        angle_conversion_number=acos((angle_conversion_number*3.1416)/180);
        break;
    }

    case 'm':
    {
        angle_conversion_number=atan((angle_conversion_number*3.1416)/180);
        break;
    }

    }


    sprintf(angle_conversion_string,"%lf",angle_conversion_number);

    //puts(angle_conversion_string);
    for(int base_loop=0; base_loop<strlen(angle_conversion_string); base_loop++)
    {
        input_string[l]=angle_conversion_string[base_loop];
        l++;
    }
    angle_conversion_flag=0;
    angle_increment=0;
    angle_conversion_array[0]='\0';
    angle_conversion_number=0;
    pch_angle[0]='\0';
    return 0;
}

/***********************************Angle_conversion_function*******************/





/***********************************Some_function_definition********************/
int some_function(char angle_conversion_array[],int angle_increment)
{
    double some_number;
    char some_number_string[100];
    //puts(angle_conversion_array);
    sscanf(angle_conversion_array,"%lf",&some_number);
    //printf("some==%lf\n",some_number);
    some_number=log10(some_number);
    //printf("some_st==%lf\n",some_number);
    sprintf(some_number_string,"%lf",some_number);
    puts(some_number_string);
    for(int some_loop=0; some_loop<=strlen(some_number_string); some_loop++)
    {
        input_string[l]=some_number_string[some_loop];
        l++;
        //puts(input_string);
    }
    some_flag=0;

    return 0;

}


/***********************************Print Function***********************/



int print_function(char *text_print)
{
    top=0;
    setcolor(10);

    if(*text_print!='B'&&*text_print!='H'&&*text_print!='O'&&*text_print!='D')
    {

        outtextxy(row,col,text_print);
        row+=8;

        char *text_angle;
        if((angle_conversion_flag==1&&*text_print!=')')||some_flag==1)
        {
            angle_conversion_array[angle_increment]=*text_print;
            angle_increment++;
            // printf("angle==\n");
            //puts(angle_conversion_array);
        }

        /* if(some_flag==1)
         {
         some_function_array[some_increment]=*text_print;
         some_increment++;

         }*/



        if(*text_print==')')
        {
            angle_increment-=-1;
            angle_conversion_array[angle_increment]='\0';
            if(angle_conversion_flag==1)
                angle_conversion_function(angle_conversion_array,angle_increment,*text_angle);
            if(some_flag==1)
            {
                //printf("some_function\n");
                some_function(angle_conversion_array,angle_increment);

            }
        }



        if(strcmp(text_print,"sin(")==0||strcmp(text_print,"cos(")==0||strcmp(text_print,"tan")==0||strcmp(text_print,"sin^-(")==0||strcmp(text_print,"cos^-(")==0||strcmp(text_print,"tan^-(")==0)
        {

            if(strcmp(text_print,"sin(")==0)
                *text_angle='s';
            else if(strcmp(text_print,"cos(")==0)
                *text_angle='c';
            else if(strcmp(text_print,"tan(")==0)
                *text_angle='t';
            else if(strcmp(text_print,"sin^-(")==0)
            {
                *text_angle='u';
                printf("sin^-1");
            }
            else if(strcmp(text_print,"cos^-(")==0)
                *text_angle='v';
            else if(strcmp(text_print,"tan^-(")==0)
                *text_print='m';

            angle_increment=0;
            angle_conversion_flag=1;
            //printf("%d",angle_conversion_flag);
            angle_conversion_array[0]='\0';
        }


        if(strcmp(text_print,"log(")==0)
        {
            some_flag=1;


        }


        if(angle_conversion_flag!=1&&*text_print!=')'&&some_flag!=1)
        {
            input_string[l]=*text_print;
            l++;
            // puts(input_string);
        }

    }
    if(*text_print=='B'||*text_print=='H'||*text_print=='O'||*text_print=='D')
    {
        input_string[l--]='\0';
        pch_base=strtok(input_string,NULL);
        base_conversion_function(text_print,pch_base);

    }


    //if(some)







    return 0;
}



/*********************************** BUTTON FUNCTION ***************************************/



void button_3d(int x1,int y1,int x2,int y2,int check,char* text,int color)
{
    int up,low;
    setfillstyle(1,7);
    bar(x1,y1,x2,y2);
    if(check==0) //Unclicked
        up=15,low=8;
    else
        up=8,low=15; //Clicked
    setcolor(low);
    line(x2,y1,x2,y2);
    line(x2-1,y1,x2-1,y2);
    line(x1,y2,x2,y2);
    line(x1+1,y2-1,x2,y2-1);


    setcolor(up);
    line(x1,y1,x2,y1);
    line(x1+1,y1+1,x2-1,y1+1);
    line(x1,y1,x1,y2);
    line(x1+1,y1+1,x1+1,y2-1);
    setcolor(color);


    settextjustify(CENTER_TEXT,CENTER_TEXT);
    outtextxy(x1+(x2 - x1)/2,(y1+(y2 - y1)/2), text);


}


/************************************************ MAIN FUNCTION *******************************/




int main(void)
{
    int gdriver = 0, gmode, errorcode,i;
    int left, top, right, bottom,y,x, status;


    initgraph(&gdriver, &gmode, "c:\\TC\\BGI");


    errorcode = graphresult();
    if (errorcode != grOk)
    {
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to halt:");
        getch();
        exit(1);

    }



    /*****************************************  Ground  **********************************/

    row=225;
    col=80;

    setfillstyle(1,2);
    bar(0,0,700,555);




    /******************************************  Main shape ***************************************/



    setfillstyle(SOLID_FILL,7);
    bar(200,43,400,405);
    setcolor(15);
    line(199,42,199,406);
    line(198,41,198,407);
    line(197,40,197,408);
    line(196,39,196,409);
    line(195,38,195,410);
    line(194,37,194,411);
    line(196,39,404,39);
    line(197,40,403,40);
    line(198,41,402,41);
    line(199,42,401,42);
    line(195,38,405,38);
    line(194,37,406,37);

    setcolor(8);
    line(196,409,404,409);
    line(197,408,403,408);
    line(198,407,402,407);
    line(199,406,401,406);
    line(195,410,405,410);
    line(194,411,406,411);
    line(404,39,404,409);
    line(403,40,403,408);
    line(402,41,402,407);
    line(401,42,401,406);
    line(405,38,405,410);
    line(406,37,406,411);

    /********************************* Monitor *************************************/




    setfillstyle(SOLID_FILL,0);
    bar(215,66,385,119);
    setcolor(8);
    rectangle(215,66,385,119);
    line(216,118,384,118);
    line(217,117,383,117);
    line(384,67,384,118);
    line(383,68,383,117);
    setcolor(15);
    line(216,67,384,67);
    line(217,68,383,68);
    line(216,67,216,118);
    line(217,68,217,117);





    setfillstyle(1,7);
    bar(8,5,628,20);
    setcolor(15);
    line(7,4,629,4);
    line(6,3,630,3);
    line(5,2,631,2);
    line(7,4,7,21);
    line(6,3,6,22);
    line(5,2,5,23);
    setcolor(8);
    line(629,4,629,21);
    line(630,3,630,22);
    line(631,2,631,23);
    line(7,21,629,21);
    line(6,22,630,22);
    line(5,23,631,23);


    setcolor(1);
    outtextxy(18,9,"View");
    setcolor(15);
    line(12,6,52,6);
    line(12,6,12,18);
    setcolor(8);
    line(52,6,52,18);
    line(12,18,52,18);

    setfillstyle(1,4);
    bar(600,8,623,17);
    setcolor(15);
    line(599,7,624,7);
    line(599,7,599,18);
    setcolor(8);
    line(599,18,624,18);
    line(624,7,624,18);
    setcolor(15);
    outtextxy(609,8,"x");




    /********************************************** BUTTON MAKING ******************************/





    /********************************************** BUTTON MAKING ******************************/





    button_3d(204,380,237,398,UNCLICKED,"0",0);
    button_3d(243,380,276,398,UNCLICKED,".",0);
    button_3d(282,380,315,398,UNCLICKED,",",0); /************First row button***/
    button_3d(321,380,354,398,UNCLICKED,"Ans",0);
    button_3d(360,380,393,398,UNCLICKED,"=",0);





    button_3d(204,355,237,373,UNCLICKED,"1",0);
    button_3d(243,355,276,373,UNCLICKED,"2",0);
    button_3d(282,355,315,373,UNCLICKED,"3",0); /************Second row button***/
    button_3d(321,355,354,373,UNCLICKED,"+",0);
    button_3d(360,355,393,373,UNCLICKED,"-",0);




    button_3d(204,330,237,348,UNCLICKED,"4",0);
    button_3d(243,330,276,348,UNCLICKED,"5",0);
    button_3d(282,330,315,348,UNCLICKED,"6",0); /************Third row button****/
    button_3d(321,330,354,348,UNCLICKED,"*",0);
    button_3d(360,330,393,348,UNCLICKED,"/",0);



    button_3d(204,305,237,323,UNCLICKED,"7",0);
    button_3d(243,305,276,323,UNCLICKED,"8",0);
    button_3d(282,305,315,323,UNCLICKED,"9",0);  //Fourth row button
    button_3d(321,305,354,323,UNCLICKED,"DEL",4);
    button_3d(360,305,393,323,UNCLICKED,"AC",4);




    button_3d(205,280,233,296,UNCLICKED,"^-1",0);
    button_3d(237,280,265,296,UNCLICKED,"x10",0);
    button_3d(269,280,297,296,UNCLICKED,"(",0);
    button_3d(301,280,329,296,UNCLICKED,")",0);     // Fifth row button
    button_3d(333,280,361,296,UNCLICKED,"nPr",0);
    button_3d(365,280,393,296,UNCLICKED,"nCr",0);


    /************************************** 6th row button *******************************/



    button_3d(205,254,233,270,UNCLICKED,"log",0);
    setcolor(1);
    outtextxy(221,248,"x!");

    button_3d(237,254,265,270,UNCLICKED,"ln",0);

    setcolor(1);
    outtextxy(251,248,"e^x");

    button_3d(269,254,297,270,UNCLICKED,"%",0);
    button_3d(301,254,329,270,UNCLICKED,"sin",0);
    setcolor(1);
    outtextxy(309,248,"sn");
    line(319,246,323,246);   //*********** sin-1 ********************//
    line(325,244,325,249);

    button_3d(333,254,361,270,UNCLICKED,"cos",0);
    setcolor(1);
    outtextxy(343,248,"cs");
    line(351,246,354,246);   //***************** cos-1 ****************//
    line(356,244,356,249);

    button_3d(365,254,393,270,UNCLICKED,"tan",0);
    setcolor(1);
    outtextxy(375,-248,"tn");
    line(383,246,386,246);  //************************ tan-1 ****************//
    line(388,244,388,249);




    /**************************************** 7th row button ********************************/



    button_3d(205,225,233,241,UNCLICKED,"û",0);
    setcolor(0);
    setcolor(1);
    outtextxy(220,220,"A");

    button_3d(237,225,265,241,UNCLICKED,"xý",0);
    setcolor(1);
    outtextxy(250,220,"B");

    button_3d(269,225,297,241,UNCLICKED,"",0);
    setcolor(0);
    outtextxy(278,233,"x");
    outtextxy(287,230,"n");
    setcolor(1);
    outtextxy(280,220,"C");

    button_3d(301,225,329,241,UNCLICKED,"",0);
    setcolor(0);
    outtextxy(321,232,"x");
    outtextxy(309,230,"n");
    line(309,232,313,237);
    line(315,228,313,237);
    setcolor(1);
    outtextxy(314,220,"D");

    button_3d(333,225,361,241,UNCLICKED,"M+",0);
    setcolor(1);
    outtextxy(344,220,"E");

    button_3d(365,225,393,241,UNCLICKED,"M-",0);
    setcolor(1);
    outtextxy(377,220,"F");



    /******************************End_of_7th_row***********************/






    /*******************************8th row button*************************/


    button_3d(205,195,233,211,UNCLICKED,"pi",0);
    button_3d(237,195,265,211,UNCLICKED,"Com",0);

    button_3d(365,195,393,211,UNCLICKED,"HEX",0);
    button_3d(333,195,361,211,UNCLICKED,"OCT",0); /****** 8th row button*****/
    button_3d(301,195,329,211,UNCLICKED,"BIN",0);
    button_3d(269,195,297,211,UNCLICKED,"DEC",0);



    /******************************9th_row_button***************************/

    button_3d(208,135,250,155,UNCLICKED,"Shift",1);
    button_3d(360,135,385,155,UNCLICKED,"On",4);
    button_3d(314,135,352,155,UNCLICKED,"Mode",0);


    /******************************End_of_9th_row_button***************************/





    /******************************************* CLICK OF BUTTON ********************************/

    int end=0;
    status = initmouse();
    if (status==0)
        printf("Mouse support not available.\n");
    else
        showmouseptr();
    mouse_reset();
    mouse_on();
    while(!kbhit())
    {


        /**************************** cursor_function_of_calculator**************/


        setcolor(10);
        outtextxy(row,col,"_");
        delay(30);
        setcolor(0);
        setfillstyle(0,0);
        bar(row-4,col-4,row+4,col+4);
        delay(30);
        setcolor(10);
        outtextxy(row,col,"_");
        delay(30);
        setcolor(0);
        setfillstyle(0,0);
        bar(row-4,col-4,row+4,col+4);


        /**************************End_of_cuesor_movement_function*************/




        if(left_button_pressed())
        {
            get_position(&x,&y);
            mouse();

            /************************************************************************/


            if (X>=204 && X<=237 && Y>=305 && Y<=323) // Condition For 7
            {
                hide_mouse();
                button_3d(204,305,237,323,CLICKED,"7",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(204,305,237,323,UNCLICKED,"7",0);
                show_mouse();
                flag=0;
                print_function("7");

            }



            /***************************************************************************/



            if (X>=243 && X<=276 && Y>=305 && Y<=323) // Condition For 8
            {
                hide_mouse();
                button_3d(243,305,276,323,CLICKED,"8",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(243,305,276,323,UNCLICKED,"8",0);
                show_mouse();
                print_function("8");

            }


            /*************************************************************************/




            if (X>=282 && X<=315 && Y>=305 && Y<=323) // Condition For 9
            {
                hide_mouse();
                button_3d(282,305,315,323,CLICKED,"9",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(282,305,315,323,UNCLICKED,"9",0);
                show_mouse();
                print_function("9");
            }

            /***********************************************************************/


            if (X>=321 && X<=354 && Y>=305 && Y<=323) // Condition For DEL
            {
                hide_mouse();
                button_3d(321,305,354,323,CLICKED,"DEL",4);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(321,305,354,323,UNCLICKED,"DEL",4);
                show_mouse();
                if(row>=228)
                {
                    setfillstyle(1,0);
                    bar(row-11,col-7,row,col+4);
                    row-=8;
                    l--;
                }
            }

            /**************************************************************************/




            if(X>=360 && X<=393 && Y>=305 && Y<=323) // Condition For AC
            {
                hide_mouse();
                button_3d(360,305,393,323,CLICKED,"AC",4);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(360,305,393,323,UNCLICKED,"AC",4);
                show_mouse();
                setfillstyle(1,0);

                bar(215,66,385,119);
                setfillstyle(SOLID_FILL,0);
                bar(215,66,385,119);
                setcolor(8);
                rectangle(215,66,385,119);
                line(216,118,384,118);
                line(217,117,383,117);
                line(384,67,384,118);
                line(383,68,383,117);
                setcolor(15);
                line(216,67,384,67);
                line(217,68,383,68);
                line(216,67,216,118);
                line(217,68,217,117);
                row=225;
                l=0;
                input_string[l]='\0';
                top=0;
                angle_increment=0;
                angle_conversion_array[0]='\0';
            }

            /************************************************************************/



            if (X>=204 && X<=237 && Y>=330 && Y<=348) // Condition For 4
            {
                hide_mouse();
                button_3d(204,330,237,348,CLICKED,"4",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(204,330,237,348,UNCLICKED,"4",0);
                show_mouse();
                print_function("4");
            }

//*************************************************************************//



            if (X>=243 && X<=276 && Y>=330 && Y<=348) // Condition For 5
            {
                hide_mouse();
                button_3d(243,330,276,348,CLICKED,"5",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(243,330,276,348,UNCLICKED,"5",0);
                show_mouse();
                print_function("5");
            }


//**************************************************************************//



            if (X>=282 && X<=315 && Y>=330 && Y<=348) // Condition For 6
            {
                hide_mouse();
                button_3d(282,330,315,348,CLICKED,"6",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(282,330,315,348,UNCLICKED,"6",0);
                show_mouse();
                print_function("6");


            }

//***********************************************************************//


            if (X>=321 && X<=354 && Y>=330 && Y<=348) // Condition For *
            {
                hide_mouse();
                button_3d(321,330,354,348,CLICKED,"*",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(321,330,354,348,UNCLICKED,"*",0);
                show_mouse();
                print_function("*");
            }

//**************************************************************************//



            if (X>=360 && X<=393 && Y>=330 && Y<=348) // Condition For /
            {
                hide_mouse();
                button_3d(360,330,393,348,CLICKED,"/",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(360,330,393,348,UNCLICKED,"/",0);
                show_mouse();
                print_function("/");
            }





            if (X>=204 && X<=237 && Y>=355 && Y<=373) // Condition For 1
            {
                hide_mouse();
                button_3d(204,355,237,373,CLICKED,"1",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(204,355,237,373,UNCLICKED,"1",0);
                show_mouse();
                print_function("1");
            }


//*************************************************************************//

            if (X>=243 && X<=276 && Y>=355 && Y<=373) // Condition For 2
            {
                hide_mouse();
                button_3d(243,355,276,373,CLICKED,"2",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(243,355,276,373,UNCLICKED,"2",0);
                show_mouse();
                print_function("2");
            }



//*****************************************************************************************//


            if (X>=282 && X<=315 && Y>=355 && Y<=373) // Condition For 3
            {
                hide_mouse();
                button_3d(282,355,315,373,CLICKED,"3",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(282,355,315,373,UNCLICKED,"3",0);
                show_mouse();
                print_function("3");
            }

//***********************************************************************//

            if (X>=321 && X<=354 && Y>=355 && Y<=373) // Condition For +
            {
                hide_mouse();
                button_3d(321,355,354,373,CLICKED,"+",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(321,355,354,373,UNCLICKED,"+",0);
                show_mouse();
                print_function("+");
            }

//**************************************************************************//

            if (X>=360 && X<=393 && Y>=355 && Y<=373) // Condition For -
            {
                hide_mouse();
                button_3d(360,355,393,373,CLICKED,"-",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(360,355,393,373,UNCLICKED,"-",0);
                show_mouse();
                print_function("-");
            }


//****************************************************************************//



            if (X>=204 && X<=237 && Y>=380 && Y<=398) // Condition For 0
            {
                hide_mouse();
                button_3d(204,380,237,398,CLICKED,"0",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(204,380,237,398,UNCLICKED,"0",0);
                show_mouse();
                print_function("0");

            }



//***************************************************************************//



            if (X>=243 && X<=276 && Y>=380 && Y<=398) // Condition For .
            {
                hide_mouse();
                button_3d(243,380,276,398,CLICKED,".",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(243,380,276,398,UNCLICKED,".",0);
                show_mouse();
                print_function(".");
            }



//*****************************************************************************************//

            if (X>=282 && X<=315 && Y>=380 && Y<=398) // Condition For ","
            {
                hide_mouse();
                button_3d(282,380,315,398,CLICKED,",",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(282,380,315,398,UNCLICKED,",",0);
                show_mouse();
                print_function(",");
            }

//***********************************************************************//


            if (X>=321 && X<=354 && Y>=380 && Y<=398) /*********** Condition For Ans*****/
            {
                hide_mouse();
                button_3d(321,380,354,398,CLICKED,"Ans",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(321,380,354,398,UNCLICKED,"Ans",0);
                show_mouse();
                l=0;
                int ans=stac[top];
                char answer[25];
                itoa(ans,answer,10);
                row=225;
                outtextxy(row,col,answer);
            }

//************************************************************************//


            if (X>=360 && X<=393 && Y>=380 && Y<=398) /***** Condition For Equal******/
            {
                hide_mouse();
                button_3d(360,380,393,398,CLICKED,"=",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(360,380,393,398,UNCLICKED,"=",0);
                show_mouse();
                top=0;
//puts(input_string);
                take_input(input_string);
                if(stac[1]!='\0')
                {
                    setcolor(10);
                    outtextxy(310,105,"Expression syntax");
                }
                else
                {
                    gcvt(stac[top],print,string);
                    setcolor(10);
//settextjustify(0,0);
                    settextstyle(2,0,5);
                    outtextxy(370-(strlen(string))*3,105,string);
//outtextxy(375,105,string);
                    settextstyle(0,0,0);
                }
            }


//*************************************************************************************//




            if (X>=205 && X<=233 && Y>=280 && Y<=296) /***** Condition For x^-1***/
            {
                hide_mouse();
                button_3d(205,280,233,296,CLICKED,"^-1",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(205,280,233,296,UNCLICKED,"^-1",0);
                show_mouse();
                some_flag=1;
            }





//***************************************************************************//



            if (X>=237 && X<=265 && Y>=280 && Y<=296) /***** Condition For EXP**/
            {
                hide_mouse();
                button_3d(237,280,265,296,CLICKED,"x10",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(237,280,265,296,UNCLICKED,"x10",0);
                show_mouse();
                setcolor(10);
                settextstyle(2,0,4);
                outtextxy(row+5,80,"x10");
                row+=18;
                settextstyle(0,0,0);

            }



//***************************************************************************//




            if (X>=269 && X<=297 && Y>=280 && Y<=296) /****** Condition For "("********/
            {
                hide_mouse();
                button_3d(269,280,297,296,CLICKED,"(",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(269,280,297,296,UNCLICKED,"(",0);
                show_mouse();
                setcolor(10);
                print_function("(");


            }



//***************************************************************************//


            if (X>=301 && X<=329 && Y>=280 && Y<=296) // Condition For )
            {
                hide_mouse();
                button_3d(301,280,329,296,CLICKED,")",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(301,280,329,296,UNCLICKED,")",0);
                show_mouse();
                setcolor(10);
                print_function(")");


            }
//***********************************************************************************//



            if (X>=333 && X<=361 && Y>=280 && Y<=296) // Condition For nPr
            {
                hide_mouse();
                button_3d(333,280,361,296,CLICKED,"nPr",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(333,280,361,296,UNCLICKED,"nPr",0);
                show_mouse();
                setcolor(10);
                settextstyle(0,0,1);
                outtextxy(row,80,"P");
                row+=8;
                settextstyle(0,0,0);
            }
//*************************************************************//




            if (X>=365 && X<=393 && Y>=280 && Y<=296) // Condition For nCr
            {
                hide_mouse();
                button_3d(365,280,393,296,CLICKED,"nCr",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(365,280,393,296,UNCLICKED,"nCr",0);
                show_mouse();
                setcolor(10);
                settextstyle(0,0,1);
                outtextxy(row,80,"C");
                row+=8;
                settextstyle(0,0,0);



            }





            if (X>=205 && X<=233 && Y>=254 && Y<=270) // Condition For log
            {
                hide_mouse();
                button_3d(205,254,233,270,CLICKED,"log",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(205,254,233,270,UNCLICKED,"log",0);
                show_mouse();
                if(shift_flag==1)
                {
                    print_function("!");

                    char *pch;
                    pch=strtok(input_string,"!");
                    long pch_length=strlen(pch);
                    long fact_n=atol(pch);
                    if(fact_n>12)

                    {
                        char *msg="Limit Exceed";
                        setcolor(10);
                        outtextxy(365-strlen(msg)*3,105,msg);
                    }

                    l-=pch_length+1;
                    long fact=1;
                    char fact_string[25];
                    for(long fac=1; fac<=fact_n; fac++)
                        fact=fact*fac;
                    ltoa(fact,fact_string,10);
                    fact=1;
//puts(fact_string);
                    long fact_length=strlen(fact_string);
                    for( fac=0; fac<fact_length; fac++)
                    {
                        input_string[l]=fact_string[fac];
                        l++;

                    }
                    shift_flag=0;
                }
                else
                {
                    row+=8;
                    print_function("log(");
                    some_flag=1;
                    row+=10;
                }
            }





//***************************************************************************//


            if (X>=237 && X<=265 && Y>=254 && Y<=270) // Condition For ln
            {
                hide_mouse();
                button_3d(237,254,265,270,CLICKED,"ln",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(237,254,265,270,UNCLICKED,"ln",0);
                show_mouse();
                if(shift_flag==1)
                {
                    print_function("e");
                    shift_flag=0;

                }
                else
                {
                    row+=6;
                    some_flag=1;
                    print_function("ln(");
                }

            }



//***************************************************************************//


            if (X>=269 && X<=297 && Y>=254 && Y<=270) // Condition For ^
            {
                hide_mouse();
                button_3d(269,254,297,270,CLICKED,"%",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(269,254,297,270,UNCLICKED,"%",0);
                show_mouse();
                setcolor(10);
                col-=5;
                print_function("%");


            }




//***************************************************************************//



            if (X>=301 && X<=329 && Y>=254 && Y<=270) // Condition For sin
            {
                hide_mouse();
                button_3d(301,254,329,270,CLICKED,"sin",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(301,254,329,270,UNCLICKED,"sin",0);
                show_mouse();
                if(shift_flag==1)
                {
                    row+=18;
                    print_function("sin^-(");
                    row+=18;
                    shift_flag=0;


                }
                else
                {

                    setcolor(10);
                    row+=10;

                    print_function("sin(");
                    row+=12;
                }
            }

//*********************************************************************//


            if (X>=333 && X<=361 && Y>=254 && Y<=270) // Condition For cos
            {
                hide_mouse();
                button_3d(333,254,361,270,CLICKED,"cos",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(333,254,361,270,UNCLICKED,"cos",0);
                show_mouse();
                if(shift_flag==1)
                {
                    row+=18;
                    print_function("cos^-(");
                    row+=18;
                    shift_flag=0;
                }
                else
                {
                    row+=10;
                    print_function("cos(");
                    row+=10;
                }



            }
//*************************************************************//



            if (X>=365 && X<=393 && Y>=254 && Y<=270) // Condition For tan
            {
                hide_mouse();
                button_3d(365,254,393,270,CLICKED,"tan",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(365,254,393,270,UNCLICKED,"tan",0);
                show_mouse();
                if(shift_flag==1)
                {
                    row+=18;
                    print_function("tan^-(");
                    row+=18;
                    shift_flag=0;

                }
                else
                {
                    row+=10;
                    print_function("tan(");
                    row+=10;
                }
            }

//**************************************************************//

            if (X>=205 && X<=233 && Y>=225 && Y<=241) // Condition For sqrt
            {
                hide_mouse();

                button_3d(205,225,233,241,CLICKED,"û",0);
                setcolor(0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(205,225,233,241,UNCLICKED,"û",0);
                setcolor(0);
                show_mouse();

                if(shift_flag==1)
                {
                    print_function("A");
                    shift_flag=0;
                }
                else
                {
                    some_flag=1;
                    print_function("û");
                    outtextxy(row,col,"(");
                    row+=6;
                }


            }

//***************************************************************************//




            if (X>=237 && X<=265 && Y>=225 && Y<=241) // Condition For x2
            {
                hide_mouse();
                button_3d(237,225,265,241,CLICKED,"xý",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(237,225,265,241,UNCLICKED,"xý",0);
                show_mouse();
                if (X>=237 && X<=265 && Y>=225 && Y<=241)
                {
                    for_pow[0]=input_string[--l];
                    number_power=atol(for_pow);
                    double  num_power=pow(number_power,2);
                    itoa(num_power,convert_string,10);
                    int length_power=strlen(convert_string);
                    for(int loop=0; loop<=length_power-1; loop++)
                    {
                        input_string[l]=convert_string[loop];
                        l++;
                    }
                    puts(input_string);

                }

                if(shift_flag==1)
                {
                    print_function("B");
                    shift_flag=0;

                }
                else
                    print_function("ý");
            }



//***************************************************************************//


            if (X>=269 && X<=297 && Y>=225 && Y<=241) // Condition For xn
            {
                hide_mouse();
                button_3d(269,225,297,241,CLICKED,"",0);
                setcolor(0);
                outtextxy(278,233,"x");
                outtextxy(287,230,"n");

                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(269,225,297,241,UNCLICKED,"",0);
                setcolor(0);
                outtextxy(278,233,"x");
                outtextxy(287,230,"n");


                //x_n_flag=0;
                some_flag=1;

                print_function("^");

                show_mouse();
                if(shift_flag==1)
                {
                    print_function("C");
                    shift_flag=0;

                }


            }

            /***************************************************************************/


            if (X>=333 && X<=361 && Y>=225 && Y<=241) // Condition For cos
            {
                hide_mouse();
                button_3d(333,225,361,241,CLICKED,"M+",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(333,225,361,241,UNCLICKED,"M+",0);
                show_mouse();
                if(shift_flag==1)
                {
                    print_function("E");
                    shift_flag=0;

                }


            }
//*************************************************************//



            if (X>=365 && X<=393 && Y>=225 && Y<=241) // Condition For M-
            {
                hide_mouse();
                button_3d(365,225,393,241,CLICKED,"M-",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(365,225,393,241,UNCLICKED,"M-",0);
                show_mouse();
                if(shift_flag==1)
                {
                    print_function("F");
                    shift_flag=0;

                }


            }

//**************************************************************//


            if (X>=301 && X<=329 && Y>=225 && Y<=241) // Condition For other sqrt
            {
                hide_mouse();

                button_3d(301,225,329,241,CLICKED,"û",0);
                setcolor(0);
                setcolor(1);
                outtextxy(314,220,"D");
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(301,225,329,241,UNCLICKED,"",0);
                setcolor(0);
                some_flag=1;
                outtextxy(321,232,"x");
                outtextxy(309,230,"n");
                line(309,232,313,237);
                line(315,228,313,237);
                setcolor(1);
                outtextxy(314,220,"D");

                show_mouse();
                if(shift_flag==1)
                {
                    print_function("D");
                    shift_flag=0;
                }
                else
                {
                    print_function("");
                    line(row-10,col-2,row-7,col+2);
                    line(row-2,col-5,row-7,col+2);
                    outtextxy(row,col,"(");
                    row+=6;
                }


            }

//***************************************************************************//




            if (X>=208 && X<=250 && Y>=135 && Y<=155) // Condition For SHIFT
            {
                hide_mouse();
                button_3d(208,135,250,155,CLICKED,"Shift",1);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(208,135,250,155,UNCLICKED,"Shift",1);
                show_mouse();
                shift_flag=1;

            }


///**************************************Base_conversion_Button**********************/



            if(X>=365&&X<=393&&Y>=195&&Y<=211)          /********************condition for HEX*****/
            {
                hide_mouse();
                button_3d(365,195,393,211,CLICKED,"HEX",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(365,195,393,211,UNCLICKED,"HEX",0);
                show_mouse();
                base_flag=0;
                setcolor(10);
                outtextxy(370,95,"HEX");
                print_function("H");
            }


            if(X>=333&&X<=361&&X>=195&&Y<=211)        /********************condition for OCT*****/
            {
                hide_mouse();
                button_3d(333,195,361,211,CLICKED,"OCT",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(333,195,361,211,UNCLICKED,"OCT",0);
                show_mouse();
                base_flag=0;
                setcolor(0);
                outtextxy(row,col,pch_base);
                setcolor(10);
                outtextxy(370,95,"OCT");
                print_function("O");
            }



            if(X>=301&&X<=329&&Y>=195&&Y<=211)       /********************condition for BIN*****/
            {
                hide_mouse();
                button_3d(301,195,329,211,CLICKED,"BIN",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(301,195,329,211,UNCLICKED,"BIN",0);
                show_mouse();
                base_flag=0;
                setcolor(10);
                outtextxy(370,95,"BIN");
                print_function("B");


            }


            if(X>=269&&X<=297&&Y>=195&&Y<=211)        /************Condition for DEC**************/
            {
                hide_mouse();
                button_3d(269,195,297,211,CLICKED,"DEC",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(269,195,297,211,UNCLICKED,"DEC",0);
                show_mouse();
                base_flag=0;
                setcolor(10);
                outtextxy(370,95,"DEC");
                print_function("D");
            }


///**************************************End_Base_conversion_Button**********************/




// bar(215,66,385,119);


            /***********************************************************************************/

            if (X>=314 && X<=352 && Y>=135 && Y<=155) // Condition For Mode
            {

                hide_mouse();
                button_3d(314,135,352,155,CLICKED,"Mode",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(314,135,352,155,UNCLICKED,"Mode",0);
                show_mouse();
                setcolor(11);
                outtextxy(260,83,"1.BASE_N");
                outtextxy(252,100,"2.COMP");
                outtextxy(340,83,"3.EQU");
                outtextxy(339,100,"4.MAT");

            }




            if (X>=360 && X<=385 && Y>=135 && Y<=155) // Condition For On
            {
                hide_mouse();
                button_3d(360,135,385,155,CLICKED,"On",4);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(360,135,385,155,UNCLICKED,"On",4);
                show_mouse();
                setcolor(10);
            }




            button_3d(205,195,233,211,UNCLICKED,"pi",0);



            if (X>=205 && X<=233 && Y>=195 && Y<=211) // Condition For On
            {
                hide_mouse();
                button_3d(205,195,233,211,CLICKED,"pi",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(205,195,233,211,UNCLICKED,"pi",0);
                show_mouse();
                setcolor(10);
            }


            if (X>=237 && X<=265 && Y>=195 && Y<=211) // Condition For On
            {
                hide_mouse();
                button_3d(237,195,265,211,CLICKED,"Com",0);
                show_mouse();
                delay(250);
                hide_mouse();
                button_3d(237,195,265,211,UNCLICKED,"Com",0);
                show_mouse();
                setcolor(10);
            }


// bar(600,8,623,17);

            if(x>=600&&x<=623&&y>=8&&y<=17)

            {
                hide_mouse();
                button_3d(600,8,623,17,CLICKED,"x",4);
                show_mouse();

                delay(250);
                hide_mouse();
                button_3d(600,8,623,17,UNCLICKED,"x",4);
                show_mouse();
                setcolor(4);
                outtextxy(609,8,"x");
                exit(1);





            }







        }
    }

    getch();
    closegraph();
    return 0;

}

