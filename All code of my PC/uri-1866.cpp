#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,n;
    cin>>t;
    while(t--)
    {
        long s=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        if(i%2) ++s;
        else --s;
        cout<<s<<endl;

    }

    return 0;
}
