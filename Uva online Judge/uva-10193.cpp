#include<stdio.h>
#include<string.h>
int bD(char a[])
{
    int m =0;
    m = a[0] - '0';
    for(int i = 1; i <strlen(a); i++)
    {
        m *= 2;
        m += a[i] - '0';
    }
    return m;
}
int GCD(int a, int b)
{
    return b?GCD(b,a%b):a;
}

int main()
{
    int n, x, y, gcd;
    char s1[32], s2[32];

    scanf("%d", &n);
getchar();
    for(int t = 1; t <= n; t++)
    {
        gets(s1);
        gets(s2);

        x = bD(s1);
        y = bD(s2);

        gcd = GCD(x, y);

        if(gcd> 1)
            printf("Pair #%d: All you need is love!\n", t);
        else
            printf("Pair #%d: Love is not all you need!\n", t);
    }
    return 0;
}
