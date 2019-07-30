#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        int z=x^y;
        int m=__builtin_popcount(z);
        cout<<m<<endl;
    }
}
