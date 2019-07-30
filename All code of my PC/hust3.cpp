#include <bits/stdc++.h>
using namespace std;
int main(){
	int k,n;
	scanf("%d %d",&k,&n);

	int t = 0,a;

	for(int i = 0;i < n;++i){
		scanf("%d",&a);
		t+= a;
		t= max(0,t-k);
	}

	printf("%d\n",t);

	return 0;
}
