#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[7][100000];
    int k,m;
    for(int i=0;i<=5;i++)
    {
        cin>>k;
        for(int j=0;j<k;j++)
            cin>>a[i][j];
        sort(a,a+6);
    }
    int s=0;

   for(int i=0;i<k;i++)
    for(int j=1;j<k;i++)
    s+=max(a[j][i],a[i][j]);
    return 0;
}
