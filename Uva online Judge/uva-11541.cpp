#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
using namespace std;
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
int main()
{
    int t,no=0,k;
    char s[1000],c;
    sc("%d",&t);
    getchar();
    for(k=1;k<=t;k++)
    {
      gets(s);
      int l=strlen(s);
      pf("Case %d: ",++no);
      for(int i=0;i<l;i++)
      {
          int p=0;
                if(s[i]>='A'&&s[i]<='Z')
                 c=s[i];
                else if(s[i]>='0'&&s[i]<='9')
                {
                    p+=s[i]-'0';
                    i++;
                    while(s[i]>='0'&&s[i]<='9')
                    {
                        p=p*10+s[i]-'0';
                        i++;
                    }
                    --i;
                    for(int j=0;j<p;j++)
                    pf("%c",c);
                }
        }
        pf("\n");
      }

    return 0;
}
