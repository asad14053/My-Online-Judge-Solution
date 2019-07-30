#include<bits/stdc++.h>
using namespace std;
class my
{
public:
    int x,y;
    void set(int a,int b)
    {
        x=a,y=b;
    }
    int a()
    {
        return x*y;
    }
    friend my duplicate(my);
};
my duplicate(my p)
{
    my t;
    t.x=p.x*2;
    t.y=p.y*2;
    return t;
}
int main()
{
    my o,ob;
    o.set(2,4);
    ob=duplicate(o);
    cout<<"area "<<ob.a()<<endl;
    return 0;
}
