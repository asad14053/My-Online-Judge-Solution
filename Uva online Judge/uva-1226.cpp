#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,n,m,s;
    char ch[10000];
    scanf("%llu",&n);
    while(n--)
    {
        scanf("%llu %s",&a,&ch);

        m=0;
        for(int j=0; j<strlen(ch); j++)
        {
            s=ch[j]-'0';
            m = (m*10 + s)%a;
            //  cout<<m<<endl;
        }
        printf("%llu\n",m);
        memset(ch,'\0',sizeof(ch));

    }

}
