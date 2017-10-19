#include<bits/stdc++.h>
using namespace std;

#define MAX 1000000
int dp[MAX + 1];

int memo(int I) {
	if (dp[I] != -1)
		return dp[I];
	int A = memo(int(I - sqrt(I))) % MAX;
	int B = memo(int(log(I))) % MAX;
	int C = memo(int(I * sin(I) * sin(I))) % MAX;
	dp[I] = (A + B + C) % MAX;
	return dp[I];
}

int main(){
	//freopen("testI.txt", "r", stdin);
	//freopen("testO.txt", "w", stdout);
	memset(dp, -1, sizeof dp);
	dp[0] = 1;
	while (true) {
		int N;
		scanf("%d", &N);
		if (N == -1) break;
		printf("%d\n", memo(N));
	}
	return 0;
}
