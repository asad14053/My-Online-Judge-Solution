#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b[101],flag,i,j,a,k,m,l,p;
    scanf("%d",&n);
    for(k=1; k<=n; k++)
    {
        memset(b,0,sizeof(b));
        scanf("%d",&m);
        flag=0;
        for(i=1; i<=m*m; i++)
        {
            scanf("%d",&a);
            b[a]++;
        }
        for(j=0; j<101; j++)
        {
            if(b[j]>m)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            printf("Case %d: no\n",k);
        else printf("Case %d: yes\n",k);
    }
    return 0;
}
