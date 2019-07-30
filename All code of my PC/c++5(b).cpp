#include<bits/stdc++.h>
using namespace std;
class c
{
public:
    int h,w;
    void s(int,int);
    int a()
    {
        return w*h;
    }
     friend c duplicate(c);
};
void c::s(int x,int y)
{
    h=x;w=y;
}
c duplicate(c rect)
{
    c rect1;
    rect1.w=rect.w*2;
    rect1.h=rect.h*2;
    return rect1;
}
int main()
{
    c rect,rectb;
    rect.s(3 ,2);
    rectb=duplicate(rect);
    cout<<rectb.a()<<endl;
    return 0;
}
