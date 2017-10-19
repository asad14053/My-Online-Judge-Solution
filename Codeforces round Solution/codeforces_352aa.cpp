#include <bits/stdc++.h>
#include<string>
using namespace std;
int n,i,b;
string s;
int main()
{
    s="0";
    cin>>n;
    for (i=1; i<=1000; i++)
        s=s+to_string(i);
    cout<<s[n];
}
