#include<bits/stdc++.h>
using namespace std;
struct p
{
    int pos,v;
    bool operator<(struct p&pos)const
    {
        return v<pos.v ;
    }
} a[100];
int main()
{
    int n;
    while(cin>>n)
    {

        for(int i=0; i<n; i++)
        {
            cin>>a[i].v;
            a[i].pos=i;
        }
        sort(a,a+n);
       // sum=0;
        bool p=false;
        int m[202]={0},h=0;
        for(int i=0;i<n;i++)
        {
            if(a[i].v+a[n-i].v==a[i+1].v+a[n-i-1].v)
            {
                if(i!=n-i)
                {
                 p=true;
                   m[h++]=a[i].pos;
                   m[h++]=a[n-i].pos;
                }
                else break;

            }
        }
        for(int i=0;i<n;i++)
            cout<<m[i]<<endl;
    }
    return 0;
}
