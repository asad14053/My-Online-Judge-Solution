#include<stdio.h>
#include<math.h>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    int t,i;
    double ans,n;
    priority_queue<double>vec;
    scanf("%d",&t);
    while(t--)
    {
        ans=0.0;
       //vec.clear();
        while(scanf("%lf",&n)==1)
        {
            if(n==0.0)break;
            vec.push(n);
        }
        for(i=0;i<vec.size();i++)
            ans+=(2*pow(vec[i],i+1));

        if(ans>5000000.0)
            printf("Too expensive\n");
        else printf("%0.lf\n",ans);

    }

    return 0;
}

