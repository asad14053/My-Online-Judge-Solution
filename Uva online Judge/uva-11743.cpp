#include<stdio.h>
#include<string.h>
int main()
{
    char a[5],b[5],c[5],d[5];
    int k,s1,s2,st;
    while(scanf("%d",&k)==1)
    {
        getchar();
        while(k--)
        {
            scanf("%s %s %s %s",&a,&b,&c,&d);
            s1=s2=st=0;
            s1+=((a[0]-48)*2)/10+((a[0]-48)*2)%10+((a[2]-48)*2)/10+((a[2]-48)*2)%10;
            s1+=((b[0]-48)*2)/10+((b[0]-48)*2)%10+((b[2]-48)*2)/10+((b[2]-48)*2)%10;
            s1+=((c[0]-48)*2)/10+((c[0]-48)*2)%10+((c[2]-48)*2)/10+((c[2]-48)*2)%10;
            s1+=((d[0]-48)*2)/10+((d[0]-48)*2)%10+((d[2]-48)*2)/10+((d[2]-48)*2)%10;
            s2=a[1]-48+a[3]-48+b[1]-48+b[3]-48+c[1]-48+c[3]-48+d[1]-48+d[3]-48;
            st=s1+s2;
            if(st%10==0)printf("Valid\n");
            else printf("Invalid\n");
        }
    }
    return 0;
}
