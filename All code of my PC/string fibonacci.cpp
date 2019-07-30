#include<bits/stdc++.h>
using namespace std;
typedef long long type;
#define check 1000000007
type x;
type y;

type f(type n)
{
    return(ceil((pow(1.618,n) - pow(-0.618,n))/((sqrt(5)*1.0))));
}
type val(type n)
{
    if(n==0)
    return 0;
    else
    return (val(n-1)+f(4*n-1));
}
int main()
{
    cin>>x;
    while(x--)
    {
       cin>>y;
       cout<<val(y)%check<<endl;
       }
    //getch();
    return 0;
}
