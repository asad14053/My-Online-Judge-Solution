#include <bits/stdc++.h>

using namespace std;

#define ll long long

char mp[111][111];

int main(){
	int n;
	cin>>n;
	int ans  = 0;
	for(int i=0;i<n;i++){
		scanf("%s",mp[i]);
		int cnt = 0;
		for(int j=0;j<n;j++){
			if(mp[i][j]=='C'){
				cnt++;
			}
		}
		ans+=(cnt-1)*cnt/2;
	}

	for(int i=0;i<n;i++){
		int cnt= 0;
		for(int j=0;j<n;j++){
			if(mp[j][i]=='C')cnt++;
		}
			ans+=(cnt-1)*cnt/2;
	}

	cout<<ans<<endl;

	return 0;
}
