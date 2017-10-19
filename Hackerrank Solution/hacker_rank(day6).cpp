#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        for(int i=0;i<a.size();i+=2)
            cout<<a[i];
        cout<<" ";
        for(int i=1;i<a.size();i+=2)
            cout<<a[i];
            cout<<endl;

    }
    return 0;
}
