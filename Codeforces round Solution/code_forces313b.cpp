#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a1,b1,a2,b2,a3,b3;
	cin >> a1 >> b1;
	cin >> a2 >> b2;
	cin >> a3 >> b3;
	if (a1*b1 < a2*b2 + a3*b3)
		cout << "NO" << endl;
	else if (a1 >= a2 + a3 && b1 >= max(b2,b3))
		cout << "YES" << endl;
	else if (a1 >= a2 + b3 && b1 >=max(a3,b2))
		cout << "YES" << endl;
	else if (a1 >= a3 + b2 && b1 >=max(a2,b3))
		cout << "YES" << endl;
	else if (a1 >= b2 + b3 && b1 >= max(a2,a3))
		cout << "YES" << endl;
	else if (b1 >= a2 + a3 && a1 >= max(b2,b3))
		cout << "YES" << endl;
	else if (b1 >= a2 + b3 && a1 >=max(a3,b2))
		cout << "YES" << endl;
	else if (b1 >= a3 + b2 && a1 >=max(a2,b3))
		cout << "YES" << endl;
	else if (b1 >= b2 + b3 && a1 >= max(a2,a3))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
