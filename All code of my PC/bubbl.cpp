#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000];
    cout<<"range:"<<endl;
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<(n-1)-i; j++)
                if(a[j]<a[j+1])
                    swap(a[j],a[j+1]);

            cout<<a[i]<<endl;
        }
    }
    return 0;
}
