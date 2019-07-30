#include<bits/stdc++.h>
using namespace std;
#include<string.h>
char f[100000];
char factorial[10000][100000];
void multiply(long int k)
{
    long  cin,sum,i;
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
    for(k=2; k<=10000; k++)
        multiply(k);
}

int main()
{
    long n,m;
    factorial[0][0]='1';
    factorial[1][0]='1';
    fac();
    cin>>n;
    while(n--)
    {
        cin>>m;
        int len = strlen(factorial[m]);
        cout<<len<<endl;
    }
    return 0;
}

