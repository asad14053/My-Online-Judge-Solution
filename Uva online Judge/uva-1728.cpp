#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<vector>
#include<queue>
#include<math.h>
#define y1 y11
#define mem(a,b) memset(a,sizeof(a),b)
using namespace std;
typedef long long ll;

const int maxn =1000+10;
int n,cas;
int max_n[maxn];
int f[maxn];
int factor[maxn],cnt[maxn],tot;

void fact(int x)
{
    tot=0;
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)
        {
            factor[tot]=i;
            cnt[tot]=0;
            while(x%i==0)
            {
                cnt[tot]++;
                x/=i;
            }
            tot++;
        }
    }
    if(x!=1) factor[tot]=x,cnt[tot++]=1;
}

int power(int a,int b)
{
    int ans=1;
    while(b)
    {
        if(b&1) ans*=a,b--;
        b>>=1,a*=a;
    }
    return ans;
}

void init()
{
    memset(max_n,-1,sizeof(max_n));
    max_n[1]=1;
    for(int i=2; i<=1000; i++)
    {
        fact(i);
        int tmp=1;
        for(int j=0; j<tot; j++)
        {
            tmp*=((power(factor[j],cnt[j]+1)-1)/(factor[j]-1));
            if(tmp>1000) break;
        }
        if(tmp<=1000) max_n[tmp]=i;
    }
}

int main()
{
    init();
    cas=0;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        printf("Case %d: ",++cas);
        if(max_n[n]==-1) printf("-1\n");
        else printf("%d\n",max_n[n]);
    }
    return 0;
}
