#include<graphics.h>
#include<conio.h>
int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
for(int i=0;i<=50;i++) circle(100,100,i);
getch();
closegraph();

}
