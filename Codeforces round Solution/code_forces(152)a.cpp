#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,x=0,y=0;
    while(cin>>n)
    {
        x=0;y=0;
       for(int i=0;i<n;i++)
            cin>>a>>b,x+=a,y+=b;
       cout<<min(x,n-x)+min(y,n-y)<<endl;
    }

    return 0;
}
