#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    (cin>>a>>b);
    {
        int i=1;
        while(b*i<=a)
            i++;
        c=i*b;
        cout<<c<<endl;
    }
    return 0;
}
