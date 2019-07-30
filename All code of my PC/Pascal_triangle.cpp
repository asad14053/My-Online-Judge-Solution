#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000
ll dp[N+1][N+1];
void pascal_triangle()
{
    memset(dp,0,sizeof(dp));
    for(int i = 0;i<N;i++)
        dp[i][0]=dp[0][i]=1;

    for(int i = 1;i<N;i++)
    {
         for(int j = 1;j<N;j++)
         dp[i][j] = dp[i-1][j]+dp[i][j-1];
    }
    /// print dp[i-1][j-1]
}
int main()
{

    int x,y;
    pascal_triangle();
      for(int i = 1;i<5;i++)
    {
         for(int j = 1;j<5;j++)
        cout<<dp[i-1][j-1]<<" ";
        cout<<endl;
    }
}

