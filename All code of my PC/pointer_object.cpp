#include<bits/stdc++.h>
using namespace std;
class my
{
    int a;
public:
    my(int);
    int get();

};
my ::my(int x)
{
    a=x;
}
int my::get()
{
    return a;
}
int main()
{
    my ob(20);
    my *p;
    p=&ob;
    cout<<"class object:"<<ob.get()<<endl;
    cout<<"pointer object:"<<p->get()<<endl;
    return 0;
}
