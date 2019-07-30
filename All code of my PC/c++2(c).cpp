#include<bits/stdc++.h>
using namespace std;
class my
{
public:
    int a;
    my(int);
    int get();
};
my::my(int x)
{
    a=x;
}
int my::get()
{
    return a;
}
int main()
{
    my ob(20),*p;
    p=&ob;
    cout<<"point obj:"<<p->get()<<endl;
    return 0;
}
