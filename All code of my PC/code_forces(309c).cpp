#include<bits/stdc++.h>
#define rep(i,s,n) for((i)=(s);(i)<=(n);(i)++)
#define getint(x) scanf("%d",&x)
#define getlong(x) scanf("%lld",&x)
#define putint(x) printf("%d",x)
#define putintln(x) printf("%d\n",x)
#define putlong(x) printf("%lld",x)
#define putlongln(x) printf("%lld\n",x)
#define mp make_pair
#define pb push_back
using namespace std;
typedef long long ll;
ll lmod=1000000007;
ll ncr[1005][1005];
void process()
{
	for(int i=0;i<=1001;i++)
	{
		ncr[i][i]=1;
		ncr[i][0]=1;
		for(int j=i-1;j>0;j--)
			ncr[i][j]=(ncr[i-1][j]+ncr[i-1][j-1])%lmod;
	}
}
int main()
{
	process();
	int n,c,i,sum=0;
	ll ans=1;
	getint(n);
	rep(i,0,n-1)
	{
		getint(c);
		sum+=c;
		if(i!=0)
			ans=(ans*ncr[sum-1][c-1])%lmod;
	}
	putlongln(ans);
	return 0;
}
