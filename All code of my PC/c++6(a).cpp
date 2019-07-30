#include<bits/stdc++.h>
using namespace std;
class Base
{
public:
    Base()
    {
    cout<<"cons base"<<endl;
    }
    ~Base()
    {
    cout<<"des base"<<endl;
    }
};
class Derived:public Base
{
public:
    Derived()
    {
        cout<<"cons derived"<<endl;
    }
     ~Derived()
    {
        cout<<"des derived"<<endl;
    }
};

int main()
{
    Derived o;
    return 0;
}
