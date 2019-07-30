#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a[100004],sm,i,j,hit,tm;
    while(cin>>n>>hit>>tm)
    {
        sm=0;
        for(i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        j=0;
        for(i=0; i<n; i++)
        {
            m = a[i]/hit;
            if(a[i]%hit) m++;
            sm+=m;
            j++;
            if(sm>=tm) break;
        }
        if(sm>tm) j--;
        cout<<j<<endl;
    }
}
