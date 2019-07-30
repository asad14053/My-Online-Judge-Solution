#include<bits/stdc++.h>
using namespace std;
#include<math.h>

int main()
{
    int count=0,a;
    double r,n,ans;
    while(scanf("%lf %lf",&r,&n)==2 && n!=0 && r!=0)
    {
        count++;
        if(r>(n+n*26))
        {
            printf("Case %d: impossible\n",count);
        }
        else
        {
            ans=ceil((r-n)/n);
            a=ans;
            printf("Case %d: %d\n",count,a);
        }
    }
    return 0;
}
