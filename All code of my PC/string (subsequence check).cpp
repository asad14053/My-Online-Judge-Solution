#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b)// b string theke 1 ta char kete dile ta a string er soman hobe and char sequence same hobe
    {
        int d=0,s=0;
        for(int i=0; i<a.size(); i++)
        {
            for(int j=d; j<b.size(); j++)
                if(a[i]==b[j])
                {
                    s+=1;
                    d=j+1;
                    //cout<<j<<endl;
                    break;
                }
        }
        if(s==a.size())
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
