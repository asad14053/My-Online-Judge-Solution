#include<bits/stdc++.h>
using namespace std;
class my
{
public:
    my();
    my(int );
    ~my();
};
my::my()
{
    cout<<"constructor"<<endl;
}
my::~my()
{
    cout<<"destructor"<<endl;
}
my::my(int a)
{
    cout<<"constructor2: "<<a<<endl;
}
int main()
{
    my o;
    my o1(20);
    return 0;
}
