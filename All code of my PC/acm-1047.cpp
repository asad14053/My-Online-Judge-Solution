 #include<bits/stdc++.h>
#define SIZE 1000
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
using namespace std;
int a[SIZE][4];
int main()
{
	int tc, N;

	cin >> tc;

	for(int i = 0; i < tc; i++)
	{
		cin >> N;

		for(int j = 0; j < N; j++)
			scanf("%d %d %d", &a[j][0], &a[j][1], &a[j][2]);

		for(int j = 1; j < N; j++)
		{
			a[j][0] += min(a[j - 1][1], a[j - 1][2]);
			a[j][1] += min(a[j - 1][0], a[j - 1][2]);
			a[j][2] += min(a[j - 1][1], a[j - 1][0]);
		}

		printf("Case %d: %d\n", i + 1, min3(a[N - 1][0], a[N - 1][1], a[N - 1][2]));
	}

	return 0;
}
