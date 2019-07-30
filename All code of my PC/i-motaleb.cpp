#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,n;
    while(scanf("%d:%d",&h,&m)==2)
    {
        cin>>n;
        int l=(m+n)%60;
        h+=(m+n)/60;
        if(h>12)
            h-=12;
       // if(h<10)
           // cout<<"0";
        cout<<h<<":";
        printf("%02d\n",l);
    }
    return 0;
}
