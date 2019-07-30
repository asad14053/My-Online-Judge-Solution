#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n+2],mn=INT_MAX,mx=INT_MIN,s=0,s1=-1,s2=-1;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(mn>a[i])
            {
                mn=a[i];
                s1=i+1;
            }
            if(mx<a[i])
            {
                mx=a[i];
                s2=i+1;
            }
            // cout<<s1<<" "<<s2<<endl;
        }
        s=min(s1,s2);
        if(n>1)
            cout<<abs(n-s)<<endl;
        else cout<<1<<endl;
    }
    return 0;
}

/*
5
4 5 1 3 2
7
1 6 5 3 4 7 2
6
6 5 4 3 2 1
*/
