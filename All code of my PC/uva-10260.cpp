#include<stdio.h>
#include<string.h>
int main()
{
    char a[25];
    int x,b[25];
    while(scanf("%s",a)==1)
    {
        memset(b,0,sizeof(b));
        for(int i=0; i<strlen(a); i++)
        {
            if(a[i]== 'A'||a[i]== 'E'||a[i]== 'I'||a[i]== 'O'||a[i]== 'U'||a[i]== 'H'||a[i]== 'W') b[i]=0;

            if(a[i]== 'B'||a[i]== 'F'||a[i]== 'P'||a[i]== 'V') b[i]=1;

            if(a[i]== 'C'||a[i]== 'G'||a[i]== 'J'||a[i]== 'K'||a[i]== 'Q'||a[i]== 'S'||a[i]== 'X'||a[i]== 'Z') b[i]=2;

            if(a[i]== 'D'||a[i]== 'T') b[i]=3;

            if(a[i]== 'L') b[i]=4;

            if(a[i]== 'M'||a[i]== 'N') b[i]=5;

            if(a[i]== 'R') b[i]=6;

            if(i>0 && b[i]==b[i-1])continue;
            else if(b[i]!=0)printf("%d",b[i]);
        }
        printf("\n");
    }
    return 0;
}
