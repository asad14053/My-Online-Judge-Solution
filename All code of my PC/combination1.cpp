#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[10000][10000];
ll nCr(long long n,long long r)
{
    if(r==1) return n;
    if(n==r) return 1;
    if(dp[n][r]!=-1) return dp[n][r];
    else
    {
        dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
        return dp[n][r];
    }


}
int main()
{

    memset(dp,-1,sizeof(dp));
    cout<<nCr(1000,10)<<endl;

}
