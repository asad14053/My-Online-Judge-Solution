#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("12210.txt", "r", stdin);
    int B, S, m, b, i, cs=1;
    while(scanf("%d%d", &B, &S))
    {
        if( !B && !S )break;
        m = 65;
        for(i=0; i<B; i++)
        {
            scanf("%d", &b);
            m = min(m, b);
        }
        for(i=0; i<S; i++)
            scanf("%d", &b);
        if( B<=S )
            printf("Case %d: 0\n", cs++);
        else
            printf("Case %d: %d %d\n", cs++, (B-S), m);
    }
    return 0;
}
