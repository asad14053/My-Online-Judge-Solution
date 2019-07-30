 #include<bits/stdc++.h>
using namespace std;
#define ll long long
ll phi[1000006];
bool mark[1000006];
void computeTotient(ll n)
{
	for (ll i=1; i<=n; i++)
		phi[i] = i;
		mark[1]=1;
	for (ll i=2; i<=n; i++)
	{
		if (!mark[i])
		{
			for (ll j= i; j<=n; j += i)
			{
			    mark[j]=1;
			phi[j] = phi[j]*(i-1)/i;
			}
		}
	}
}
int main()
{
    computeTotient(1000000);
    ll n;
	while(cin>>n)
    {
        cout<<phi[n]<<endl;
    }
	return 0;
}

