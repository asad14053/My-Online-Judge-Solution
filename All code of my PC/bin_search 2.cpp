#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a[1000],i,k,n,l,u,m,c;
    scanf("%ld",&n);
    for(int i=0; i<n; i++)
        cin>>a[i];
    while(cin>>k)
    {
        c=0;
        l=0;
        u=n;
        m=(l+u)/2;
        while(l<u)
        {
            if(k>a[m])
                l=m+1;
            else
                u=m;
            m=(l+u)/2;
        }
        if(k==a[m])
        {
            c=1;
        }
        if(c==1)
            printf("yes: %ld\n",m+1);
        else
            printf("no\n");
    }
    return 0;
}
