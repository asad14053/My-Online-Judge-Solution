#include <stdio.h>
#include<string.h>

int main()
{
    char s[1001];
    int i,j,k,l,n;
    double sum,sam,p,q,w,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%s",s);
        l=strlen(s);
        for(j=0;j<l;j++)
        {
            if(s[j]=='C')
            {
                if(s[j+1]=='\0')
                sum=sum+12.01;
                else if(s[j+1]=='H'||s[j+1]=='O'||s[j+1]=='N'||s[j+1]=='C')
                sum=sum+12.01;
                else if(s[j+2]=='H'||s[j+2]=='O'||s[j+2]=='N'||s[j+2]=='\0')
                sum=sum+ (12.01*(s[j+1]-'0'));
                else if(s[j+3]=='H'||s[j+3]=='O'||s[j+3]=='N'||s[j+3]=='\0')
                sum=sum+ (12.01*((s[j+1]-'0')*10+(s[j+2]-'0')));
            }
            else if(s[j]=='H')
            {
                if(s[j+1]=='\0')
                sum=sum+1.008;
                else if(s[j+1]=='C'||s[j+1]=='O'||s[j+1]=='N'||s[j+1]=='H')
                sum=sum+1.008;
                else if(s[j+2]=='C'||s[j+2]=='O'||s[j+2]=='N'||s[j+2]=='\0')
                sum=sum+ (1.008*(s[j+1]-'0'));
                else if(s[j+3]=='C'||s[j+3]=='O'||s[j+3]=='N'||s[j+3]=='\0')
                sum=sum+ (1.008*((s[j+1]-'0')*10+(s[j+2]-'0')));
            }
            else if(s[j]=='O')
            {
                if(s[j+1]=='\0')
                sum=sum+16.00;
                else if(s[j+1]=='C'||s[j+1]=='H'||s[j+1]=='N'||s[j+1]=='O')
                sum=sum+16.00;
                else if(s[j+2]=='C'||s[j+2]=='H'||s[j+2]=='N'||s[j+2]=='\0')
                sum=sum+ (16.00*(s[j+1]-'0'));
                else if(s[j+3]=='C'||s[j+3]=='H'||s[j+3]=='N'||s[j+3]=='\0')
                sum=sum+ (16.00*((s[j+1]-'0')*10+(s[j+2]-'0')));
            }
            else if(s[j]=='N')
            {
                if(s[j+1]=='\0')
                sum=sum+14.01;
                else if(s[j+1]=='C'||s[j+1]=='O'||s[j+1]=='H'||s[j+1]=='N')
                sum=sum+14.01;
                else if(s[j+2]=='C'||s[j+2]=='O'||s[j+2]=='H'||s[j+2]=='\0')
                sum=sum+ (14.01*(s[j+1]-'0'));
                else if(s[j+3]=='C'||s[j+3]=='O'||s[j+3]=='H'||s[j+3]=='\0')
                sum=sum+ (14.01*((s[j+1]-'0')*10+(s[j+2]-'0')));
            }
        }
        printf("%0.3lf\n",sum);
    }
    return 0;
}
