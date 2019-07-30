#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,m,n,a,b,x;
    while(cin>>s>>t>>a>>b>>m>>n)
    {
        int c=0,c1=0;
        while(m--)
        {
            cin>>x;
            int y=x+a;
            if(y>=s and y<=t)
                c++;
        }
         while(n--)
        {
            cin>>x;
            int y=x+b;
            if(y>=s and y<=t)
                c1++;
        }
        cout<<c<<endl;
        cout<<c1<<endl;

    }
    return 0;
}
