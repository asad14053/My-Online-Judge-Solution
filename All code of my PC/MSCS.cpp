#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],sm,sfsm,i,j,n,idx[100],mxidx,smidx;
    while(cin>>n)
    {
        sm=0;sfsm=0;j=0;smidx = 0;
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++)
        {
            if(sfsm+a[i]>sm)
            {
                mxidx=i;
                sm=sfsm+a[i];
                sfsm=sm;
            }
            else if(sfsm+a[i]>0) sfsm=sfsm+a[i];
            else
            {
                sfsm=0;
                idx[j++]=i;
            }
            //cout<<sfsm<<" "<<sm<<endl;
        }
        sort(idx,idx+j,greater<int>());
        //for(i=0;i<j;i++) cout<<idx[i]<<" "; cout<<endl;
        for(i=0;i<j;i++)
        {
            if(idx[i]<mxidx)
            {
                smidx=idx[i];
                break;
            }
        }
        cout<<"Sequence : ";
        for(i=smidx+1;i<=mxidx;i++) cout<<" "<<a[i]; cout<<endl;
        cout<<"Summation : "<<sm<<endl;
    }
    return 0;
}
