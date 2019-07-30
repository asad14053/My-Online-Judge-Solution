#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    while(cin>>n)
    {
        int c=1;
        while(n!=0)
        {
            if(n%2 and (n/2)%2)
             c++;
             n/=2;
        }
        cout<<c<<endl;
    }
    return 0;
}

