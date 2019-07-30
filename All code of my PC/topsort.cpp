#include <bits/stdc++.h>
using namespace std;
vector<int> graph[100];
int inDegree[100]={0};
vector<int> topSort(int n)
{
    queue<int> Q;
    for(int i=1; i<=n; i++)
        if(inDegree[i] == 0)
            Q.push(i);
    vector<int> res;
    while(!Q.empty())
    {
        int u = Q.front();
        res.push_back(u);
        for(int i=0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(inDegree[v] > 0)
            {
                inDegree[v]--;
                if(inDegree[v] == 0)
                {
                    Q.push(v);
                }
            }
        }
        Q.pop();
    }
    return res;
}

int main()
{
    int n,e,x,y;
    while(cin>>n>>e)
    {
        for(int i=0;i<e;i++)
        {
            cin>>x>>y;
            graph[x].push_back(y);
            inDegree[y]++;
        }
        vector<int> v= topSort(n);
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;;
        }

    }

    return 0;
}
/*
6 8
1 2
3 2
2 4
2 6
2 5
4 6
4 5
6 5

1
3
2
4
6
5
*/
