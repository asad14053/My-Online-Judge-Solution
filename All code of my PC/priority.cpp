#include<bits/stdc++.h>
using namespace std;
int main()
{

     priority_queue<int> q;
     int n;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         int x;
         cin>>x;
         q.push(x);
     }
     while(!q.empty())
     {
         cout<<q.top()<<endl;
         q.pop();
     }
    return 0;
}
