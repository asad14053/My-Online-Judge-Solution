#include<bits/stdc++.h>
using namespace std;
string  a="ujjal";
void p(int n)
{
    if(n>=0)
    {
        p(n-1);
        cout<<a[n]<<endl;
    }
}
int main()
{

    p(5);
    return 0;
}
