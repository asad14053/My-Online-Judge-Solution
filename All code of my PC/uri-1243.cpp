#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, t, qtd, aux, cm;
    string f;
    bool b;

    while(getline(cin,f))
    {
        t = f.size();
        num = qtd = 0;
        string token;
        istringstream iss(f);

        while ( getline(iss, token, ' ') )
        {
            b = false;
            t = token.size();
            aux = 0;

            for(int i = 0; i < (n); i++)
            {
                if(isdigit(token[i]) || token[i] == '.' && i != t-1)
                {
                    b = true;
                    break;
                }
                else if(token[i] == '.')
                {
                }
                else aux++;
            }

            if(!b)
            {
                num += aux;
                qtd++;
            }
        }

        (qtd == 0) ? cm = 0 : cm = num/qtd;

        if(cm <=3) puts("250");
        else if(cm == 4 || cm == 5 ) puts("500");
        else puts("1000");
    }
}
