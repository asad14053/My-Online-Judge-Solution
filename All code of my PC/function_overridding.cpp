#include<bits/stdc++.h>
using namespace std;
class Base
{
public:
    void show()
    {
        cout << "Base class"<<endl;
    }
};
class Derived:public Base
{
public:
    void show()
    {
        cout << "Derived Class";
    }
};

int main()
{

    Derived d;     //Derived class object
    Base b;       //Base class object
    b.show();     //Early Binding Ocuurs
    d.show();
}
