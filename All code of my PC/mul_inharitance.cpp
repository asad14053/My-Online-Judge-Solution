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
};
class po
{
public:
    void p(int i)
    {
        cout<<"area "<<i<<endl;
    }
};
class r:public my,public po
{
public:
    int a()
    {
        return x*y;
    }
};
int main()
{
    r o;
    o.set(100,6);
    o.p(o.a());
    return 0;
}
