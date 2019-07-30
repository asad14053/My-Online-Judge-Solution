#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;int sum=0;
    vector<int>p;

    for(int i=0;i<4;i++)
    {
        cin>>a;
        p.push_back(a-1);
        sum+=p[i];
    }
    cout<<sum+1<<endl;

    return 0;
}
