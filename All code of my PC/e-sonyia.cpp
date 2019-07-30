#include<iostream>
using namespace std;
int main()
{
    int i,j=1,c[100],k=0,x=0,a,l;
    char s[100]="Repetitive",p[100];

    for(i=0; s[i]!=NULL; i++)
        l=i;
    for(i=0; i<=l; i++)
    {
        s[i]=tolower(s[i]);
    }
    for(i=0; i<=l; i++)
    {
        a=0;
        for(k=0; k<i; k++)
        {
            if(s[i]==s[k])
                a=1;
        }
        if(a!=1)
        {
            p[x]=s[i];
            c[x]=1;

            for(j=i+1; j<=l; j++)
            {
                if(s[i]==s[j])
                    c[x]++;
            }
            x++;
        }

    }
    for(i=0; i<x; i++)
    {
        cout<<p[i]<<"="<<c[i];
        if(i<x-1)
            cout<<",";
    }

}
