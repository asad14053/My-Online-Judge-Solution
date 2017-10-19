#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,a[100000];
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long p=0,q=0;
        cin>>n;
        for(int j=0; j<n; j++)
        {
            if(j%2!=0)
                a[j]=j-(++p);
            else
                a[j]=n-(++q);
        }
        cin>>k;
        for(int j=0; j<n; j++)
            if(a[j]==k)
                cout<<j<<endl;
    }
    return 0;
}
