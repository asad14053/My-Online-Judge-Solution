#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a)
    {
        b=a;
        reverse(a.begin(),a.end());
        cout<<b+a<<endl;
    }
    return 0;
}
