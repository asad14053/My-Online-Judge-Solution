#include<bits/stdc++.h>
using namespace std;
string f(int a)
{
    string s;
    while(a)
    {
        if(a%2==1) s+='1';
        if(a%2==0) s+='0';
        a/=2;
    }
    return s;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long int a,b,res1=0,res2=0;
        cin>>a>>b;
        string s1=f(a);
        string s2=f(b);
        string ss1;
        string ss2;
        if(s2.size()>s1.size())
        {
            res2=0;
            res1=1;
            for(int i=0;i<s2.size();i++)
                res1*=2;
            res1--;
        }
        else
        {
            long long int kk=1;
            for(int j=s1.size()-1;j>=0;j--)
            {
                if(s1[j]==s2[j])
                    ss1+=s1[j],ss2+=s1[j];
                else
                    break;
            }
            while(ss1.size()<s1.size())
                ss1+='1',ss2+='0';
            for(int j=ss1.size()-1;j>=0;j--)
            {
                if(ss1[j]=='1')
                    res1+=kk;
                if(ss2[j]=='1')
                   res2+=kk;
                kk*=2;
            }


        }
         cout<<"Case "<<i<<": "<<res1<<" "<<res2<<endl;
    }

    return 0;
}
