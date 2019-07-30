#include<bits/stdc++.h>
using namespace std;
class my
{
public:
   // int a;
    int get(int);
    int get(int ,int );
};
int my::get(int x)
{
  //  a=x;
    return x;
}
int my::get(int x,int y)
{
    return x*y;
}
int main()
{
    my c;
    cout<<"F1:"<<c.get(20)<<endl;
    cout<<"F2:"<<c.get(20,2)<<endl;
    return 0;
}
