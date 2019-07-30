#include<iostream>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
using namespace std;

string rev(string a)
{
    int i,j;
    string b="";
    for(i=0,j=a.length()-1; i<a.length(); i++,j--)
        b+=a[j];
    return b;
}
string add(string a, string b)
{
    int i,j,x,y,sum,s,temp=0;
    string c="";
    string e;
    if(a.length()<b.length())
    {
        e=a;
        a=b;
        b=e;
    }
    for(i=0; i<a.length(); i++)
    {
        if(i<b.length())
        {
            x=a[i]-'0';
            y=b[i]-'0';
            sum=x+y+temp;
            s=sum%10;
            c+=s+'0';
            temp=0;
            if(sum>9) temp=1;
            if(i==a.length()-1 && temp==1)
                c+='1';
        }
        else
        {
            x=a[i]-'0';
            sum=temp+x;
            s=sum%10;
            c+=s+'0';
            temp=0;
            if(sum>9) temp=1;
            if(i==a.length()-1 && temp==1)
                c+='1';
        }
    }
    return c;
}

int main()
{
    string sum="0",s,a;
    while(cin>>s)
    {
        if(s=="0") break;
        a=rev(s);
        sum=add(a,sum);
    }
    cout<<rev(sum)<<endl;
    return 0;
}

