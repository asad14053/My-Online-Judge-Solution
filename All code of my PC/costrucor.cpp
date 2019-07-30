#include<bits/stdc++.h>
using namespace std;
class myclass
{
    int a;
public:
    myclass();
    int show();
};
myclass::myclass()
{
    cout<<"in constructor"<<endl;
    a=10;
}
int myclass:: show()
{
    return a;
}
int main()
{
    myclass obj;
    cout<<obj.show()<<endl;
    return 0;
}
