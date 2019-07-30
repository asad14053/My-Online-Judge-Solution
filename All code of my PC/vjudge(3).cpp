#include<bits/stdc++.h>
using namespace std;
 double sq(long double a)
 {
 return a*a;
 }
 double exp(long double a,long double b)
 {
     if(b==0) return 1;
     else if(b % 2.0) return sq(exp(a,b/2.0));
     else return a*(exp(a,b-1));
 }
int main()
{
    long double a,b;
    while(cin>>a>>b)
    {
        if(a==b)

            cout<<sq(a)<<endl;


        else
            cout<<exp(a,b)<<endl;
    }
    return 0;
}
