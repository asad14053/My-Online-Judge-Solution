#include<bits/stdc++.h>
using namespace std;
class my
{
public:
    int x,y;
    my()
    {

    }
    my(int i,int j)
    {
        x=i,y=j;
    }
    int operator&&(my);
};
int my::operator&&(my p)
{
    return ((x&&p.x)&&(y&&p.y));
}
int main()
{
   my a(10,10);
   my b(5,3);

   if(a&&b) cout<<"true"<<endl;
    return 0;
}
