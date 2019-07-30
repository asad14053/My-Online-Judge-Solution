#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d,m,count;
    char nm[502];
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        count=0;
        int flag[502]={0};
        scanf("%d %d %s",&d,&m,&nm);
        for(int j=0;j<d;j++)
        {
            for(int l=j+1;l<j+1+m && l<d;l++)
            {
                if(nm[j]==nm[l] && flag[l]==0)
                {
                    count++;
                    flag[l]=1;
                }
            }
        }
        printf("Case %d: %d\n",i,count);
    }
    return 0;
}
