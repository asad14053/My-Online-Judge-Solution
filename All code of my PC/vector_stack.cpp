#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> pq;
    string a;
    for(int i=0; i<5; i++)
    {
        cin>>a;
        pq.push(a);
    }

    while (!pq.empty())
    {
        cout <<pq.top() << endl;
        pq.pop();
    }

    return 0;
}



