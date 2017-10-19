#include <iostream>
#include <stdio.h>
#include <algorithm>

typedef long long ll;
using namespace std;

const int N = 1e3+3;

int a[N];

int main()
{
    //freopen("input.txt", "r", stdin);
    int n, m, i, j, mx, an, c;
    scanf("%d%d", &n, &m);
    for(i=0; i<m; ++i)
    {
        a[i]=0;
        mx=0;
        for(j=0; j<n; ++j)
        {
            scanf("%d", &c);
            if(c>mx)
            {
                mx=c;
                a[i]=j;
            }
        }
    }
    sort(a, a+m);
    an=0;
    mx=0;
    for(i=0; i<m; )
    {
        for(j=i; (j<m)&&(a[i]==a[j]); ++j);
        if(j-i>mx)
        {
            mx=j-i;
            an=a[i];
        }
        else if((j-i==mx)&&(an>a[i])) an=a[i];
        i=j;
    }

    printf("%d", an+1);

    return 0;
}
