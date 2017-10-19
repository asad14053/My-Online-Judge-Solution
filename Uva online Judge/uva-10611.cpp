#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=0, q, x, arr[50005], nn, tmp;
    scanf("%d", &nn);
    scanf("%d", &arr[n++]);
    for(int i=1;i< nn;i++)
    {
        scanf("%d", &tmp);
        if(tmp!=arr[n-1])
            arr[n++]=tmp;
    }
    scanf("%d", &q);
    for(int i=0;i<q;i++)
    {
        scanf("%d", &x);
        if(n==1 && x==arr[0])
            printf("X X\n");
        else if(x<arr[0])
            printf("X %d\n", arr[0]);
        else if(x==arr[0])
            printf("X %d\n", arr[1]);
        else if(x>arr[n-1])
            printf("%d X\n", arr[n-1]);
        else if(x==arr[n-1])
            printf("X %d\n", arr[n-2]);
        else
        {
            int lo=0, hi=n-1;
            while(lo+1<hi)
            {
                int mid=(lo+hi)>>1;
                if(arr[mid]==x)
                {
                    lo=mid-1;
                    hi=mid+1;
                    break;
                }
                else if(arr[mid]>x)
                    hi=mid;
                else if(arr[mid]<x)
                    lo=mid;
                //cout<<hi<<" "<<mid<<" "<<lo<<endl;
            }
            printf("%d %d\n", arr[lo], arr[hi]);
        }
    }
    return 0;
}
