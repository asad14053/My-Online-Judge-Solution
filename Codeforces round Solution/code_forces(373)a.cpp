#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n+2];
        for(int i=0; i<n; i++)
            cin>>a[i];
        if(n==1)
        {
            if(a[n-1]==15)
               cout<<"DOWN"<<endl;
            else if(a[n-1]==0)
                cout<<"UP"<<endl;
            else
            cout<<-1<<endl;
            break;
        }
        if(a[n-1]>a[n-2])
        {
            if(a[n-1]==15)
                cout<<"DOWN"<<endl;
            else
            cout<<"UP"<<endl;
        }
        else if (a[n-1]<a[n-2])
        {if(a[n-1]==0)
        cout<<"UP"<<endl;
        else
         cout<<"DOWN"<<endl;
        }
    }
    return 0;
}
