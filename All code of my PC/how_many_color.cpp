/****************************************************************/
/*                 This is a small program to illustrate the different                 */
/*                 colors that can be generated with a VGA in 256 Color                 */
/*                 mode or a IBM-8514 graphics adapter in dos.This program                 */
/*                 uses a grphical interface for ease.                     */
/*                                  This little program can prove to be a great                  */
/*                 for those who waana know the right amount intensities                 */
/*                 to be used for red, green and blue to make a particular */
/*                 shade.                                                                                                                       */
/****************************************************************/
/*                 Compiled with Turbo C++ Version 3.0                                                   */
/*                 Date:4th december,2002                                                                                     */
/*                 Name of the programmer: KIRTI DHRUVA                                                   */
/*                 Nationality:Indian(delhi)                                                                    */
/*      Email ID:dmwinc2000@yahoo.com                                                   */
/****************************************************************/
/*                 Legal Warning:                                                                                                       */
/*                 1. You can redistribute this utility untill this                 */
/*         file is kept intact.                                                                                     */
/*                 2. Redistribution should be free of cost.                        */
/*      3. You can use this code in your program by mentioning                 */
/*         my name in the that program.                                                                    */
/*      4. This ultility can not be sold under any circumtances */
/*                    without the authors permission.                                                   */
/****************************************************************/
/*  CONTROLS:                                                                                                                       */
/*                 esc=exit                                                                                                      */
/*                 up arrow=focus up                                                                                     */
/*                 down arrow=focus down                                                                                     */
/*                 left arrow=move focused slider towards left                                  */
/*                 right arrow=move focused slider towards right                                  */
/*                 1=wild mode on (random events occurs)                                                   */
/*                 2=wild mode off                                                                                                      */
/****************************************************************/

#include<iostream.h>                 //for cin,cout,etc.
#include<graphics.h>                 //for graphics functions.
#include<conio.h>                 //for getch().
#include<stdio.h>                 //for sprintf().
#include<stdlib.h>      //for randomiz(),random(),etc.

class slider
{
                static const xst;//its const as all three sliders have same x-coord.
                static int count;//counts the no. of object being created.
                int yst;                 //to assign diff y co-ord. using count.
                int x;                                  //actual x-coordinate of the button that moves on slider.
public:
                slider()                 //zero arg. constructor just to make compiler happy.
                {
                };
                slider(int a)//one arg construstor.
                {
                                 count++;                 //This function accepts value for each slider.
                                 yst=count*40;                 //and before assigning the values it validates
                                 if(a>=65)                 //them b/w 1 and 64 but the actual value that
                                   a=64;                                  //that gets assigned to the var. x is one less
                                 if(a<1)                                  //than the value supplied to the constructor.
                                   a=1;
                                 x=4*(a-1);
                }
                void makeslider()                 //it draws slider.
                {
                                 setcolor(WHITE);
                                 line(xst,yst,xst+256,yst);
                                 setfillstyle(1,WHITE);
                                 rectangle(xst+x,yst-10,xst+x+4,yst+10);
                }
                void slideright()                 //it shifts the slider one pos. right
                {
                                 if(x>248)
                                   return;
                                 setcolor(getbkcolor());
                                 setfillstyle(1,getbkcolor());
                                 rectangle(xst+x,yst-10,xst+x+4,yst+10);
                                 x+=4;
                                 makeslider();
                }
                void slideleft()                 //it shifts the slider one pos. left
                {
                                 if(x<4)
                                   return;
                                 setcolor(getbkcolor());
                                 setfillstyle(1,getbkcolor());
                                 rectangle(xst+x,yst-10,xst+x+4,yst+10);
                                 x-=4;
                                 makeslider();
                }
                friend void showcol(slider r,slider g,slider b);
};

//this function had to be a friend func. so that it can pass three objects
//to the function setrgbpalette().
void showcol(slider r,slider g,slider b)
{
                char arr[30]="
