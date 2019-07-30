#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[20],b[20],no=0;
    while(scanf("%d",&a[0]))
    {
        if(a[0]<0)
            break;
        for(int i=1; i<=12; i++)
            scanf("%d",&a[i]);
        for(int i=0; i<12; i++)
            scanf("%d",&b[i]);
        printf("Case %d:\n",++no);
        for(int i=0; i<12; i++)
        {
            if(a[i]-b[i]>=0)
            {
                a[i+1]=a[i+1]+a[i]-b[i];
                printf("No problem! :D\n");
            }
            else
            {
                a[i+1]+=a[i];
                printf("No problem. :(\n");
            }
        }
    }
    return 0;
}

