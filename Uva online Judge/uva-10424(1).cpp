#include <iostream>
#include <cstdio>
#include <string>
using namespace std ;

int task (string a  )
{
    int i,x=0,m,l ;
    l=a.size() ;

    for (i=0 ; i<l ; i++)
    {
        if (a[i]>='a' && a[i]<='z')  x=x+(a[i]-96) ;
        else if (a[i]>='A' && a[i]<='Z') x=x+(a[i]-64) ;
    }
    m=0 ;
    while (x>0)
    {
        m= m+x%10 ;
        x=x/10 ;
    }

    if (m>9)
    {
        x=m ;
        m=0 ;
        while (x>0)
        {
            m=m+x%10 ;
            x=x/10 ;
        }
    }
    return m ;
}

int main ()
{
    double m,x,y ;
    string a,b  ;

    while (getline(cin,a))
    {
        getline(cin,b) ;

        x=  task ( a ) ;
        y= task (b) ;

        if (x>y) m=(y*100.0)/x ;
        else  m = (x*100.0)/y ;
        printf ("%0.2lf %%\n",m) ;
    }

    return 0 ;
}
