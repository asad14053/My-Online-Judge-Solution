#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],*p,m;
    p=a;
    *p=100;
    for(int i=0;i<5;i++)
    {
        cout<<p<<"\n";
        p++;
    }
    return 0;
}
