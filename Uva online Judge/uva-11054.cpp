#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main()
{
    ll t,x;
    while(cin>>t,t)
    {
        ll s1=0,s2=0,s=0;
        while(t--)
        {

            cin>>x;
            if(x>=0)
                s1+=x;
            else
                s2+=-x;
            //   cout<<s1<<"  "<<s2<<endl;
            s+=abs(s1-s2);//s1=s2=0;

        }
        cout<<s<<endl;
    }

    return 0;
}
