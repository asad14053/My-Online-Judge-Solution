
#include<bits/stdc++.h>
using namespace std;
#define SIZE 1004
#define BOUNDARY(i, j) ((i >= 0 && i < row) && (j >= 0 && j < column))
long long mn=1e18;
using namespace std;
char grid[SIZE][SIZE];
bool visited[SIZE][SIZE];
long long row, column, n=0;
int X[] = {0, 1, 0, -1};
int Y[] = {-1, 0, 1, 0};
void dfs(int x, int y)
{
	for(int i = 0; i < 4; i++)
	{
	    if(grid[x+X[i]][y+Y[i]] == 'H')
        {
            mn=min(mn,n);
            //cout<<mn<<endl;
            n=0;
            return ;
        }
		if(BOUNDARY(x+X[i], y+Y[i]) && grid[x+X[i]][y+Y[i]] == '.' && !visited[x+X[i]][y+Y[i]])
		{
			visited[x+X[i]][y+Y[i]] = true;
			if(abs(x+X[i]-x)!=0 or abs(y+Y[i]-y)!=0)
			n++;
			dfs(x+X[i], y+Y[i]);
		}
	}
}
int main()
{
	int tc, t = 0, i, j, k, m, mx = 0, x, y, q, value, node;
	char ch;
	long long sum = 0;

	//freopen("input.txt", "r", stdin);
	//scanf("%d", &tc);

	while(scanf("%d %d", &column, &row)==2)
	{

		memset(visited, 0, sizeof visited);

		getchar();
		for(i = 0; i < row; i++)
		{
			for(j = 0; j < column; j++)
			{
				grid[i][j] = getchar();
				if(grid[i][j] == 'V')
				{
					x = i;
					y = j;
					visited[x][y] = true;
				}
			}
			getchar();
		}
		n = 0;
		dfs(x, y);
		printf("%lld\n", mn);
	}
	return 0;
}
