#include<bits/stdc++.h>
using namespace std;
int n;
int main()
{
    long t,n,x;
    freopen("c123.txt","r",stdin);
    freopen("c12.txt","w",stdout);
    cin>>t;
    while(t--)
    {
        if(t!=0)
            cout<<endl;
        cin>>n;
        long ans = 0;

        for (long i = 1; i <= n; ++i)
        {
            x;
            cin>>x;
            if (x == 1 || x == n)
                ans = max(ans, max(i - 1, n - i));
        }
        cout<<ans+1<<endl;
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
