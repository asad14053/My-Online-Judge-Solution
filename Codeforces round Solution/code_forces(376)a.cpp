#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abcdefghijklmnopqrstuvwxyz";
     string szz="abcdefghijklmnopqrstuvwxyz";
     map<int,char>sx;
    string a;
    while(cin>>a)
    {
        int l=a[0]-s[0];
        int cost=l>=13?(13-(l-13)):l;
        int sum=cost;
       // cout<<"l  "<<cost<<endl;
        for(int i=1;i<a.size();i++)
        {
            int x=abs(a[i]-a[i-1]);
            cost=(x>=13?(13-(x-13)):x);
            sum+=cost;
          //  cout<<a[i]<<" "<<cost<<endl;
        }
        cout<<sum<<endl;
    }
    return 0;
}
