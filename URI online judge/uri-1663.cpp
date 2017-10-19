#include<bits/stdc++.h>
using namespace std;
int ara[1000005];
int invara[1000005];

int main()
{
    int n,i,count;

    while(cin>>n)
    {
        count=0;
        if(n==0)
            break;

        for(i=1; i<=n; i++)
        {
            cin>>ara[i];
            invara[ara[i]]=i;
        }
        for(i=1; i<=n; i++)
        {
            if(ara[i]==invara[i])
                count++;
        }
        if(count==n)
            printf("ambiguous\n");
        else
            printf("not ambiguous\n");
    }

    return 0;
}
