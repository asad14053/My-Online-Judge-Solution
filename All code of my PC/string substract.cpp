#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 1000
void reverse(char *from,char *to)
{
    int len,i;
    len=strlen(from);
    for(i=0; i<len; i++)
        to[i]=from[len-i-1];
    to[len]='\0';
}
int call_minus(char *large,char *small,char *result)
{
    char L[max],S[max];
    int l,s,now,hold,sign=0,diff;
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
        sign=1;
    }
    if(l==s)
    {
        if(strcmp(large,small)<0)
            strcpy(result,large);
        strcpy(large,small);
        strcpy(small,result);
        now=l;
        l=s;
        s=now;
        sign=1;
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
    char fir[max],sec[max],res[max];
    int len,i;
    while(scanf("%s%s",fir,sec)==2)
    {
        if(call_minus(fir,sec,res)==1)
        {
            printf("-");
        }
        len=strlen(res);
        for(i=0; i<len; i++)
            printf("%c",res[i]);
        printf("\n");
    }
    return 0;
}
