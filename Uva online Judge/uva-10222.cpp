#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    char a[10005];
    int i,l;
    while(gets(a))
    {
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]==']')
                a[i]='p';
            else if(a[i]=='[')
                a[i]='o';
            else if(a[i]=='p' || a[i]=='P')
                a[i]='i';
            else if(a[i]=='o' || a[i]=='O')
                a[i]='u';
            else if(a[i]=='i' || a[i]=='I')
                a[i]='y';
            else if(a[i]=='u' || a[i]=='U')
                a[i]='t';
            else if(a[i]=='y' || a[i]=='Y')
                a[i]='r';
            else if(a[i]=='t' || a[i]=='T')
                a[i]='e';
            else if(a[i]=='r' || a[i]=='R')
                a[i]='w';
            else if(a[i]=='e' || a[i]=='E')
                a[i]='q';

            else if(a[i]=='\'')
                a[i]='l';
            else if(a[i]==';')
                a[i]='k';
            else if(a[i]=='l' || a[i]=='L')
                a[i]='j';
            else if(a[i]=='k' || a[i]=='K')
                a[i]='h';
            else if(a[i]=='j' || a[i]=='J')
                a[i]='g';
            else if(a[i]=='h' || a[i]=='H')
                a[i]='f';
            else if(a[i]=='g' || a[i]=='G')
                a[i]='d';
            else if(a[i]=='f' || a[i]=='F')
                a[i]='s';
            else if(a[i]=='d' || a[i]=='D')
                a[i]='a';

            else if(a[i]=='/')
                a[i]=',';
            else if(a[i]=='.')
                a[i]='m';
            else if(a[i]==',')
                a[i]='n';
            else if(a[i]=='m' || a[i]=='M')
                a[i]='b';
            else if(a[i]=='n' || a[i]=='N')
                a[i]='v';
            else if(a[i]=='b' || a[i]=='B')
                a[i]='c';
            else if(a[i]=='v' || a[i]=='V')
                a[i]='x';
            else if(a[i]=='c' || a[i]=='C')
                a[i]='z';

            else if(a[i]=='=')
                a[i]='0';
            else if(a[i]=='-')
                a[i]='9';
            else if(a[i]=='0')
                a[i]='8';
            else if(a[i]=='9')
                a[i]='7';
            else if(a[i]=='8')
                a[i]='6';
            else if(a[i]=='7')
                a[i]='5';
            else if(a[i]=='6')
                a[i]='4';
            else if(a[i]=='5')
                a[i]='3';
            else if(a[i]=='4')
                a[i]='2';
            else if(a[i]=='3')
                a[i]='1';
            else if(a[i]=='2')
                a[i]='`';
        }
        puts(a);
    }
    return 0;
}

