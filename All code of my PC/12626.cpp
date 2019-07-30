#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n=0;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        int M=0,A=0,R=0,G=0,I=0,T=0,i=0;
        char s[600];
        gets(s);

        for(i=0; i<strlen(s); i++)
        {
            if(s[i]=='M')
                M++;
            else if(s[i]=='A')
                A++;
            else if(s[i]=='R')
                R++;
            else if(s[i]=='G')
                G++;
            else if(s[i]=='I')
                I++;
            else if(s[i]=='T')
                T++;
        }
        int a=min(min(min(min(min(M,A/3),R/2),G),I),T);
        printf("%d\n",a);
    }
    return 0;
}
