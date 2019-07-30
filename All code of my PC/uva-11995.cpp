#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int cs=0,cq=0,cpq=0,d=0;
        stack<int>s;
        queue<int>q;
        priority_queue<int>pq;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a==1)
            {
                s.push(b);
                q.push(b);
                pq.push(b);
            }
            else
            {

                d++;
                if(!s.empty() and b==s.top())
                {
                    cs++;
                    s.pop();
                }
                if(!q.empty() and b==q.front())
                {
                    cq++;
                    q.pop();
                }
                if(!pq.empty() and b==pq.top())
                {
                    cpq++;
                    pq.pop();
                }
            }

        }
        if((d==cs and d== cq )||(d==cs and d==cpq)||(d==cq and d==cpq)||(d==cs and d==cq and d==cpq))
            cout<<"not sure"<<endl;
        else if(d==cq)
            cout<<"queue"<<endl;
        else if(d==cs)
            cout<<"stack"<<endl;
        else if(d==cpq)
            cout<<"priority queue"<<endl;
        else cout<<"impossible"<<endl;
    }

    return 0;
}
