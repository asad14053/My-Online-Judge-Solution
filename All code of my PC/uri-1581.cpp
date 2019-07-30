#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string a[n+4],m;
        int c=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i)
                if(a[i]==a[i-1]) c++;
        }
       // cout<<c<<endl;
       if(c==n) cout<<a[n-1]<<endl;
       else cout<<"ingles"<<endl;

    }
    return 0;
}
