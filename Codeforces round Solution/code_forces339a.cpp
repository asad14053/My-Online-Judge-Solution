#include<bits/stdc++.h>
using namespace std;
typedef long double ll;
int main()
{
    ll a,b,c,s;
    (cin>>a>>b>>c);
    {
        ll s=1;
        while(s<a)
            s*=c;
        if(s>b)
            cout<<-1<<endl;
        else
        {
            cout << fixed;
	cout.precision(0);
            while(s<=b)
            {
                cout<<s<<" ";
                s*=c;
            }
        }
    }
    return 0;
}
