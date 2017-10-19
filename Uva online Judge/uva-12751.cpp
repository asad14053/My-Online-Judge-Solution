#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    return (n)*(n+1)/2;
}
int main()
{
    int t;
    cin>>t;
    int N, K, X;
    int c = 0;
    while(cin>>N>>K>>X)
        printf("Case %d: %d\n", ++c, f(N)-f(X+K-1)+f(X-1));
    return 0;
}
