// C program to calculate Euler's Totient Function
#include <stdio.h>
#define ll long long
ll phi(ll n)
{
	ll result = n;
	for (ll i=2; i*i<=n;i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
				n /= i;
			result -= result / i;
		}
	}
	if (n > 1)
		result -= result / n;
	return result;
}

// Driver program to test above function
int main()
{
	int n;
	for (n=1; n<=10; n++)
	printf("phi(%d) = %d\n", n, phi(n));
	return 0;
}

