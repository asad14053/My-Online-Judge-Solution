#include<bits/stdc++.h>
#include <cstdio>
#include <cctype>
#include <queue>
using namespace std;

int main()
{
    int a,b;
    priority_queue<pair<int, int> >pq;
    for (int i = 0; i <5; i++)
    {
        cin>>a>>b;
            pq.push(make_pair(a,b));
    }
cout<<"---------------"<<endl;
    while (!pq.empty())
    {
        printf("%d %d\n", pq.top().first, pq.top().second);
        pq.pop();
    }

    return 0;
}

