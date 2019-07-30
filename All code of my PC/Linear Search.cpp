#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a[1000],item,j;
    while(cin>>n)
    {
        j=0;
        for(i=0;i<n;i++) cin>>a[i];
        cout<<"Enter Search Value : ";
        cin>>item;
        for(i=0;i<n;i++)
        {
            if(a[i]==item)
            {
                cout<<item<<" found at "<<i+1<<endl;
                j=1;
                break;
            }
        }
        if(j==0) cout<<item<<" not found."<<endl;
    }
    return 0;
}
