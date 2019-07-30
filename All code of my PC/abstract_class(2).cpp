#include<bits/stdc++.h>
using namespace std;
class my
{
public:
    int x,y;
    void set(int i,int j)
    {
       x=i;y=j;
    }
    virtual int a()=0;

};
class you: public my
{
public:
    int a()
    {
    return x*y;
    }

};
int main()
{

    you ob1;
    my *p1=&ob1;
    p1->set(4,5);
cout<<p1->a()<<endl;
    return 0;
}
