#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,w;
    while(cin>>n>>w)
    {
        long long a[2*n+1],mx=INT_MIN,mn=INT_MAX;
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }
        double s=0.0,v;
        if(mx==mn)
            v=mx/2.0;
            else
        v=(double)mx/mn;
       // cout<<v<<endl;
        long long x=n;
        while(x--)
        s+=(v+v*2.0);
        cout<<s<<endl;

    }

    return 0;
}

/*


2 4
1 1 1 1
3 18
4 4 4 2 2 2
1 5
2 3
*/
