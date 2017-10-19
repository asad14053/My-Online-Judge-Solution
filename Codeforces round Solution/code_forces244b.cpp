#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,c,x,l,j;
    while(cin>>n>>t>>c)
    {
        l=0,j=0;
        while(n--)
        {
            cin>>x;
            if(x<=t)
                l++;
            else l=0;
            if(l>=c)
                j++;
            //cout<<j<<endl;
        }
        cout<<j<<endl;
    }
    return 0;
}
