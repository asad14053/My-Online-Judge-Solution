#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int k;
		//cin >> k;
		for(int k=0;k<=180;k++)
		if(360 % (180-k) == 0)
		{
			cout << k<<"YES" << endl;
		}
		else
			cout << "NO" <<endl;
	}
	return 0;
}
