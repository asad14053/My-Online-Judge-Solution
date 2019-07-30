#include<bits/stdc++.h>
using namespace std;
typedef  long long int LL;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        LL n,ans=0,i;
        cin >> n;
        for(i=1; i*i<n; i++)
        {
            if(n%i==0)
            {
                if(i%2==0)ans++;
                if((n/i)%2==0)ans++;
            }
        }
        if(i*i==n && i%2==0)ans++;
        cout << ans << endl;
    }
    return 0;
}
