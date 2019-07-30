#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k, cont;
    char num1[1001], num2[1001];

    cin>>n;
    for(i = 0; i < n; i++)
    {
        cont = 0;
        cin>>num1>>num2;

        for(j = strlen(num2), k = strlen(num1) ; j >= 0; j--, k--)
        {
            if(num1[k] == num2[j]) cont++;
            else break;
        }
        if(cont == strlen(num2)+1) printf("encaixa\n");
        else printf("nao encaixa\n");
    }
    return 0;
}
