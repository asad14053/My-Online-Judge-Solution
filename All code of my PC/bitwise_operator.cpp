#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int x=a>>b;
        int y=a<<b;
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
