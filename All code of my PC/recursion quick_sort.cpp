#include<bits/stdc++.h>
using namespace std;
void quicksort(int a[],int low,int high)
{
    int pivot,t,i,j;
    if(low<high)
    {
        pivot=a[low];
        i=low+1;
        j=high;
        while(1)
        {
            while(pivot>a[i]&&i<=high)
                i++;
            while(pivot<a[j]&&j>=low)
                j--;
            if(i<j)
            swap(a[i],a[j]);
            else
                break;
        }
        a[low]=a[j];
        a[j]=pivot;
        quicksort(a,low,j-1);
        quicksort(a,j+1,high);
    }
}
int main()
{
    int low,n,high,a[100];
    cin>>n;
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    low=0;
    high=n-1;
    quicksort(a,low,high);
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
        return 0;
}
