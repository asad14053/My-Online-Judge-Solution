#include<stdio.h>
#include<vector>
#include<string.h>
#define MAX 102
using namespace std;
vector<int>vcc[MAX],collect;       // tropological sort
int color[MAX];
void dfs(int n)
{
    color[n]=1;
    int i;
    for(i=0;i<vcc[n].size();i++)
    {
        if(color[vcc[n][i]]==0)
        {
            dfs(vcc[n][i]);
        }
    }
    collect.push_back(n);
}
int node,edge;
int main()
{
    int n,m,i,j;
    while(scanf("%d %d",&node,&edge)==2)
    {
        if(node==0 && edge==0)
        break;
        memset(color,0,sizeof(color));
        for(i=0; i<MAX; i++)
        {
            vcc[i].clear();
        }
        collect.clear();
        for(i=0; i<edge; i++)
        {
            scanf("%d %d",&n,&m);
            vcc[n].push_back(m);
        }
        for(i=1;i<=node;i++)
        {
           if(color[i]==0)
           {
               dfs(i);
           }
        }
        int len = collect.size();
        printf("%d",collect[len-1]);
        for(i=len-2;i>=0;i--)
        {
           printf(" %d",collect[i]);
        }
        printf("\n");
    }

}
