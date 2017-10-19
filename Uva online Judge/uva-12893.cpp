#include <bits/stdc++.h>
using namespace std;

int main() {

	long long t,n;
	cin>>t;
	while (t--)
    {
        cin>>n;
		printf("%d\n", (int)__builtin_popcountll(n));
    }
	return 0;
}
