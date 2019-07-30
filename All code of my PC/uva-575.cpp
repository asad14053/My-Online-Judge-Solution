#include<bits/stdc++.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    long int l,i,s,c;
    char a[10000];
    while(scanf("%s",a)==1)
    {
        s=0;

        for(i=0;i<strlen(a);i++)
        {
            c=a[i]-'0';
            s+=c*(pow(2,strlen(a)-i)-1);
        }
        if(s==0)break;
        printf("%ld\n",s);
    }
    return 0;
}
