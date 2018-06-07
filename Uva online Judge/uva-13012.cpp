#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,ar[100];
    while(cin>>t)
    {
        long a,b,c,d,e=0;
        cin>>ar[0]>>ar[1]>>ar[2]>>ar[3]>>ar[4];
        for(int i=0; i<5; i++)
        {
            if(t==ar[i]) ++e;

        }
        cout<<e<<endl;

    }
    return 0;
}
