#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int a,d,i;
    while(scanf("%d%d",&a,&d)==2)
    {
        if(a==0 && d==0)
        {
            break;
        }
        int at[a],dt[d];
        for(i=0; i<a; i++)
            scanf("%d",&at[i]);
        for(i=0; i<d; i++)
            scanf("%d",&dt[i]);
        sort(at,at+a);
        sort(dt,dt+d);
        if(at[0]<dt[1])
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }
    return 0;
}
