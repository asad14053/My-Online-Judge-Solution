#include<bits/stdc++.h>
using namespace std;
char a[100000],b[100000];
int main()
{
    while(gets(a))
    {
        if(!strcmp(a,"0 0")) break;
        int i=0,j=0;
        char c=a[0];
        for(i=0;i<strlen(a);i++)
            if(a[i]!=c and a[i]!=' ')
                b[j++]=a[i];
        for(i=0;i<j;i++)
            if(b[i]!='0') break;
        if(i==j)
        cout<<0<<endl;
        else
        {
            for(;i<j;i++)
                cout<<b[i];
            cout<<endl;
        }
    }

    return 0;
}
