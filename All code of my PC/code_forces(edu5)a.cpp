#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
  //  while(1)
    {
        cin>>a>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        while(a.size()<b.size())
            a+="0";
        while(a.size()>b.size())
            b+="0";

        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        for(int i=0;i<a.size();i++)
        {
            if(a[i]>b[i])
            {
                cout<<">"<<endl;
                return 0;
            }
            else if(a[i]<b[i])
            {
                cout<<"<"<<endl;
                return 0;
            }

        }
        cout<<"="<<endl;

    }

    return 0;
}
