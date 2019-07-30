#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,j,k,l,t,a;
    float b;
    char s[100000];
    while(scanf("%d",&t)==1)
    {
        getchar();
        while(t--)
        {
            gets(s);
            l=strlen(s);
            b=sqrt(l);
            a=sqrt(l);
            if(b==a)
                for(j=0; j<a; j++)
                    for(k=j; k<l; k+=a)
                        printf("%c",s[k]);
            else
                printf("INVALID");
            printf("\n");
        }
    }
}
