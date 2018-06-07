#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,n,marr[10000+10],narr[10000+10];
    cin>>t;
    while(t--)
    {
        cin>>m>>n;

        for(int i=0; i<m; i++)
            cin>>marr[i];
        sort(marr,marr+m);

        for(int i=0; i<n; i++)
            cin>>narr[i];
        sort(narr,narr+n);

        int cnt1=0,cnt2=0;
        int same=0;

        while(cnt1<m && cnt2<n)
        {
            if(marr[cnt1]==narr[cnt2])
            {
                same++;
                cnt1++;
                cnt2++;
            }
            else if(marr[cnt1]>narr[cnt2])
                cnt2++;
            else
                cnt1++;
        }

        cout<<m+n-2*same<<endl;
    }
    return 0;
}
