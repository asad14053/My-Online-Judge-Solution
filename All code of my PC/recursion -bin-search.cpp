#include<bits/stdc++.h>
using namespace std;
int bsearch(int a[], int k, int lb, int ub)
{
    int mid;
    while(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(k<a[mid])
            ub=mid-1;
        else if(k>a[mid])
            lb=mid+1;
        else if(k==a[mid])
            return(mid);
        (bsearch(a,k,lb,ub));
    }
}

int main( )
{
    int a[200],pos,n,k,i,lb,ub;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];
    cin>>k;
    lb=0;
    ub=n-1;
    pos=bsearch(a,k,lb,ub);
    if(pos!=-1)
        printf("Search successful, element found at position %d",pos);
    else
        printf("Search unsuccessful, element not found");
    return 0;
}
