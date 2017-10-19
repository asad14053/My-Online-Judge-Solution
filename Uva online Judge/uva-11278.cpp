#include <stdio.h>
#include <string.h>
int main()
{
    char qwerty[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char QWERTY[]="~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
    char right_down[]="`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'";
    char right_up[]="~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
    char input[10000];
    int i,j,k,flag;
    while(gets(input))
    {

        for(i=0; i<strlen(input); i++)
        {
            flag=0;
            for(j=0; j<strlen(qwerty); j++)
            {
                if(input[i]==qwerty[j])
                {
                    printf("%c",right_down[j]);
                    flag=1;
                    break;
                }
                if(input[i]==QWERTY[j])
                {
                    flag=1;
                    printf("%c",right_up[j]);
                    break;
                }


            }
            if(flag==0)printf("%c",input[i]);
        }

        printf("\n");
    }

    return 0;
}
