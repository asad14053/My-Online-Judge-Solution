#include<bits/stdc++.h>
using namespace std;
#define N 14500
long S[N];
int main()
{
    long long n;
    for( int i = 1; i <= N; ++i )
		S[ i ] = S[ i-1 ] + i;
    while(cin>>n&&n)
    {
        long long x,i;
        for( i=1;i<=N/2+1;i++)
        {
             x=S[i];
            if(n<x) break;
        }
        cout<<S[i]-n<<" "<<i<<endl;
    }

    return 0;
}
