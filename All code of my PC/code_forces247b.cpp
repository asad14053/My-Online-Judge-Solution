#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6][6];
    for(int i=0;i<5;i++)
    for(int j=0;j<5;j++)
        cin>>a[i][j];
    int p[6]={0,1,2,3,4};
    int x,ans=-1;
    do
    {
        x=0;
        for(int i=0;i<4;i++)
        {
            for(int j=i;j<4;j+=2)
                x+=(a[p[j]][p[j+1]]+a[p[j+1]][p[j]]);

        }
        ans=max(ans,x);
    }
     while(next_permutation(p,p+5));
     cout<<ans;
    return 0;
}

