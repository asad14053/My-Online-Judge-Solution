#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;
map<string,int>cont;
int f(int x)
{
   return x?x:1;
}
string find(string r)
{
    if(mp[r]=="")
        return r;
    return mp[r]=find(mp[r]);
}
int join(string a,string b)
{
    string p=find(a);
    string q=find(b);
    //cout<<p<<" "<<q<<endl;
    if(p!=q)
    {
        mp[p]=q;
        cont[q]=f(cont[p])+f(cont[q]);
        //cout<<f(cont[p])+f(cont[q])<<endl;
        return cont[q];
    }
    return cont[p];
}
int main()
{
    int n,t;
    string a,b;
    cin>>t;
    while(t--)
    {
        mp.clear();
        cin>>n;
        cont.clear();
        while(n--)
        {
            cin>>a>>b;
            cout<<join(a,b)<<endl;

        }
    }
    return 0;
}

