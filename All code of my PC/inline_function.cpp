#include<bits/stdc++.h>
using namespace std;
class samp
{
    int i,j;
public:
    samp(int ,int);
    int div();
};
samp::samp(int a,int b)
{
    i=a;
    j=b;
}
inline int samp::div()
{
    return !(i%j);
}
int main()
{
    samp ob(10,2);
    if(ob.div())
        cout<<"10 is divisible by 2"<<endl;
    return 0;
}
