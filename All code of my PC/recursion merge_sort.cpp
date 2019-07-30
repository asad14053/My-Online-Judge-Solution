#include<bits/stdc++.h>
using namespace std;
int a[100];
void merge(int low,int mid,int high)
{
    int t[500],i,j,k;
    i=low;
    j=mid+1;
    k=low;
    while((i<=mid) && (j<=high))
    {
        if(a[i]>=a[j])
            t[k++]=a[j++];
        else
            t[k++]=a[i++];
    }
    while(i<=mid)
        t[k++]=a[i++];
    while(j<=high)
        t[k++]=a[j++];
    for(i=low; i<=high; i++)
        a[i]=t[i];
}
void m(int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        m(l,mid);
        m(mid+1,h);
        merge(l,mid,h);
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        m(0,n-1);
        for(int i=0; i<n; i++)
            printf("%d\n",a[i]);
    }
    return 0;
}
