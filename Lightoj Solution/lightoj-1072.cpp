#include <bits/stdc++.h>
#define pi 2.0*acos(0.0)
#define pre setprecision(10)

using namespace std ;
int main ()
{
    int t , i  ;
    cin>>t ;
    for (i=1 ; i<=t ; i++)
    {
        double x , n , R ,r ;
        cin>>R>>n ;
        x=sin(pi/n) ;
        r=(x*R)/(1+x) ;
        cout<<pre<<"Case "<<i<<": "<<r<<endl ;
    }

    return 0 ;
}
