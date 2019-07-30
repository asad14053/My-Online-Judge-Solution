#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int a;
public:
    myclass();
    ~myclass();
    int show();
};
myclass::myclass()
{
    cout<<"in constructor"<<endl;
    a=10;
}
myclass::~myclass()
{
    cout<<"destructor process"<<endl;
}
int myclass:: show()
{
    return a;
}
int main()
{
    myclass obj;
    cout<<obj.show()<<endl;
    return 0;
}

