#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,d,r,a[10005],b[10005];
    while(cin>>n>>d>>r,n,d,r)
    {
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        sort(a,a+n);
        sort(b,b+n);
        int s=0;
        for(int i=0; i<n; i++)
        {
            int m=(a[i]+b[n-1-i]);
            if(m>d)
                s+=m-d;
        }
        cout<<s*r<<endl;
    }
    return 0;
}



/*

2 20 5
10 15
10 15
2 20 5
10 10
10 10
0 0 0
*/
