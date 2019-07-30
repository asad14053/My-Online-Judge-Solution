#include<bits/stdc++.h>
using namespace std;
class my
{
public:
    int x,y;
    void set(int a)
    {
        x=a;
    }
    friend class my1;
};
class my1
{
public:
    int ab,b;
    int k()
    {
        return ab*b;
    }
    void c(my al)
    {
        ab=al.x;
        b=al.x;
    }
};
int main()
{
    my ob;
    my1 ob1;
    ob.set(2);
    ob1.c(ob);
    cout<<ob1.k()<<endl;
    return 0;
}
