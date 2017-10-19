#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
    int a[4];
    while(cin>>a[0]>>a[1]>>a[2])
    {
        sort(a,a+3);
        int m=a[0]*a[0]+a[1]*a[1];
        if(m==a[2]*a[2])
        {
           // cout<<gcd(a[0],gcd(a[1],a[2]))<<endl;
            if(gcd(a[0],gcd(a[1],a[2]))==1)
                cout<<"tripla pitagorica primitiva"<<endl;
           else cout<<"tripla pitagorica"<<endl;
        }
        else
            cout<<"tripla"<<endl;
            memset(a,0,sizeof(a));
    }


    return 0;
}
