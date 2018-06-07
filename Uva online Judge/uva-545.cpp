#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int y = (int)floor(-n*log10(2));
        printf("2^-%d = %.3lfE%d\n", n, pow(10, -n*log10(2)-y), y);
    }
    return 0;
}
