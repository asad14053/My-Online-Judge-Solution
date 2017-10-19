#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i;
    long long int m;
    double delta, y;

   cin>>n;

    for(i = 0; i < n; i++)
    {
        cin>>m;
        delta = 1 + 8*m;
        y = (-1 + sqrt(delta))/2;
        printf("%lld\n", (long long int)y);
    }

    return 0;
}
