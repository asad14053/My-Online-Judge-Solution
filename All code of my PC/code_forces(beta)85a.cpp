#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        int l=a.size();
        int f =0;
        for(int i=0;i<l;i++)
        {
            if(tolower(a[i])<tolower(b[i]))
            {
                f=-1;
                break;
            }
            else if(tolower(a[i])>tolower(b[i]))
            {
                f=1;
                break;
            }
        }
            if(!f)
                cout<<"0"<<endl;
            else if(f==-1)
                cout<<"-1"<<endl;
            else cout<<"1"<<endl;
    }
    return 0;
}
