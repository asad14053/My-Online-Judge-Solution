#include<cstdio>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string row[100+10];
int N;
int main() {
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) cin>>row[i];
	int ans = 0;
	for (int i = 1; i <= N; i++) {
		int cnt = 0;
		for (int j = i; j <= N; j++) {
			if (row[i] == row[j]) cnt++;
		}
		ans = max(ans, cnt);
	}
	printf("%d\n", ans);
	return 0;
}
