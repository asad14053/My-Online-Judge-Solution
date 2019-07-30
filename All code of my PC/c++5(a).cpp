#include<bits/stdc++.h>
using namespace std;
class samp
{
public :
    int x,y;
    samp(int ,int);
    int div();
};
samp::samp(int a,int b)
{
    x=a;y=b;
}
inline int samp::div()
{
    return x%y;
}
int main()
{
    samp ob(20,2);
    if(!ob.div())
    cout<<"divisible"<<endl;
    return 0;
}
