#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, tri, len;
    int t=0;
    while (cin>>n)
    {
        int sum[n+2];
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            sum[i] = i == 0 ? a : sum[i - 1] + a;
        }
         t=0;
        len = sum[n-1]/3;
        int  j =0, k = 0;

        for (int i = 0; sum[i] + 2 * len <= sum[n - 1]; i++)
        {
            while ( sum[j] < sum[i] + len ) j++;
            while ( sum[k] < sum[i] + 2 * len ) k++;

            if ( sum[j] == sum[i] + len && sum[k] == sum[i] + 2 * len )
            {
                t++;
            }
        }

        cout<<t<<endl;
    }

    return 0;
}
