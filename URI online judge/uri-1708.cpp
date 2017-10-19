#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, dx, dy, r;
    while(cin>>x>>y)
    {
        dx = dy = 0;
        r = 1;
        while(1)
        {
            if((dy - dx) >= x)
                break;
            r++;
            dx += x;
            dy += y;
        }
        printf("%d\n", r);
    }
    return 0;
}
