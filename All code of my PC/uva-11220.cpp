#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    char sent[5000],word[150],tt[50];
    int serial,i,j,k,l,m,test,w,flag;
    scanf("%d ",&test);
    for(i=0; i<test; i++)
    {
        if(i!=0)printf("\n");
        printf("Case #%d:\n",i+1);

        while(gets(sent))
        {
            if(strlen(sent)==0)
            {
                break;
            }
            else
            {
                strcat(sent," ");
                serial=1;
                w=0;
                flag=0;
                for(j=0; j<strlen(sent); j++)
                {
                    if(  (sent[j]>='a'&&sent[j]<='z') || (sent[j]>='A'&&sent[j]<='Z' ) )
                    {
                        word[w]=sent[j];
                        w++;
                        flag=1;
                    }
                    if(sent[j]==' '&& flag==1)
                    {
                        word[w]='\0';
                        if(strlen(word)>=serial)
                        {
                            printf("%c",word[serial-1]);
                            serial++;
                        }
                        w=0;
                        strcpy(word,"");

                        flag=0;
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}
