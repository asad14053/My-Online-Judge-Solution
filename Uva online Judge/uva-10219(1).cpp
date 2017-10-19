#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    while (cin >> n >> k)
    {
         double logSum = 0;
        for (unsigned long long j = 1,i = n - k + 1;j <= k, i <= n;  ++j,++i)
            logSum += log10((double)i)-log10((double)j);
       // for (unsigned long long j = 1; j <= k; ++j)
        //    logSum -= log10((double)j);

        cout << (int)logSum + 1 << endl;
    }
    return 0;
}
