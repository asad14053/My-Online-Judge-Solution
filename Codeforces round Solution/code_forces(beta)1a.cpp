#include<iostream>
#include<string.h>
using namespace std;
void AA(long long int t)
{
    if (t)
    {
        AA( (t-1) / 26 );
        putchar('A' + (t-1) % 26);
    }
}

int main()
{
    long long int n,C,R,k;
    string s;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        C=0;
        R=0;
        cin>>s;
        if(s[0]=='R')
        {
            int i;
            for(i=1; i<s.size(); i++)
            {
                if(s[i]>='0'&&s[i]<='9')
                    C=C*10+s[i]-'0';
                if(s[i]=='C')
                    for(i; i<s.size() ; i++)
                        if(s[i]>='0'&&s[i]<='9')
                            R=R*10+s[i]-'0';
            }
        }
        if(R!=0&&C!=0)
        {
            int i;
            R=0;
            C=0;
            for(i=1; s[i]!='C'; i++)
            {
                R=R*10+s[i]-'0';
            }
            for(i=i+1; i<s.size(); i++)
            {
                C=C*10+s[i]-'0';
            }
            AA(C);
            cout<<R<<endl;
        }
        else
        {
            int i;
            C=0;
            R=0;
            for( i=0; (s[i]>='A'&&s[i]<='Z'); i++)
                C=C*26+(s[i]-'A'+1);
            for(i; i<s.size(); i++)
                R=R*10+s[i]-'0';

            cout<<'R'<<R<<'C'<<C<<endl;
        }
    }
}
