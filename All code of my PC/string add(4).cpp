#include<bits/stdc++.h>
using namespace std;
string add(string a, string b)
{
    int i,j,x,y,sum,s,temp=0;
    string c="";
    string e;
    int p=max(a.size(),b.size());
    a.resize(p,'0');
    b.resize(p,'0');
   // cout<<a<<" "<<endl;
    for(i=0; i<p; i++)
    {
            sum=a[i]-'0'+b[i]-'0'+temp;
            s=sum%10;
            c+=s+'0';
            temp=0;
            if(sum>9) temp=1;
            if(i==a.length()-1 && temp==1)
                c+='1';
    }
    return c;
}
int main()
{
    string sum="0",s,a,b,t;
    while(cin>>s>>t)
    {
        if(s=="0") break;
       reverse(s.begin(),s.end());
        reverse(t.begin(),t.end());
        sum=add(s,t);
        reverse(sum.begin(),sum.end());
    cout<<sum<<endl;
    }
    return 0;
}




