#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,cnt,a[20002];
    while(cin>>n)
    {
        for(i=0;i<n;i++) cin>>a[i];
        cnt=0;
        for(i=0;i<n;i++)
        {
            for(j=1;j<n-i;j++)
            {
                if(a[j-1]>a[j])
                {
                    swap(a[j],a[j-1]);
                    cnt++;
                }
            }
        }
        for(i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
        cout<<cnt<<endl;
    }
}
