#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,cnt,a[20002],p,q,k;
    while(cin>>n>>k)
    {
        cnt=0;
        for(i=0; i<n; i++) cin>>a[i];
        for(i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {

                cnt++;
                a[i+1]=a[i+1]+k;
            }
            else if(a[i]>a[i+1])
            {
                p = a[i]-a[i+1];
                q = (p/k)+1;
                cnt+=q;
                a[i+1]=a[i+1]+q*k;
            }
        }
        cout<<cnt<<endl;
    }
}

