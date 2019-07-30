#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=1;
    cin>>t;
    while(t--)
    {
        int a[15],b[15],n,l,s=0;
        cin>>n>>l;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        for(int i=0; i<n; i++)
            cin>>b[i];
        bool f=true;
        for(int i=0; i<n; i++)
        {
            if(a[i]<=b[i])
                continue;
            else
            {
                f=false;
                break;
            }
        }
        if(f and s<=l)cout<<"Case "<<k++<<": Yes"<<endl;

        else   cout<<"Case "<<k++<<": No"<<endl;


    }
    return 0;
}
