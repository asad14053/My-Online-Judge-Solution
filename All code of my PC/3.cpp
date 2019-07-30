#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j=0,d,y,m,a;
    string name;
    map<int,string>mp;
    priority_queue< int >pq1;
    priority_queue< int >pq2;
    scanf("%d",&n);
    while(n--)
    {
       cin>>name;
       scanf("%d %d %d",&d,&m,&y);
       a=d+m*31+y*12*31;
       mp[a]=name;
       pq1.push(a);
       pq2.push(-a);
    }
        cout<<""<<mp[pq1.top()]<<endl;
        cout<<""<<mp[-pq2.top()]<<endl;
    return 0;
}
