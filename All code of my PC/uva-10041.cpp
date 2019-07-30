#include<bits/stdc++.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int strt[40000],dis,i,j,r,t,k,min,temp;
    while(scanf("%d",&t)==1)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%d",&r);
            for(j=1; j<=r; j++)
            {
                scanf("%d",&strt[j]);
            }
            sort(strt,strt+r+1);

            for(j=1; j<=r; j++)
            {
                dis=0;
                for(k=1; k<=r; k++)
                {
                    dis+=abs(strt[k]-strt[j]);
                }
                if(j==1)min=dis;
                if(dis<min) min=dis;
            }
            printf("%d\n",min);
        }
    }
    return 0;
}
/*#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,t,n,a[5000],sum;
    scanf("%d",&t);
        while(t–)
    {
        int p=50000000;
        scanf("%d",&n);

        for(i=0;i<n;i++)
        scanf("%d",&a[i]);

        sort(a,a+i);

        for(int j=0;j<n;j++)
        {
            sum=0;
            for(int k=0;k<n;k++)
            {
            sum+=abs(a[j]-a[k]);
            }
            p=min(sum,p);
        }
        printf("%d\n",p);
    }
    return 0;
}
*/
