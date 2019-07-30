#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10000],k,m,c,n;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];

    while(cin>>k)
    {
    c=0;
    for(int i=0; i<n; i++)
    {
        if(k==a[i])
        {
            m=i+1;
            c=1;
        }
    }
    if(c==1) cout<<"pos :"<<m<<"\n";
    else
    {
        cout<<"value not found !!\nenter another value:"<<"\n";
        //goto p;
    }
    }
    return 0;
}

