#include<bits/stdc++.h>
using namespace std;
int rem(int n, int k)
{
    int r = 0;
    for (int i = 1; i < n; i++)
        r = (r + k) % i;

    return r;
}

int main()
{
    int n, x, y, j, num, pulo;
    while(cin>>n,n)
    {
        y = 1;
        while(1)
        {
            if(rem(n,y) != 11) y++;
            else break;
        }
        printf("%d\n",y);
    }
    return 0;
}
