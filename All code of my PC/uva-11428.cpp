#include <bits/stdc++.h>
using namespace std;
int main()
{
   long int n, i, j,k,d,c;

    while (scanf("%ld", &d)==1)
    {   if(d==0)
            break;
        c=0;
        for(i=1; i<60; i++)
        {
            for(j=0; j<=i; j++)
            {
                if(d==(i*i*i-j*j*j))
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
            break;
        }
       if(c==1) printf("%d %d\n",i, j);
       else
        printf("No solution\n");
    }
    return 0;
}
