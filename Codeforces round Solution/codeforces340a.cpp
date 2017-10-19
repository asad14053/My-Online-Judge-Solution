#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,c=0;
    cin>>a;
    c+=a/5;
    if(a%5) c++;
    cout<<c<<endl;
    return 0;
}
