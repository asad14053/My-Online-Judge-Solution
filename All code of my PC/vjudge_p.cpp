#include<bits/stdc++.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char a[2000];
    int i,b,c;
    while(scanf("%s",a)==1)
    {
         if(a[0]=='0') break;

        b=0;
        c=0;
        for(i=0;i<strlen(a);i+=2)
        {

            b+=(a[i]-'0');
        }
        for(i=1;i<strlen(a);i+=2)
        {
            c+=(a[i]-'0');
        }
        if(abs(b-c)%11==0)
            printf("%s is a multiple of 11.\n",a);
        else
            printf("%s is not a multiple of 11.\n",a);
    }
    return 0;
}

#include<bits/stdc++.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
    char a[2000];
    int i,b,c;
    while(scanf("%s",a)==1)
    {
         if(a[0]=='0') break;

        b=0;
        c=0;
        for(i=0;i<strlen(a);i+=2)
        {

            b+=(a[i]-'0');
        }
        for(i=1;i<strlen(a);i+=2)
        {
            c+=(a[i]-'0');
        }
        if(abs(b-c)%11==0)
            printf("%s is a multiple of 11.\n",a);
        else
            printf("%s is not a multiple of 11.\n",a);
    }
    return 0;
}


