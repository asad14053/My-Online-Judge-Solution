#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, j, esq, dir;
    char linha[1001];

    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        cin>>linha;
        dir = 0;
        j = 0;
        esq = 0;
        dir = 0;
        while(1)
        {
            if(linha[j] == '\0') break;
            else if(linha[j] == '<') esq++;
           else  if(linha[j] == '>')
            {
                if(esq > 0)
                {
                    dir++;
                    esq--;
                }
            }
            j++;
        }
        cout<<dir<<endl;
    }
    return 0;
}
