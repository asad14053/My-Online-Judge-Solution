#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3])
    {
        sort(a,a+4,greater<int>());

    if(a[0]<a[1]+a[2] or a[0]<a[1]+a[3] or a[0]<a[2]+a[3] or a[1]<a[2]+a[3])
        cout<<"S"<<endl;
    else cout<<"N"<<endl;
    }
    return 0;
}


/*

6 9 22 15
14 40 12 60

*/
