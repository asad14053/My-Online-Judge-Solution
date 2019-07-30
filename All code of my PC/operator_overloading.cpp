#include<bits/stdc++.h>
using namespace std;
class CVector
{
public:
    int x,y;
    CVector () {}
    CVector (int,int);
    CVector operator- (CVector);
};
CVector::CVector (int a, int b)
{
    x = a;
    y = b;
}
CVector CVector::operator- (CVector param)
{
    CVector temp;
    temp.x = x -param.x;
    temp.y = y -param.y;
    return(temp);
}
int main ()
{
    CVector a (100,90);
    CVector b (6,6);
    CVector c;
    c = a-b;
    cout << "obj1-obj2:     \n 100-6 =  "<<c.x <<"  90-6 = "<< c.y;
    return 0;
}
