#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    gets(a);
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]=='0')
        {
            if(i==0)
                a[i]='O';
            else a[i]='o';
        }
        else if(a[i]=='O'||a[i]=='o') a[i]='0';
    }
    puts(a);

return 0;
}

