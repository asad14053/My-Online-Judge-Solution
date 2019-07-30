#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    int x,y;
    void set(int a,int b)
    {
        x=a,y=b;
    }
    virtual int a()=0;
};
class derived: public base
{
public:
    int a()
    {
        return x*y;
    }
};
int main()
{
    base *p;
    derived d;
    p=&d;
    p->set(4,5);
    cout<<p->a()<<endl;
}
