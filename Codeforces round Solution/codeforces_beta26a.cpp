#include<bits/stdc++.h>
using namespace std;
int main()
{
    int div[3002]={0}, i, j, n, count=0;
    for(i=2; i<=1500; i++)
    {
        if(div[i]!=0)   continue;
        for(j=i*2; j<=3000; j=j+i)  div[j]++;
    }
    cin>>n;
    for(i=6; i<=n; i++)
    {
        if(div[i]==2)   count++;
    }
    cout<<count<<endl;

    return 0;
}
