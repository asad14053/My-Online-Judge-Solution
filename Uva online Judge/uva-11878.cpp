#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    char sine,c[1000];
    while(scanf("%d%c%d=%s",&a,&sine,&b,c)==4)
    {
        if(sine=='+')
        {
            if(a+b==atoi(c))
            count++;
        }
        else if(sine=='-')
        {
            if(a-b==atoi(c))
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
