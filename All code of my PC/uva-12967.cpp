#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long p[32] = {0, 1, 4, 12, 28};
    for (int i = 5; i <= 30; i++)
        p[i] = p[i-1]*2 + 4;
    int t, n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cout<<p[n]<<endl;
    }
    return 0;
}
