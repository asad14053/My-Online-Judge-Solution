#include<bits/stdc++.h>
int main()
{
    int a[100],s=0,c=1,ans=0,p,m=-1;
    while(scanf("%d",&a[c])==1)
    {
        s+=a[c];
        ans=s/c;
        if(m<a[c])
            p=c;
            m=a[c];
        if(ans>=50)
        {
            printf("max=%d , pos=%d",m,p);
            break;
        }
        c++;

    }
    return 0;
}
