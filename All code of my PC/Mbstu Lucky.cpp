#include<bits/stdc++.h>
using namespace std;
vector<int>v;
queue<int>q;
int path[2000000],vis[1000009];
int main()
{
    int n,m,i,j,p,a,b,pp,qq,kk;
    path[0]=-1;
    while(cin>>n)
    {
        kk=0;
        if(n%7==0)
        {
            for(i=1;i<=n/7;i++) cout<<7;
            cout<<endl;
            continue;
        }
        p = n/7;
       while(1)
       {
           pp = 7*p;
           qq = n-pp;
           if(qq%4==0)
           {
               for(i=1;i<=qq/4;i++) cout<<4;
               for(i=1;i<=p;i++) cout<<7;
               cout<<endl;
               kk=1;
               break;
           }
           if(p==0) break;
           p--;
       }
       if(!kk) cout<<-1<<endl;
    }
}

