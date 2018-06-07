#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int a,t,i=1;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>a;
        getchar();
        getline(cin,s);
        // cout<<s<<endl;
        int b=(s.size()>3)?(int)(s[2]-'0'):0;
        //   cout<<s[2]<<endl;
        cout<<"Case "<<i++<<": "<<(a*.5+b*.05)<<endl;
    }

    return 0;
}
