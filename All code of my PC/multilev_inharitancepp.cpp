#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    base()
    {
        cout<<"base"<<endl;
    }
};
class derived:public base
{
public:
    derived()
    {
        cout<<"derived"<<endl;
    }
};
class e:public derived
{
public:
    e()
    {
        cout<<"e"<<endl;
    }
};
int main()
{
    e o;
    return 0;
}
