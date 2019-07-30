#include<bits/stdc++.h>
using namespace std;
int a[1100];
void qSort(int lf, int rt);
int main()
{
    int n,i,j;
    while(cin>>n)
    {
        for(i=0;i<n;i++) cin>>a[i];
        qSort(0,n-1);
        for(i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
    }
    return 0;
}
void qSort(int lf, int rt)
{
    int p=lf,q=rt,pvt;
    pvt=a[(lf+rt)/2];
    while(p<=q)
    {
        while(a[p]<pvt) p++;
        while(a[q]>pvt) q--;
        if(p<=q)
        {
            swap(a[p],a[q]);
            p++;q--;
        }
    }
    if(lf<q) qSort(lf,q);
    if(p<rt) qSort(p,rt);
}
