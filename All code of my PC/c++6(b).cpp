#include<bits/stdc++.h>
using namespace std;
class pol
{
public:
    int x,y;
    void set(int a ,int b)
    {
        x=a;
        y=b;
    }
};
class po
{
public:
   void p(int i)
    {
        cout<<i<<endl;
    }
};
class r:public pol,public po
{
public:
    int a()
    {
        return x*y;
    }
};
int main()
{
    r ob;
    ob.set(20,30);
    ob.p(ob. a());
    return 0;
}
