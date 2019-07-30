#include<bits/stdc++.h>
using namespace std;
class my
{
public:
    int p(int);
    int p(int,int);

};
int my::p(int a)
{
    return a;
}
int my::p(int a,int b)
{
    return a*b;
}
int main()
{
    my c;
    cout<<"F1: "<<c.p(20)<<endl;
    cout<<"f2 :"<<c.p(20,30)<<endl;
    return 0;
}
