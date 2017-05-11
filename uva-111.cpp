#include<bits/stdc++.h>
using namespace std;
int n,m,lcs[2000][2000],c[100],cr[100],tmp,l;
int LCS()
{
    for(int i=1; i<=l; i++)
        for(int j=1; j<=l; j++)
        {
            if(c[i]==cr[j])
                lcs[i][j]=lcs[i-1][j-1]+1;
            else
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
    return lcs[l][l];
}
int main()
{
    cin>>l;
    for(int i = 1; i <= l; i++)
    {
        scanf("%d", &tmp);
        c[tmp] = i;
    }
    while(1)
    {
        for(int i = 1; i <= l; i++)
        {
            if( scanf("%d", &tmp) == EOF)return 0;
            cr[tmp] = i;
        }

        printf("%d\n", LCS());
    }
    return 0;
}

