#include<bits/stdc++.h>
using namespace std;
long long a[10000000];
int main()
{
    long long n,m,x,y,sm,sz,i,j,p,mn,qq,aa,sm1;
    while(cin>>n>>x>>y)
    {
        mn = 9000000000000000;
        j=0;
        a[j++]=n*x;
        for(i=1; i<=n/2; i++)
        {
            qq=0;
            sz=i;
            sm = i*x;
            while(sz<n)
            {
                sm+=y;
                sz*=2;
                if(sz>=n/2&&qq==0)
                {
                    aa = sz-n/2;
                    sm1 = sm+y+(aa*x);
                    qq=1;
                    a[j++]=sm1;
                }
                //cout<<sz<<" ";
            }
            if(sz>n)
            {
                sz/=2;
                sm-=y;
            }
            p = n-sz;
            //cout<<p<<" ";
            sm+=(p*x);
            //cout<<sm<<" ";
            a[j++]=sm;
        }
        for(i=0; i<j; i++) mn = min(mn,a[i]);
        cout<<mn<<endl;
    }
    return 0;
}
