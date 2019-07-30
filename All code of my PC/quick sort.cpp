#include<bits/stdc++.h>
using namespace std;
int a[100];
int quick(int l,int h)
{
    if(l<h)
    {
        int i,j,k,p;
        p=a[l];
        i=l+1;
        j=h;
        while(1)
        {

            while(p>a[i] and i<=h)
                i++;
            while(p<a[j] and j>=l)
                j--;
                if(i<j) swap(a[i],a[j]);
            else break;
        }
        a[l]=a[j];
        a[j]=p;
        quick(l,j-1);
        quick(j+1,h);
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++)
            cin>>a[i];
        quick(0,n-1);
        for(int i=0; i<n; i++)
            cout<<a[i]<<endl;
    }
    return 0;
}
