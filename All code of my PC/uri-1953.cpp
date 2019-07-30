#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,n;
    string a;
    while(cin>>t)
    {
        int c1=0,c2=0,c=0;
        while(t--)
        {
            cin>>n>>a;
            if(a=="EPR") ++c1;
            else if(a=="EHD") ++c2;
            else ++c;
        }
        cout<<"EPR: "<<c1<<"\nEHD: "<<c2<<"\nINTRUSOS: "<<c<<endl;
    }

    return 0;
}
