#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int t;
    cin>>t;
    while(t--)// b string theke 1 ta kore nile ta b string er soman hobe and char sequence same hobe
    {
        cin>>b;
        int n;
        cin>>n;
        while(n--)
        {
            cin>>a;
            int d=0,s=0,i=0;
            for(int j=d; j<b.size(); j++)
            {
                if(a[i]==b[j])
                {
                    s+=1;
                    d=j+1;
                    i++;
                    continue;
                }
                else
                {
                    if(s==a.size())
                        break;
                    s=0;
                    i=0;
                }
            }
            // cout<<s<<endl;
            if(s==a.size())
                cout<<"y"<<endl;
            else cout<<"n"<<endl;
        }
    }
    return 0;
}


