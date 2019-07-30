#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,v;
    char cod[50];

    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>cod>>v;

        for(int j = 0; j < 50; j++)
        {
            if(cod[j] == '\0') break;
            if((cod[j] - v) < 65) printf("%c", (cod[j] - v)+ 26);
            else printf("%c", (cod[j] - v));
        }
        printf("\n");
    }

    return 0;
}
