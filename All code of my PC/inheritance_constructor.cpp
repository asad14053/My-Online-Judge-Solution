#include<bits/stdc++.h>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"con1"<<endl;
    }
    ~base()
    {
        cout<<"des1"<<endl;
    }
};
class derived:public base
{
public:
    derived()
    {
        cout<<"con2"<<endl;
    }
    ~derived()
    {
        cout<<"des2"<<endl;
    }
};
int main()
{
    derived o;
    return 0;
}
