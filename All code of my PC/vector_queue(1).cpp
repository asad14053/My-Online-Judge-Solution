#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> pq;
    string a;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        pq.push(a);
    }

    while (!pq.empty())
    {
        cout <<pq.front() << endl;
        pq.pop();
    }

    return 0;
}


