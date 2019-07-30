#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
   (cin>>a>>b>>c);
    if(a!=0 or b!=0 or c!=0)
    {
        long long m=(a+c);
        if(b==c+m)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
/*
1 7 3
10 10 0
1 -4 5
0 60 50
*/
