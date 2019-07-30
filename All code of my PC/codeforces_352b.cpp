#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[250]={0};
    int n;
    string s;
    cin>>n>>s;
    if(n>26) return 0;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(a[s[i]])
            c++;
            a[s[i]]=1;
    }
    cout<<c<<endl;

    return 0;
}
