#include<bits/stdc++.h>
using namespace std;
void p(int *x,int n)
{
    int m=0;
    for(int i=0;i<n;i++)
    {
        if(*x>m)
            m=*x;
            x++;
    }
    cout<<m<<endl;
}
int main()
{
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    p(a, n);


        return 0;
}
