#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int i,n,res;
    while(scanf("%d", &n) && n!= 0)
    {
        if(n == 1)
            printf("%d\n",0);
        else
        {
            res = n;
            for(i = 2 ; i*i <= n ; i++)
            {
                if( n% i ==0)
                {
                    res = res/i*(i-1);
                    while(n%i == 0)
                    {
                        n /= i;
                    }
                    // cout<<n<<" "<<i<<endl;
                }
            }
            if(n != 1)
            {
                res = res/n*(n-1);
            }
            printf("%d\n", res);
        }
    }

    return 0;
}
