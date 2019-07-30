#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],b[2000],n,l,u,m,k,o,c;
    cin>>o;
    while(o--)
    {
        cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b,b+n);
    for(int j=0; j<n; j++)

        if(b[j]==a[j])
        {
            l=0,u=n-1,m=(l+u)/2;
            cin>>k;
                c=0;
                while(l<=u&&k!=a[m])
                {
                    if(k<a[m]) u=m-1;
                    else if(k>a[m]) l=m+1;
                    m=(l+u)/2;
                }
                if(k==a[m])
                    c=1;
                if(c==1)
                    cout<<"pos:"<<m+1<<"\n";
                else
                    cout<<"not found"<<"\n";
        }
        else
        {
            cout<<"long input"<<"\n";
            break;
        }
    }
    return 0;
}
