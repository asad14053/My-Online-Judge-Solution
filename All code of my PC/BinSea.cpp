#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a[10000],low,high,mid,item;
    while(cin>>n)
    {
        for(i=0; i<n; i++) cin>>a[i];
        j = 0;
        cout<<"Enter Search Value : ";
        cin>>item;
        low = 0;
        high = n-1;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(a[mid]==item)
            {
                cout<<item<<" found at "<<mid+1<<endl;
                j=1;
                break;
            }
            if(a[mid]<item) low = mid+1;
            else  high = mid-1;
        }
        if(j==0) cout<<item<<" not found"<<endl;
    }
    return 0;
}
