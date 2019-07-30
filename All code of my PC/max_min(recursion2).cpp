#include<bits/stdc++.h>
using namespace std;
int max_min(int a[],int l,int h,int fmin,int fmax)
{
    if(l==h) fmin=fmax=a[0];
    else if(l==h-1)
    {
        if(a[l]<a[h])
            fmin=a[l],fmax=a[h];
        else fmin=a[h],fmax=a[l];
    }
    else
    {
        max_min(a,l,h/2,fmin,fmax);
        max_min(a,h/2+1,h,fmin,fmax);
        fmin=min(fmin, fmin);
        fmax=max(fmax,fmax);

    }
    return ;
}

int main()
{
    int n,a[100];
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
            cin>>a[i];
        int fmin=a[0];int fmax=a[0];
        max_min(a,0,n-1,fmin,fmax);
        cout<<fmin<<" "<<fmax<<endl;
    }
    return 0;
}
