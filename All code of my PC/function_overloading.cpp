#include<bits/stdc++.h>
using namespace std;
class my
{
    int a,b;
    public:
    int p(int );
    int p(int,int);
};
int my::p(int x)
{
    a=x;
    return a;

}
int my::p(int x,int y)
{
    a=x,b=y;
    return a*b;
}
int main()
{
    my x;

       cout<<"value:"<<x.p(50)<<endl;
        cout<<"value:"<<x.p(50,2)<<endl;
    return 0;
}
