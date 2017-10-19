  #include <bits/stdc++.h>
  using namespace std;
    #define pi acos(-1)
    int main ()
    {
        int t, i;
        scanf("%d", &t);
        for (i=1;i<=t;i++)
        {
            double r;
            scanf("%lf",&r);
            double a, b;
            a=(double)pi*r*r;
            b=(double)4*r*r;
            printf("Case %d: %.2lf\n",i,(double)b-a);
        }
        return 0;
    }
