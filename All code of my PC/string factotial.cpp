#include<stdio.h>
#include<string.h>
char f[10000];
char factorial[1010][10000];
void multiply(int k)
{
    int cin,sum,i;
    int len = strlen(f);
    cin=0;
    i=0;
    while(i<len)
    {
        sum=cin+(f[i] - '0') * k;
        f[i] = (sum % 10) + '0';
        i++;
        cin = sum/10;
    }
    while(cin>0)
    {
        f[i++] = (cin%10) + '0';
        cin/=10;
    }
    f[i]='\0';
    for(int j=0; j<i; j++)
        factorial[k][j]=f[j];
    factorial[k][i]='\0';
}
void fac()
{
    int k;
    strcpy(f,"1");
    for(k=2; k<=1000; k++)
        multiply(k);
}
/*void print(int n)
{
    int i;
    int len = strlen(factorial[n]);
    int len = strlen(factorial[m]);
    printf("%d!\n",n);
    for(i=len-1; i>=0; i--)
    {
        printf("%c",factorial[n][i]);
    }
    printf("\n");
}*/
int main()
{
    int n;
    factorial[0][0]='1';
    factorial[1][0]='1';
    fac();
    while(scanf("%d%d",&n,&m)==1)
    {
       //print(n);
       // print(m);
        int i;
    int len = strlen(factorial[n]);
    int len = strlen(factorial[m]);
    int x=m-n;
    //printf("%d!\n",n);
    for(i=len-1; i>=0; i--)
    {
        printf("%c",(factorial[n][i])/(factorial[m][i])*factorial[x][i]);
    }
    printf("\n");
    }
    return 0;
}
