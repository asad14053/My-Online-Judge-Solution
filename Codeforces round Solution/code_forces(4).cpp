#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

int lena,lenb,lenc,ans,ans1,ans2;
char a[100010],b[100010],c[100010];
int cha[100],chb[100],chc[100];
int main()
{
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    lena=strlen(a);
    lenb=strlen(b);
    lenc=strlen(c);
    for(int i=0;i<lena;i++)
    {
        cha[a[i]-'a']++;
    }
    for(int i=0;i<lenb;i++)
    {
        chb[b[i]-'a']++;
    }
    for(int i=0;i<lenc;i++)
    {
        chc[c[i]-'a']++;
    }
    for(int i=0;;i++)
    {
        int temp=200010;
        bool flag=true;
        for(int j=0;j<26;j++)
            if(chb[j]*i>cha[j])
            {
                flag=false;
                break;
            }
        if(!flag)break;
        for(int j=0;j<26;j++)
            if(chc[j])
                temp=min(temp,(cha[j]-chb[j]*i)/chc[j]);
        if(temp+i>ans)
        {
            ans=temp+i;
            ans1=i;
            ans2=temp;
        }
    }
    for(int i=1;i<=ans1;i++)
        printf("%s",b);
    for(int i=1;i<=ans2;i++)
        printf("%s",c);
    for(int i=0;i<26;i++)
        for(int j=1;j<=cha[i]-chb[i]*ans1-chc[i]*ans2;j++)
            printf("%c",'a'+i);
    printf("\n");
    return 0;
}
