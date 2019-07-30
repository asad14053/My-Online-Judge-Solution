#include<bits/stdc++.h>
using namespace std;
class my
{
public:
    int x,y;
    int set(int a,int b )
            {
                x=a,y=b;
            }
    int d();
};
inline int my::d()
{
    return !(x%y);
}
int main()
{
    my o;
    o.set(20,5);
    if(o.d())
        cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
