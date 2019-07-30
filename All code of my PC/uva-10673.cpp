#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x, k, T, p, q;

	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &x, &k);
         //if(x<q) swap(x,q);
		q = x % k;
		if(x >= k)
			p =k - q;
		else
			p = 0;
		printf("%d %d\n", p, q);
}	}
