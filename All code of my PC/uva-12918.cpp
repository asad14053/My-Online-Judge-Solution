#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long key, door,t;
    cin>>t;
    while(t--)
    {
	     cin>>key>>door;
		printf( "%lld\n", ( door-1 + door-key ) * key / 2 );
    }
}
