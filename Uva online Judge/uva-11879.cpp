#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    char num[10000];
    long long n,r,i,b;
    while(gets(num))
    {
        r=0;
        n=0;

        if(num[0]=='0') return 0;
        for(i=0; i<strlen(num); i++)
        {
            b=num[i]-'0';
            n=r*10+b;
            r=n%17;
        }
        if(r==0) printf("1\n");
        else printf("0\n",num);
    }
    return 0;
}

