#include<bits/stdc++.h>
using namespace std;
string s="";
int p()
{
    s="";
    s+='1';
    long long i=1;
    while(i*10)
    {
        if(s.size()<=66000)
        {
            s+=itoa(i);
        }
        else break;
    }
}
int main()
{
    p();
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<s[n-1]<<endl;
    }
    return 0;
}
