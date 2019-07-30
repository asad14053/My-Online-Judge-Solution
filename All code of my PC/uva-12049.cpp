#include<bits/stdc++.h>
using namespace std;
int main()
{


    int t,m,n,x;
    cin>>t;
    while(t--)
    {    vector<int>a,b;
        cin>>m>>n;
        for(int i=0;i<m;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(int i=0;i<n;i++)
        {
            cin>>x;
            b.push_back(x);
        }
        int c=0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int n1=0,n2=0;
        while(n1<m and n2<n)
        {
            if(a[n1]==b[n2])
            {
                c++;
                n1++,n2++;
            }
            else if(a[n1]>b[n2])
                n2++;
            else n1++;
        }
        cout<<m+n-2*c<<endl;

    }
    return 0;
}
