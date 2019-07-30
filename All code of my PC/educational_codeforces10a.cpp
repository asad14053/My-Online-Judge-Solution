#include<bits/stdc++.h>
using namespace std;
using namespace std;
int main()
{
    int h1,h2,a,b;
    cin>>h1>>h2>>a>>b;
    int h=h2-h1-8*a;
    h=max(h,0);
    int A=(a-b)*12;
    if(!h)
    cout<<0<<endl;
    else if(A<1)
    cout<<-1<<endl;
    else
    cout<<(h+A-1)/A<<endl;
    return 0;
}
