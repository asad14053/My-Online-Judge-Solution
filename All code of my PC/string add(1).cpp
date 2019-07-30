#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void add(char *s1,char *s2,char *r)
{
    int sum;
    char k[2000];
    s1=strrev(s1);
    s2=strrev(s2);
   printf("%s\n",s1);
    int f=strlen(s1);
    int s=strlen(s2);
    int i,j;
    for(i=0,j=0;(i<f&&j<s);i++)
    {
        sum=(s1[i]-'0')+(s2[i]-'0')+j;
        r[i]=sum%10+'0';
          j=sum/10;
    }
    for(;i<f;i++)
    {
        sum=s1[i]+j-'0';
        r[i]=sum%10+'0';
          j=sum/10;
    }
     for(;i<s;i++)
     {
          sum=s2[i]+j-'0';
        r[i]=sum%10+'0';
          j=sum/10;
     }
     if(j!=0) r[i++]=j+'0';
     r[i]='\0';
     if(strlen(r)==0) strcpy(r,"0");
     r=strrev(r);
}
int main()
{
    char s1[1000],s2[1000],r[2000];
    while(scanf("%s%s",s1,s2)==2)
    {
        add(s1,s2,r);
            printf("%s",r);
        cout<<"\n";
    }
    return 0;
}

