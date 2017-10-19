#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    for(int x=1;x<t;x++)
    {
        int n;
        cin>>n;
        int a[n+2],b[n+2];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
            int c=0;
            for(int i=0;i<n;i++)
            {
             if(a[i]!=b[i])
                    c++;
            }
            cout<<"Case "<<x<<": "<<c<<endl;
    }
    return 0;
}
