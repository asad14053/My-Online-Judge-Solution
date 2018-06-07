#include <bits/stdc++.h>
using namespace std;

int in[100001];

int main()
{
    int t,qq=1;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0; i<n; i++) cin>>in[i];
        int x = 0;
        for(int i=0; i<n; i++)
            if(in[i] == x+1) x++;
        printf("Case %d: %d\n",qq++,n-x);
    }
    return 0;
}
