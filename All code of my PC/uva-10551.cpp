#include<cmath>
#include<iostream>
#include<string>
using namespace std;
long int any_base_to_decimal(int b,string  a)
{
    int power=0,no;
    long int gap,n=0;
    for(int i=a.length()-1; i>=0; --i)
    {
        gap=long(pow(b,power));
        no=a[i]-'0';
        n+=no*gap;
        ++power;
    }
    return n;
}
void decimal_to_any_base(int b,long int n)
{
    string m="",an="";
    char ch;
    ch = n%b+'0';
    m+=ch;
    n/=b;
    while( n != 0 )
    {
        ch = n%b+'0';
        m+=ch;
        n/=b;
    }
    for(int i=m.length()-1; i>=0; --i)
        an+=m[i];
    cout<<an<<endl;
}
int main()
{
    string p,m;
    int b;
    long int s,R;
    while(1)
    {
        cin>>b;
        if(b==0)
            break;
        cin>>p>>m;
        R = any_base_to_decimal(b,m);
        s=0;
        for (int i=0; i<p.length(); i++)
        {
            s *= b;
            s += p[i]-'0';
            s %= R;
        }
        decimal_to_any_base(b,s);
    }
    return 0;
}
