#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    string b;
    priority_queue<pair<int,string> >pq;
    for (int i = 0; i <5; i++)
    {
        cin>>a>>b;
            pq.push(make_pair(a,b));
    }
cout<<"---------------"<<endl;
    while (!pq.empty())
    {
        cout<<pq.top().second<<" "<<pq.top().first<<endl;
        pq.pop();
    }

    return 0;
}

