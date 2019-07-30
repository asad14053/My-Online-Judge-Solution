#include<stdio.h>
#include<string.h>
int febo[50000][1005];
void febonacci()
{
    int i,j;
    febo[0][0]=0;
    febo[1][0]=1;
    febo[2][0]=1;
    for(i=3; i<5000; i++)
    {
        for(j=0; j<1005; j++)
        {
            febo[i][j]=febo[i][j]+febo[i-2][j]+febo[i-1][j];
            if(febo[i][j]>=10)
            {
                febo[i][j+1]=febo[i][j+1]+febo[i][j]/10;
                febo[i][j]=febo[i][j]%10;
            }
        }
    }
}
int main()
{
    febonacci();
    int i,n;
    while(scanf("%d",&n)==1)
    {
        for(i=1004; i>0; i--)
        {
            if(febo[n][i]!=0)
                break;
        }
        for(; i>=0; i--)
            printf("%d",febo[n+1][i]);
        printf("\n");
    }
    return 0;
}

