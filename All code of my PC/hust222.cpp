#include<bits/stdc++.h>
using namespace std;
long a[10000]={0,1,1,2,0,2,1,2,0,1,1,2,0,1,1,2,0,1,1,2,0};
int main()
{
    int n;
    cin>>n;
    cout<<a[n%20]<<endl;
    return 0;
}
