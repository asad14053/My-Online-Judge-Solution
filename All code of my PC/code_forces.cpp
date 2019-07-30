#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
#include <string.h>
char a[100000], b[100000],c[100000],e[100000];
int main()
{
    int co,d,t=0;
    gets(a);
    cin>>d;
    co=0;

    for(int i=0; i<strlen(a); i++)
    {
        c[i-t]=b[i-t]=a[i];
        b[strlen(b)]='\0';
        c[strlen(c)]='\0';

        if(strlen(b)>1)
        {
            for(int l=0; l<strlen(b); l++)
                e[l]=b[strlen(b)-l-1];
            e[strlen(b)]='\0';
            if (strcmp(e,c)== 0)
            {
            t=i+1;
                co=co+1; cout<<co<<"??"<<endl;
            }
        }

    }
   cout<<co<<"[["<<endl;
    if(co==d)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
