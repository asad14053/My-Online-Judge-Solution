#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char a,b,c,d,e;bool f=false;
    vector<string>v;
    string s;
    while(t--)
    {
        s="";
       cin>>a>>b>>c>>d>>e;

       if((a==b )and (a=='O')and (b=='O') and !f)
       {
           a='+';
           b='+';
           f=true;
       }
       if(d==e and d=='O' and e=='O' and !f )
       {
           d='+';
           e='+';
           f=true;
       }
       s+=a;
       s+=b;
       s+=c;
       s+=d;
       s+=e;
       v.push_back(s);
    }
    if(f)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<endl;
    }
    else cout<<"NO"<<endl;
}
