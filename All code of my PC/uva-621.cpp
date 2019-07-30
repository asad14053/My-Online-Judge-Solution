#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int t,n,len;
    scanf("%d",&n);
    char ch;
    ch=getchar();
    for(t=1; t<=n; t++)
    {
        getline(cin,s);
        len=s.size();
        if(s=="1" || s=="4" || s=="78")
        {
            printf("+\n");
        }
        else if(s[len-2]=='3' && s[len-1]=='5')
        {
            printf("-\n");
        }
        else if(s[0]=='9' && s[len-1]=='4')
        {
            printf("*\n");
        }
        else
        {
            printf("?\n");
        }
    }
    return 0;
}
