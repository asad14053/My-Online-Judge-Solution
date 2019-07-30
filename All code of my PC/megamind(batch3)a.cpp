#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    int a[11];
    while(cin>>a[i++])
    {
        if(i>=10)
            break;
    }
    sort(a,a+10);
    for(int i=9;i>=7;i--)
        cout<<a[i]<<endl;
}
