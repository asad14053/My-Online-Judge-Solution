#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int t, i , k ,h1,m1 ,x ,h2,m2,m3,y ,j ,min ,z;
    char ch ,ch2  ;

    cin>>t ;
    for (i=1 ; i<=t ; i++)
    {
        cin>>k>>h1>>ch>>m1 ;

        x=(h1*60)+m1 ;

        min=250000 ;
        for (j=1 ; j<=k ; j++)
        {
            cin>>h2>>ch2>>m2 >>m3;

            y=(h2*60)+m2 ;
            if (y<x) y= y+1440 ;

            z=y-x+m3 ;
            if (z<=min) min=z ;
        }
        cout<<"Case "<<i<<": "<<min<<endl ;
    }

    return 0 ;
}
