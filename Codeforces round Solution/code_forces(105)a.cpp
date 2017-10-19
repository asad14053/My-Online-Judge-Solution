#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,n;
    while(cin>>a>>b>>c>>d>>n)
    {

        int co=0;
        for(int i=1; i<=n; i++)
        { //cout<<a<<b<<c<<d<<endl;
            if(i%a==0 or i%b==0 or i%c==0 or i%d==0 )
                co++;
        }
        cout<<co<<endl;
    }
}
