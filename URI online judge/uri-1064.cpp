#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    float post = 0.0;
    float soma = 0.0;

    cin >> a;
    if(a >= 0.0)
    {
        post += 1.0;
        soma += a;
    }
    cin >> b;
    if(b >= 0.0)
    {
        post += 1.0;
        soma += b;
    }
    cin >> c;
    if(c >= 0.0)
    {
        post += 1.0;
        soma += c;
    }
    cin >> d;
    if(d >= 0.0)
    {
        post += 1.0;
        soma += d;
    }
    cin >> e;
    if(e >= 0.0)
    {
        post += 1.0;
        soma += e;
    }
    cin >> f;
    if(f >= 0.0)
    {
        post += 1.0;
        soma += f;
    }

    printf("%.0f valores positivos\n", post);
    printf("%.1f\n", soma/post);
    return 0;
}

