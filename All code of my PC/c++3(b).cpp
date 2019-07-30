#include<bits/stdc++.h>
using namespace std;
class Base
{
public:
    void show()
    {
        cout<<"base"<<endl;
    }
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
    return 0;
}
