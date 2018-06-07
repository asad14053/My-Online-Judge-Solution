#include<bits/stdc++.h>
int main()
{
    long long a,b,j,i,c,x,y,z=0;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        x=a;
        y=b;
        if(x<0&&y<0) break;
        c=0;

        while(y>=x)
        {
            if(x==1)
            {
                c++;
                break;
            }

            else if(x%2==0)
            {
                c++;

                x/=2;

            }
            else if(x%2==1)
            {
                c++;

                x=3*x+1;

            }

        }



        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",++z,a,b,c);
    }
    return 0;
}





