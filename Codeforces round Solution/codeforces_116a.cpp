#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,mx=-1,s=0;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        s+=(-x+y);
        mx=max(mx,s);
    }
    cout<<mx<<endl;
    return 0;
}
