#include<bits/stdc++.h>
using namespace std;
int ara[10000];
int main()
{
    //memset(ara,0,sizeof ara);
    int tc,n,i,j,tmp;
    cin>>tc;

    while(tc--)
    {
        int tmp=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            tmp++;
        }
        int t=0;
        for(i=0; i<n; i++)
        {
            t=ara[i];
            for(j=i+1; j<n; j++)
            {
                if(t==ara[j])
                {
                    tmp=tmp-1;
                    break;
                }
            }
        }

        printf("%d\n",tmp);
    }

    return 0;
}
