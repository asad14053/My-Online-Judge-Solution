#include<bits/stdc++.h>
using namespace std;
struct p
{
    int min;
    int max;
};
struct p getMinMax(int arr[], int low, int high)
{
    struct p minmax, mml, mmr;
    int mid;
    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }
    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }
    mid = (low + high)/2;
    mml = getMinMax(arr, low, mid);
    mmr = getMinMax(arr, mid+1, high);
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;
    return minmax;
}
int main()
{
    int n,arr[100];
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
            cin>>arr[i];
        struct p minmax = getMinMax(arr, 0,n-1);
        printf("Minimum element is %d\n", minmax.min);
        printf("Maximum element is %d\n", minmax.max);
    }
    return 0;
}
