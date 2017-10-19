#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, r;
	double x;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>x;
		r = ceil(x/2);
		cout<<r<<endl;
	}

	return 0;
}
