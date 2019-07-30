#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tCase;
     cin>>n;
    for(int i=1; i<=n; i++)
    {
        int x1,y1,x2,y2,n;
        printf("Case %d:\n",i);
        cin>>x1>>y1>>x2>>y2;
       cin>>n;
        for(int j=1; j<=n; j++)
        {
            int x,y;
            cin>>x>>y;
            if(x>x1 && x<x2 && y>y1 && y<y2)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
