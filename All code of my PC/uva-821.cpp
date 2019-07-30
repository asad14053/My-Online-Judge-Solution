#include<bits/stdc++.h>
using namespace std;
int ad[200][200];
bool on[200];
int main()
{
    int u,v,c=1;
    while(true)
    {
        memset(ad,63,sizeof(ad));
        memset(on,false,sizeof(on));
        cin>>u>>v;
        if(!u and !v) break;
        ad[u][v]=1;
        on[u]=true;
        on[v]=true;
        while(cin>>u>>v,u,v)
        {
            ad[u][v]=1;
            on[u]=true;
            on[v]=true;
        }
        for(int k=0;k<105;k++)
            for(int i=0;i<105;i++)
            for(int j=0;j<105;j++)
            ad[i][j]=min(ad[i][j],ad[i][k]+ad[k][j]);
            double s=0,ss=0;
        for(int i=0;i<105;i++)
            for(int j=0;j<105;j++)
        {
            if(i==j) continue;
            if(on[i] and on[j])
            {
                s+=ad[i][j];
                ss++;
            }

        }
        cout.precision(4);
        printf("Case %d: average length between pages = %.3lf clicks\n",c++,s/ss);

    }
    return 0;
}
