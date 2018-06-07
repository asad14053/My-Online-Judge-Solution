#include<bits/stdc++.h>
using namespace std;

map<string,string>parent;
map<string,int>visited;

bool bfs(string src,string des,map< string,vector<string> >Graph)
{
    queue<string>Q;
    Q.push(src);
    visited[src]=0;
    while(!Q.empty())
    {
        string u=Q.front();
        if(u==des) return true;
        for(int i=0; i<Graph[u].size(); i++)
        {
            string v=Graph[u][i];
            if(!visited[v])
            {
                parent[v]=u;
                visited[v]=1;
                Q.push(v);
            }
        }
        Q.pop();
    }
    return false;
}

void printPath(string a,string b)
{
    if(a==b) return;
    printPath(parent[a],b);
    cout<<parent[a]<<" "<<a<<endl;
}


int main()
{
    //freopen("Input.txt","r",stdin);
    //freopen("Output.txt","w",stdout);
    int t,cnt=0;
    while(cin>>t)
    {
        map< string,vector<string> >Graph;
        if(cnt) cout<<endl;
        while(t--)
        {
            string a;
            string b;
            cin>>a>>b;
            Graph[a].push_back(b);
            Graph[b].push_back(a);
            visited[a]=0;
            visited[b]=0;
        }
        string src,des;
        cin>>src>>des;
        if(bfs(src,des,Graph)) printPath(des,src);
        else cout<<"No route"<<endl;
        cnt++;
    }
    return 0;
}
