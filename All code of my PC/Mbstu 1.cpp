#include<bits/stdc++.h>
using namespace std;
vector<int>v;
queue<int>q;
int path[1000009],vis[1000009];
int main()
{
    int n,m,i,j,p,a,b,pp,qq,kk;
    while(cin>>n)
    {
        memset(vis,0,sizeof(vis));
        memset(path,0,sizeof(path));
        path[0]=-1;
        while(!q.empty()) q.pop();
        q.push(0);
        kk=0;
        while(!q.empty())
        {
            p = q.front();
            //cout<<p<<endl;
            q.pop();
            if(!vis[p])
            {
                vis[p]=1;
                pp = p+7;
                if(!vis[pp]&&pp<n) q.push(pp);
                path[pp]=p;
                qq = p+4;
                if(!vis[qq]&&qq<n) q.push(qq);
                path[qq]=p;
                if(pp==n||qq==n)
                {
                    kk=1;
                  break;
                }
            }
        }
        j=0;
        int bb[2508];
        if(kk)
        {
            a = n;
            while(path[a]!=-1)
            {
                b = path[a];
                bb[j++]=a-b;
                a = b;
            }
        sort(bb,bb+j);
        for(i=0;i<j;i++) cout<<bb[i]; cout<<endl;
        }
        else cout<<-1<<endl;
    }
}
