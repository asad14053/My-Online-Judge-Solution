#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p1,*p2,*p3,a,b,c,*t;
    cin>>a>>b>>c;
    p1=&b;
    p2=&c;
    p3=&a;
    *p1=b;
    *p2=c;
    *p3=a;
    cout<<"a :"<<*p1<<" b :"<<*p2<<" c :"<<*p3<<"\n";
    return 0;
}
