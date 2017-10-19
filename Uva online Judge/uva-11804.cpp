#include<bits/stdc++.h>
using namespace std;
struct info{
    int x,y;
    string s;

    bool operator < (const info &b) const{
        if(x==b.x)
            {
                if(y==b.y)  return s<b.s;
                else
                return y<b.y;
            }
        else
        return x>b.x;
    }
    };
int main()
{
    vector<info>v;
    vector<string>v1,v2;
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int a,b;
        string c;
        info z;
        for(int i=0; i<10; i++)
        {
            cin>>z.s>>z.x>>z.y;
            v.push_back(z);
        }
        sort(v.begin(),v.end());

        for(int i=0;i<5;i++)
            v1.push_back(v[i].s);
        for(int i=5;i<10;i++)
            v2.push_back(v[i].s);
            sort(v1.begin(),v1.end());
            sort(v2.begin(),v2.end());
            cout<<"Case "<<j<<":"<<endl;
            cout<<"("<<v1[0];
        for(int i=1;i<5;i++)
             cout<<", "<<v1[i];
        cout<<")"<<endl;
        cout<<"("<<v2[0];
        for(int i=1;i<5;i++)
            cout<<", "<<v2[i];
        cout<<")"<<endl;
        v.clear();
        v1.clear();
        v2.clear();

    }
    return 0;
}
