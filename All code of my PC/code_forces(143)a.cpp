#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=0;
    while(t--)
    {
        bool a;
        int sum=0;
        for(int i=0; i<3; i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum>=2)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
