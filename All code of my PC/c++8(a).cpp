#include<bits/stdc++.h>
using namespace std;
class b
{
public:
    int x;
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
    void convert(b a)
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
   b ob;
   ob.set(4);
   d o;
   o.convert(ob);
   cout<<o.a()<<endl;
    return 0;
}
