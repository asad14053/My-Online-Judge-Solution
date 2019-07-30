#include<bits/stdc++.h>
using namespace std;
const int sz = 20000005;
typedef long long int ll;
ll ara[sz] = {0} ;
int main()
{
    int tc,query;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&query);
        ll a,pid,rid;
        while(query--){
            scanf("%lld",&a);
            if(a == 1){
                scanf("%lld%lld",&pid,&rid);
                if(ara[rid] == 0){
                    printf("Y\n");
                    ara[rid] = pid;
                }
                else
                    printf("N\n");
            }
            else{
                scanf("%lld",&rid);
                if(ara[rid]==0)
                    printf("F\n");
                else{
                    printf("%lld\n",ara[rid]);
                    ara[rid] = 0;
                }
            }
        }
    }

    return 0;
}
