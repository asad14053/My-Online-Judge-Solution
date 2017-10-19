#include<bits/stdc++.h>
using namespace std;
int main()
{

    string a;
    int n;
    while(cin>>a>>n)
    {
        int c=0,p=0;
        for(int i=0;i<a.length();i++)
        {
        if(a[i]=='W')
        {
            c++;
            if(p>0)
            {
                p=0;
                c++;
            }

        }
        else
        {
            p++;
            if(p==n)
            {
                c++;
                p=0;
            }
        }
        }
        if(p>0)c++;
        cout<<c<<endl;
    }
    return 0;
}
