#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,s;
    while(cin>>n>>s)
    {
        if(s==0 and n==1)
           {

            cout<<0<<endl;
            continue;
           }
        else if((s==0 and n!=1)||(n==0))
        {
            cout<<"No solution"<<endl;
            continue;
        }
        else{
            for(int i=1; i<=n; i++)
                if(i==1)
                    cout<<s;
                else cout<<0;
            cout<<endl;
        }
    }
    return 0;
}
