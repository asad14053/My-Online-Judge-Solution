#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    void p1()
    {
        cout<<"base"<<endl;
    }
};
class derived:public base
{
public:
    void p2()
    {
        cout<<"derived"<<endl;
    }
};
class e:public derived
{
public:
    void p3()
    {
        cout<<"e"<<endl;

    }
};
int main()
{
    e o;
    o.p1();
    o.p2();
    o.p3();
return 0;
}
