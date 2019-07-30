#include<bits/stdc++.h>
using namespace std;
class area
{
    double a;
public:
    area(double x)
    {
        a=x;
    }
    double carea()
    {
    double pi=3.1416;
    return pi*a*a;
    }
    double tarea( )
    {
        return .5*a*a;
    }
    double sarea( )
    {
    return a*a;
    }
};
int main()
{
    area obj(20);
            cout<<"circle:"<<obj.carea()<<endl;
            cout<<"square:"<<obj.sarea()<<endl;
            cout<<"triangle:"<<obj.tarea()<<endl;


    return 0;
}
