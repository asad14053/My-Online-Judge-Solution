#include<bits/stdc++.h>
using namespace std;
int a[100];
int merge(int l,int m,int h)
{
    int t[1000],i,j,k;
    i=l;j=m+1;k=l;
    while(i<=m and j<=h)
    {
        if(a[i]>a[j])
            t[k++]=a[j++];
            else t[k++]=a[i++];
    }
    while(i<=m)
        t[k++]=a[i++];
         while(j<=h)
        t[k++]=a[j++];
        for(int i=l;i<=h;i++)
            a[i]=t[i];

}
int m1(int l,int h)
{
    if(l<h)
    {
    int mm=(l+h)/2;
    m1(l,mm);
    m1(mm+1,h);
    merge(l,mm,h);
    }
}
int main()
{
   int n;
   while(cin>>n)
   {
       memset(a,0,sizeof(a));
       for(int i=0;i<n;i++)
        cin>>a[i];
       m1(0,n-1);
       for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
   }
    return 0;
}
