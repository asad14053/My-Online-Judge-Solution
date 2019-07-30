#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a[100];
    for(int i=0;i<5;i++)
    {
        int m;
        cin>>m;
        a[m].push_back(i);
    }
     for(int i=0;i<100;i++)
       cout<<a[1][i]<<endl;
    return 0;
}
