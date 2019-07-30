#include<bits/stdc++.h>
using namespace std;
struct c
{
    string t;
    int y;
}o,*p;
int main()
{
    p=&o;
    cin>>o.t>>o.y;
    cout<<p->t<<" "<<p->y<<endl;
    return 0;
}
