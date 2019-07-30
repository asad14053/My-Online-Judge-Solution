#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t,m,n,i=1;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        queue<ll>q;
        stack<ll>s;
        ll x;
        while(m--)
        {
            cin>>x;
            s.push(x);
        }
        while(n--)
        {
            cin>>x;
            q.push(x);
        }
        ll z=0;
        while(!s.empty() and !q.empty())
        {
            if(min(s.top(),q.front())==s.top())
            {
                z+=s.top();
                s.pop();
            }
            else
            {
                z+=q.front();
                q.pop();
            }
            // cout<<z<<endl;
        }
        while(s.size()>1)
        {
            z+=s.top();
            s.pop();
        }
        while(q.size()>1)
        {
            z+=q.front();
            q.pop();
        }

        cout<<"Case "<<i++<<": "<<z<<endl;
    }
    return 0;
}
