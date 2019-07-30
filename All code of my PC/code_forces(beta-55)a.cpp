#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    while(cin>>a)
    {
        b="";c="";
        int co=0,dom=0;
        for(int i=0;i<a.size();i++)
        {
            if(isupper(a[i]))
                co++;
            else dom++;
            b+=toupper(a[i]);
            c+=tolower(a[i]);
        }
        if(co>dom)
            cout<<b<<endl;
        else cout<<c<<endl;
    }
    return 0;
}
