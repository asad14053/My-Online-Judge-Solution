#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 10005
/*******************************************************************/
void reverse(char *from, char *to )
{
    long len=strlen(from);
    long l;

    for(l=0; l<len; l++)
        to[l]=from[len-l-1];
    to[len]='\0';
}

int call_minus(char *large, char *small, char *result)
{
    char L[MAX], S[MAX];
    long l,s,now,hold,diff,sign=0;

    for(l=0; l<MAX; l++) L[l]=S[l]=0;
    l=strlen(large);
    s=strlen(small);
    if(l<s)
    {
        strcpy(result,large);
        strcpy(large,small);
        strcpy(small,result);
        now=l;
        l=s;
        s=now;
        sign = 1;
    }
    if(l==s)
    {
        if(strcmp(large, small)<0)
        {
            strcpy(result,large);
            strcpy(large,small);
            strcpy(small,result);
            now=l;
            l=s;
            s=now;
            sign =1;
        }
    }
    reverse(large,L);
    reverse(small,S);
    for(; s<l; s++)
        S[s]='0';
    S[s]='\0';
    for(now=0,hold=0; now<l; now++)
    {
        diff=L[now]-(S[now]+hold);
        if(diff<0)
        {
            hold=1;
            result[now]=10+diff+'0';
        }
        else
        {
            result[now]=diff+'0';
            hold=0;
        }
    }
    for(now=l-1; now>0; now--)
    {
        if(result[now]!='0')
            break;
    }
    result[now+1]='\0';
    reverse(result,L);
    strcpy(result,L);
    return sign;
}

int main()
{
    char fir[MAX],sec[MAX],res[MAX];
    long len, test, i;

    while(scanf("%ld", &test)!=EOF)
    {
        while(test--)
        {
            for(i=0; i<MAX; i++) fir[i]=sec[i]=res[i]=0;
            scanf("%s%s",fir,sec);
            if(call_minus(fir,sec,res)==1) printf("-");
            len = strlen(res);
            for(i=0; i<len; i++) printf("%c",res[i]);
            printf("\n");
        }
    }

    return 0;
}

