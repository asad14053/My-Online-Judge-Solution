#include<bits/stdc++.h>
using namespace std;
void p(int &a)
{
    a+=20;
    cout<<"function: "<<a<<endl;
}
int main()
{
    int a;
    cin>>a;
    p(a);
    cout<<"main :"<<a<<endl;
    return 0;
}
