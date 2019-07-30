#include<bits/stdc++.h>
using namespace std;
class my
{
public:
    int x,y;
    void set(int a,int b)
    {
        x=a,y=b;
    }
    int a()
    {
        return x*y;
    }
};
int main()
{
    my o,*p;
    o.set(20,30);
    p=&o;
    cout<<p->a()<<endl;
    return 0;
}
