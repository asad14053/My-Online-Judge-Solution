//#include "winbgim.h"
#include <graphics.h>
#include <math.h>

void Translation(int X,int Y,int Tx,int Ty,int *Xp,int *Yp)
{ *Xp=X+Tx;
  *Yp=Y+Ty;
}
void Scaling(int X,int Y,float Sx,float Sy,int R,int P,int *Xp,int *Yp)
{ *Xp=(int)(Sx*(X-R)+0.5)+R;
  *Yp=(int)(Sy*(Y-P)+0.5)+P;
}
void Rotation(int X,int Y,float S,float C,int R,int P,int *Xp,int *Yp)
{ int Xx,Yy;
  Xx=X-R; Yy=Y-P;
  *Xp=(int)(Xx*C-Yy*S+0.5)+R;
  *Yp=(int)(Xx*S+Yy*C+0.5)+P;
}


int main(){
 int X[361],Y[361],Xp,Yp,I,J,K,Tx,Ty;
 float T,C,S,Pi;

initwindow(450,450);

 int i, x, y, color,MaxColors;


  //srand( seed );                        /* Restart random # function
*/
 MaxColors=getmaxcolor()-1;
  for( i=0 ; i<1500 ; ++i ){            /* Put 5000 pixels on screen
*/
    x = 1 + random( 450 - 1 );            /* Generate a random location
*/
    y = 1 + random( 450 - 1 );
    color = random( MaxColors );
    putpixel( x, y, color );
  }

 Pi=4*atan(1);

  for(J=0;J<=360;J++)
  { T=J*Pi/180; S=sin(T); C=cos(T) ;
    X[J]=(int)(200.0+150.0*C+0.5);
    Y[J]=(int)(180.0+100.0*S+0.5);
    //setcolor(4);
    setfillstyle(12,1);
    fillellipse(92,80,4,4);
    fillellipse(324,200,4,4);

  }

  for(J=0;J<9;J++)
  { setcolor(6+J);
    T=J*45*Pi/180; S=sin(T); C=cos(T);
    for(I=0;I<=360;I++)
    { Rotation(X[I],Y[I],S,C,200,180,&Xp,&Yp);
      if(I==0) moveto(Xp,Yp);
      else lineto(Xp,Yp);
    }
    setfillstyle(12,1);
    fillellipse(192,82,4,4);
    fillellipse(200,281,4,4);
  }
   //setfillstyle(13,2);
   fillellipse(200,180,10,10);
  getch();
  closegraph();
  return 0;
}


