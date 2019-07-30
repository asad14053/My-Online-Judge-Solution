#include<bits/stdc++.h>
using namespace std;

int main()

{

    int t,i,d,flag;
    while(scanf("%d",&t) &&t)
    {
        vector<int>v;
        flag=0;
        for(i=0; i<t; i++)
        {
            scanf("%d",&d);
            v.push_back(d);
        }
        sort(v.begin(),v.end());
        for(i=1; i<t; i++)
            if(v[i]-v[i-1]>200)
            {
                flag=1;
                break;
            }
        if(2*(1422-v[t-1])>200)
            flag=1;
        if(!flag)
            printf("POSSIBLE\n");
        else printf("IMPOSSIBLE\n");
    }
    return 0;
}
