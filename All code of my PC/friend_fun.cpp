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
    friend class d;
};
class d
{
public:
    int m,n;
    void convert( my a)
    {
        m=a.x;
        n=a.x;

    }
    int a()
    {
        return m*n;
    }
};
int main()
{
    my o;
    o.set(2);
    d ob;
    ob.convert(o);
    cout<<ob.a()<<endl;
    return 0;
}
