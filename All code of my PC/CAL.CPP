
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<math.h>


int main()
{
clrscr();
   int driver=DETECT,mode;
   initgraph(&driver,&mode,"c:\\TC\\BGI");

   closegraph();

   return 0;
}