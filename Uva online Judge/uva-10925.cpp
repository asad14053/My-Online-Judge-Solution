#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
string sum(string a,string b)
{
    ll i,j,x,y, sum=0,s=0,temp=0;
    string c="";
    if(a.size()<b.size()) swap(a,b);
    for(i=0; i<a.size(); i++)
    {
        if(i<b.size())
        {
            sum=a[i]-'0'+b[i]-'0'+temp;
            s=sum%10;
            c+=s+'0';
            temp=0;
            if(sum>9)
                temp=1;
            if(i==a.length()-1&& temp==1)
                c+='1';
        }
        else
        {
            sum=a[i]-'0'+temp;
            s=sum%10;
            c+=s+'0';
            temp=0;
            if(sum>9)
                temp=1;
            if(i==a.length()-1&& temp==1)
                c+='1';
        }

    }
    //  cout<<"c--"<<c<<endl;
    return c;
}
string div(string a, int b)
{
    int La = a.size(),x = 0;
    string ret;

    for(int i = 0; i < La; ++i)
    {
        x = x * 10 + a[i] - '0';
        ret += (char)('0' + x / b);
        x %= b;
    }
    while(ret.size() > 1 && ret[0] == '0')
        ret = ret.substr(1,ret.size() - 1);

    return ret;
}
int main()
{
    ll t,n,k=1;
    string a,b;
    while(cin>>t>>n,t,n)
    {
        b="0";
        while(t--)
        {
            cin>>a;
            reverse(a.begin(),a.end());
            // reverse(b.begin(),b.end());
            b=sum(a,b);
            // cout<<b<<endl;

        }
        reverse(b.begin(),b.end());
        cout<<"Bill #"<<k++<<" costs "<<b<<": each friend should pay "<<div(b,n)<<endl<<endl;
    }
    return 0;
}
