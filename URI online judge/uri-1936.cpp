#include <bits/stdc++.h>
using namespace std;

int fat[15];

void fatorial() {
	fat[0] = 1;
	for( int i = 1; i <= 10; i++ )
		fat[i] = i*fat[i-1];
}

int main() {
	fatorial();

	int n, q = 0;

	scanf( "%d", &n );
	for( int i = 10; i >= 1; i-- )
		if( n >= fat[i] ) {
			q += n/fat[i];
			n %= fat[i];
		}
	printf( "%d\n", q );
	return 0;
}
