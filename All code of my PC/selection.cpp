#include<bits/stdc++.h>
using namespace std;
void sesort(int a[], int n)
{
    int i,k,j,mn;
    for(i=0;i<n;i++)
    {
        mn = a[i];
        k = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<mn)
            {
                mn = a[j];
                k = j;
            }
        }
        swap(a[i],a[k]);
    }
}
int main()
{
    int n,i,j,a[10000],k;
    while(cin>>n)
    {
        for(i=0;i<n;i++) cin>>a[i];
        sesort(a,n);
        cout<<"Sorted Array : ";
        for(i=0;i<n;i++) cout<<a[i]<<" "; cout<<endl;
    }
    return 0;
}

