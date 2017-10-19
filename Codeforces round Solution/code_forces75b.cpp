#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll x;
    string s;
    int c;
    (cin>>s);
    {
         x=0;
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
            if(s[i]=='1')
          x+=pow(2,i);
      //  cout<<x<<endl;
         c=0;
        while(x!=1)
        {
            if(x%2==1)
                x+=1;
            else x/=2;

            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
