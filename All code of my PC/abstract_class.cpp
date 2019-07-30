#include<bits/stdc++.h>
using namespace std;
class Base
{
public:
    virtual void show()=0;
};

class Derived:public Base
{
public:
    void show()
    {
        cout<<"derived"<<endl;
    }
};
int main()
{
    Base *b;
    Derived d;
    b=&d;
    b->show();
    //d.show();
    return 0;
}

