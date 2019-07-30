#include<bits/stdc++.h>
using namespace std;
class myclass
{
public:
    myclass();
    myclass(int a);
    ~myclass();
};
myclass::myclass()
{
    cout<<"construction process"<<endl;
}
myclass::~myclass()
{
    cout<<"destruction  process"<<endl;
}

myclass::myclass(int a)
{
    cout<<"value:"<<a<<endl;

}
int main()
{
    myclass obj;
    myclass(30);
    return 0;
}
