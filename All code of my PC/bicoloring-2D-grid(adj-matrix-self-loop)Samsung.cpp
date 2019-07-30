// C++ program to find out whether a given graph is Bipartite or not.
// It works for disconnected graph also.
#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;
bool isBipartite(int G[][MAX],int V);
int main()
{
	freopen("in0.txt","r",stdin);
	freopen("out0.txt","w",stdout);
    int t;
	//cin>>t;
	int g[MAX][MAX];
	//while(t--)
	{
		memset(g,0,sizeof (g));
		int n;
		cin>>n;
	
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>g[i][j];
			}
		}
		
		cout<<isBipartite(g,n)<<endl;
	}
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
/*The function takes an adjacency matrix representation of the graph (g)
and an integer(v) denoting the no of vertices as its arguments.
You are required to complete below method */
vector<int>g[1000];
int color[1000];
int fx[]={0,0,-1,1};
int fy[]={-1,1,0,0};
bool dfs(int G[][MAX], int V, int par, int s, int color[])
{
    
    if(par==s) return false;
    if(par==-1) color[s]=1;
    bool f=true;
    for(int i=0;i<V;i++)
    {
        if(G[s][i] and color[i]==-1)
        color[i]=1-color[s],f&=dfs(G,V,s,i,color);
        else if(G[s][i] and color[i]==color[s])
        return false;
    }
   // f&=dfs(g[s][i],1-c);
    return f;
}
bool isBipartite(int G[][MAX],int V)
{
    memset(color,-1,sizeof(color));
     //Your code here
     for(int i=0;i<V;i++)
     if(color[i]==-1)
     return dfs(G,V,-1,i,color);
}