#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, c = 0;
    int n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        printf("Case #%d: %d\n", ++c, n*2-1);
    }
    return 0;
}
