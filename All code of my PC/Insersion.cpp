#include<bits/stdc++.h>
using namespace std;
void insort(int a[], int n)
{
    int i,k,p;
    for(i=1;i<n;i++)
    {
        p = a[i];
        k = i-1;
        while(k>=0&&a[k]>p)
        {
            a[k+1] = a[k];
            k--;
        }
        a[k+1] = p;
    }
}
int main()
{
    int n,i,a[10000];
    while(cin>>n)
    {
        for(i=0;i<n;i++) cin>>a[i];
        insort(a,n);
        cout<<"Sorted Array : ";
        for(i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
    }
    return 0;
}
