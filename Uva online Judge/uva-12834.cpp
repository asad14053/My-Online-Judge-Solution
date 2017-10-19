#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll A[131072];
int main()
{
    int t , c  = 0;
    int n, m;
    ll x;
    cin>>t;
    while (t --)
    {
        cin>>n>>m;
        for (int i = 0; i < n; i++)
        {
            cin>>A[i];
            A[i] = -A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            A[i] += x;
        }
        sort(A, A+n, greater<long long>());
        ll p = 0;
        for (int i = 0, j = n - 1; i < m; i++, j--)
            if (A[j] < 0)	n--;
        for (int i = 0; i < n; i++)
            p += A[i];
        printf("Case %d: ", ++c);
        if (p <= 0)	cout<<"No Profit"<<endl;
        else		cout<<p<<endl;
    }
    return 0;
}
