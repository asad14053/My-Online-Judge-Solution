#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sz,i,j,h,t,p,q,n,T,a[100005],qry;

    cin>>T;
    while(T--)
    {
        cin>>n>>qry;
        for(i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        while(qry--)
        {
            cin>>p;
            if(a[n-1]+n-1<p) cout<<0<<endl;
            else if(a[n-1]+n-1<=p) cout<<1<<endl;
            else
            {
                int baki,pp,st;
                q = lower_bound(a,a+n,p)-a;
                //cout<<q<<" "<<a[q]<<endl;
                pp = n-q;
                st = q-1;
                baki = n-pp-1;
                while(baki>0)
                {
                    //cout<<baki<<" "<<a[st]<<endl;
                    if(p-a[st]<=baki)
                    {
                        pp++;
                        baki-=p-a[st]+1;
                        st--;
                    }
                    else baki=0;
                    //cout<<baki<<" "<<a[st]<<endl;
                }
                cout<<pp<<endl;
            }
        }
    }
}


