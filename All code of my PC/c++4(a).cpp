#include<bits/stdc++.h>
using namespace std;
class my
{
public:
    my();
    my(int);
    ~my();
};
my::my(int a)
{

    cout<<"constructor 2: "<<a<<endl;
}my::~my()
{
    cout<<"destructor"<<endl;
}
my::my()
{
    cout<<"constructor 1"<<endl;
}

int main()
{
    my ob;
    my ob1(20);
    return 0;
}
