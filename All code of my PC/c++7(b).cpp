#include<bits/stdc++.h>
using namespace std;
class my
{
public:
    int x,y;
    my()
    {

    }
    my(int i,int j)
    {
        x=i,y=j;
    }
    my operator-(my);
};
my my::operator-(my p)
{
    my temp;
    temp.x=x-p.x;
    temp.y=y-p.y;
    return temp;
}
int main()
{
    my a(100,90);
    my b(6,6);
    my c;
    c=a-b;
    cout<<c.x<<" "<<c.y<<endl;
    return 0;
}
