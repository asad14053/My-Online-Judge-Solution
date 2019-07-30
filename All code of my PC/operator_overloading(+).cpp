#include<bits/stdc++.h>
using namespace std;
class my
{
public:
    int x,y;
    my()
    {

    }
    my(int a,int b)
    {
        x=a,y=b;
    }
    my operator+(my);
};
my my::operator+(my p)
{
    my t;
    t.x=x+p.x;
    t.y=y+p.y;
    return t;
}
int main()
{
    my a(10,20);
    my b(10,20);
    my c;
    c=a+b;
    cout<<c.x<<" "<<c.y<<endl;
    return 0;
}
