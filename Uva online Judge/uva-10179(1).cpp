#include<bits/stdc++.h>
using namespace std;
long long  phi(long long n)
{
    long long res=0;
    long long j;
    if (n==1) return 1;
    res=n;
    if (n%2==0)
    {
        res-=res/2;
        while (n%2==0) n/=2;
    }
    for (j=3; j*j<=n; j+=2)
    {
        if (n%j==0)
        {
            res-=res/j;
            while (n%j==0) n/=j;
        }
    }
    if (n>1) res-=res/n;
    return res;
}


int main()
{
    int n;
    while(cin>>(n)&&n)
    {
        cout << phi(n) << endl;
    }
}

