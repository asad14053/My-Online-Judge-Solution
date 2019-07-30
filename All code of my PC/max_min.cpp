#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(cin>>n,n)
    {
        cin>>x;
        int mx=x,mn=x;

        for(int i=1; i<n;i++)
        {
            cin>>x;
            if(x>mx)
                mx=x;
                if(x<mn)
                mn=x;

        }
        cout<<"max="<<mx<<"  min="<<mn<<endl;
    }

    return 0;
}
