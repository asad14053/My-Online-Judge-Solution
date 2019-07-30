#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a[10], dp[11][10], test;;
    cin>>test;
    for(int i = 1; i <= test; i++)
    {
        cin>>m>>n;
        for(int j = 0; j < m; j++)
        {
            cin>>a[j];
            dp[1][j] = 1;
        }
        for(int k = 2; k <= n; k++)
        {
            for(int j = 0; j < m; j++)
            {
                dp[k][j] = 0;
                for(int l = 0; l < m; l++)
                {
                    if(abs(a[j]-a[l]) <= 2) dp[k][j] += dp[k-1][l];
                }
            }
        }
        int r=0,x=0;
        for( r = x = 0; x< m; x++)
            r+= dp[n][x];
        printf("Case %d: %d\n", i, r);
    }
    return 0;
}
