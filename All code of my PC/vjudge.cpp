#include<bits/stdc++.h>
using namespace std;

int m, coins[105];
long ways[100000000] = { 0 };

int main()
{
    int n,a,b;
    cin>>n;

    while(n--)
    {
        int a,b;
        cin>>a>>b;
        for(int j=0;j<2*a;j++) cin>>coins[j];
    ways[0] = 1;
    for(int i = 0; i <2*a; i++)
        for(int j = coins[i]; j <= 1000; j++)
            ways[j] += ways[ j-coins[i]];
        printf(ways[b] == 1? "%ld\n" :
               "%ld\n", ways[b]);
    }
}


