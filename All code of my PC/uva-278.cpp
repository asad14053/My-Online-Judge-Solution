#include <bits/stdc++.h>
using namespace std;
char inp[100];
int main()
{
    int t, x, y;
    char a;
    scanf("%d",&t);
    getchar();
    while (t--)
    {
        gets(inp);


        sscanf(inp,"%c %d %d",&a,&x,&y);
        if (a=='k')
            printf("%d\n",(x*y+1)/2);
        else if (a=='K')
            printf("%d\n",((x+1)/2) * ((y+1)/2));
        else if (a=='Q'||a=='r')
            printf("%d\n",min(x,y));
    }
    return 0;
}

