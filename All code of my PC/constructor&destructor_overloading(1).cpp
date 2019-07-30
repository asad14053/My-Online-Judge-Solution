#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int a,b;
public:
    myclass();
     ~myclass();
    myclass(int , int );
    int area()
    {
        return a*b;
    }
};
myclass::myclass()
{
    cout<<"consructor"<<endl;
    a=5,b=6;
}

myclass::myclass(int x,int y)
{
    a=x;b=y;
}
myclass::~myclass()
{
    cout<<"dessructor"<<endl;
}
int main()
{
  myclass obj(3,4);
  myclass ob;
    cout<<obj.area()<<endl;
     cout<<ob.area()<<endl;

    return 0;
}
