#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, q;
	double a, b;
	while(cin>>t && t)
	{
		for(int i=1;i<=t;i++)
		{
			cin>>q>>a>>b;
			printf("Size #%d:\n", i);
			printf("Ice Cream Used: %.2lf cm2\n", (((a + b) * 5.0) / 2) * q);
		}
		printf("\n");
	}

	return 0;
}
