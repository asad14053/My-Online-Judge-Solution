#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="abcdefghijklmnopqrstuvwxyz";
    string b="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string c;
    int m,k;
    while(cin>>m>>c>>k)
    {
        for(int i=0;i<m;i++)
        {
            if(c[i]>='A'&&c[i]<='Z')
                c[i]=b[((c[i]-'A')+k)%26];
           else if(c[i]>='a'&&c[i]<='z')
                c[i]=a[((c[i]-'a')+k)%26];
        }
        cout<<c<<endl;
    }
}
/*
1 1 2015
31 12 2014
   */

