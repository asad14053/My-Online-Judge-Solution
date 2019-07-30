#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,zz,vm;
    int n;
    while(cin>>n>>a)
    {
        int c=0;
        vector<int>v,v1;
        int x=0,y=0,z=0,l=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='B')
            {
                c++;
            }
            else
            {
                if(c)
                v.push_back(c);
                c=0;
            }
          //v.push_back(c);
        }

        if(a[n-1] and c)
            v.push_back(c);
        cout<<v.size()<<endl;
        if(v.size()>0)
        {cout<<v[0];
        for(int i=1;i<v.size();i++)
            cout<<" "<<v[i];
            cout<<endl;
        }
    }
    return 0;
}
