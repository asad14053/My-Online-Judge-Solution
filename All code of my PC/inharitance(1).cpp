#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"constructor1"<<endl;
    }
    ~base()
    {
        cout<<"desstructor1"<<endl;
    }
};
class derived:  public base
{
public:
    derived()
    {
        cout<<"constructor2"<<endl;
    }
    ~derived()
    {
        cout<<"destructor2"<<endl;
    }
};
int main()
{
    derived o;
    return 0;
}
