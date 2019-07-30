#include<bits/stdc++.h>
using namespace std;
class coord
{
    int x,y;
public:
    coord(){x=0;y=0;}
    coord(int i,int j)
    {
        x=i;y=j;
    }
    void get(int &i,int &j)
    {
        i=x;
        j=y;
    }
    coord operator++();
};
coord coord::operator++()
{
    x++;
    y++;
    return  *this;
}
int main()
{
    coord o1(10,10);
    int x,y;
    ++o1;
    o1.get(x,y);
    cout<<"++o1:"<<x<<" y: "<<y<<endl;
    return 0;
}
