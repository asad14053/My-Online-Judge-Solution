#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,i=0;
    while(cin>>k)
    {
      n=k;
        if (n <= -1) break;

        n -= 1;
        int moves = 0;
        while (n > 0)
        {
            n = n/2;
            moves += 1;
        }
        printf("Case %d: %d\n", ++i, moves);
    }
}
