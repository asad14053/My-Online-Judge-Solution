
#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define ull unsigned long long
#define EPS 1e-9
#define MOD 1000000007
int main()
{
    //fast();
    //  input();
    //  output();

    string s;
    ll n;
    while(cin>>n>>s)
    {
        int a=0,d=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A')
                a++;
            else d++;
        }
        if(a>d)
            cout<<"Anton"<<endl;
        else if(d>a)
            cout<<"Danik"<<endl;
        else cout<<"Friendship"<<endl;
        }

    return 0;
}



