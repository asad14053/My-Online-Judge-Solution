#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    while(getline(cin,a))
    {
        b="";
        stringstream ss(a);
        int m=a.find('e');
        for(int i=0;i<m;i++)
            c+=a[i];
        for(int i=m+1;i<a.size();i++)
            b+=a[i];
        cout<<b<<c;
    }
    return 0;
}
