#include<bits/stdc++.h>
using namespace std;

#define SIZE 100005
int f[SIZE];
int tree[SIZE];
int MaxIdx;
int read(int idx)
{
	int sum = 0;
	while(idx > 0)
	{
		sum += tree[idx];
		idx -= (idx & -idx);
	}
	return sum;
}

int update(int idx, int val)
{
	while(idx <= MaxIdx)
	{
		tree[idx] += val;
		idx += (idx & -idx);
	}
}

int query(int i, int j)
{
	return read(j) - read(i-1);
}

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);

	unsigned i, j, k, l, sum = 0;
	int tc, t, d, x, y, r, n, m, p, q,current, first;
	char ch;
	bool flag;

	scanf("%d", &tc);
	getchar();

	for(t = 1; t <= tc; t++)
	{
		scanf("%d %d", &n, &q);
		printf("Case %d:\n", t);
		MaxIdx = n;

		memset(tree, 0, sizeof tree);

		for(i = 1; i <= n; i++)
		{
			scanf("%d", &f[i]);
			update(i, f[i]);
		}

		for(i = 0; i < q; i++)
		{
			scanf("%d", &m);

			switch(m)
			{
				case 1:
					scanf("%d", &j); j++;
					update(j, -f[j]);
					printf("%d\n", f[j]);
					f[j] = 0;
					break;
				case 2:
					scanf("%d %d", &j, &k); j++;
					update(j, k);
					f[j] += k;
					break;
				case 3:
					scanf("%d %d", &j, &k); j++, k++;
					printf("%d\n", query(j, k));
					break;
			}
		}
	}

	return 0;
}
