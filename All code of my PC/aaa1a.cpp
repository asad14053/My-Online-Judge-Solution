#include<bits/stdc++.h>
using namespace std;
int n=0;
void pk(int x)
{
    cout<<x<<" ";
    if(x==n) return;
    else pk(x+1);
    cout<<x<<" ";
}
int main()
{
    cin>>n;
    pk(1);
    return 0;
}
