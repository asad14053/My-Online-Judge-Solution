#include<bits/stdc++.h>
typedef long long ll;

int main()
{
    int a, b, div, mod;
    scanf("%d%d", &a, &b);
    int sum = a;
    while(a>=b)
    {
        div = (a/b);
        sum = sum + div;
        mod = (a%b);
        a= (div+mod);
    }
    printf("%d\n", sum);
    return 0;
}
