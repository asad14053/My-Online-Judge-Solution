#include<stdio.h>
#include<string.h>
char a[255],b[255],c[255];
int s[1005];
int main()
{
    int i,j,n,m,k,p;
    while(scanf("%s%s",a,b)!=EOF)
    {
        strcpy(c,a);
        n=strlen(c);
        for(i=0; i<n; i++)
            a[i]=c[n-i-1];
        strcpy(c,b);
        m=strlen(c);
        for(i=0; i<m; i++)
            b[i]=c[m-i-1];
        memset(s,0,sizeof(s));
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                s[i+j]+=(a[j]-'0')*(b[i]-'0');
                if(s[i+j]>9) s[i+j+1]+=s[i+j]/10,s[i+j]%=10;
            }
        }
        for(i=1000; i>=0; i--) if(s[i]) break;
        if(i==-1) putchar('0');
        for(; i>=0; i--) printf("%d",s[i]);
        puts("");
    }
    return 0;
}

