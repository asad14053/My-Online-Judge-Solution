#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,co;
    int test = 1;
    while(cin>>n>>m>>co,n,m,co)
    {
        bool state[n+1];
        int c[n+1];
        memset(state,false,sizeof(state));
        for(int i=1; i<=n; i++)cin>>c[i];
        int mx = 0;
        int r = 0;
        for(int i=1; i<=m; i++)
        {
            int t;
            cin>>t ;
            if(state[t]==false)
            {
                state[t ] = true;
                r  += c[t ];
                if(r> mx )mx = r ;
            }
            else if(state[t ]==true)
            {
                state[t ] = false;
                r  -= c [t ];
            }

        }
        printf("Sequence %d\n",test++);
        if(mx > co)printf("Fuse was blown.\n\n");
        else
        {
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n",mx);
        }
    }
    return 0;
}
