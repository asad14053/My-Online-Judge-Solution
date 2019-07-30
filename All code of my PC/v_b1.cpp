#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[1000000];
    int n;
    while(cin>>n)
    {
        long long s=0,l=INT_MIN, m[1000000],x,k=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>0)
                l=max(l,x);
        a[i]=x;
    s+=x;

        }
        long long mxs=0,sfs=0;
        for(int i=0;i<n;i++)
        {
            if(sfs+a[i]>mxs)
            {
                sfs+=a[i];
                mxs=sfs;
            }
            else if(sfs+a[i]>0)
                sfs+=a[i];
            else
            {
                sfs=0;
                m[l++]=i+1;
            }
            if(sfs==mxs)
                k=i;
        }
        if(m[l-1]>k)
        m[l-1]=m[l-2];
        if(s)
        cout<<mxs<<" "<<s<<endl;
        else cout<<l<<" "<<l<<endl;
     //   for(int i=m[l-1];i<=k;i++)
       //     cout<<a[i]<<" ";
        //    cout<<endl;
    }


    return 0;
}
/*

8
2 -3 1.5 -1 3 -2 -3 3
9
2 -1 3 -6 5 2 -1 7 -8
21
2 -3 1 -5 1 2 -8 3 1 5 -1 6 -3 -2 4 9 -7 1 -2 3 6
22
3 -2 -3 1 -5 1 2 -8 3 1 6 -1 6 -3 -2 4 9-7 1 -2 3 6

*/

