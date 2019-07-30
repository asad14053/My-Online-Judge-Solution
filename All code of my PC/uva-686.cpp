#include<bits/stdc++.h>
using namespace std;
#define SIZE 1000001
bool a[SIZE+4];
void p()
{
    memset(a,true,sizeof(a));
    a[0]=a[1]=false;
    for(int i=2; i<=sqrt(SIZE); i++)
    {
        if(a[i])
            for(int j=i*i; j<=SIZE; j+=i)
                a[j]=false;
    }
}
int main()
{
    int n;
    p();
    while(cin>>n,n)
    {
        int c=0;
       for(int i=n-1;i>=n/2;i--)
        {
            if(a[i])
            {
               int m=n-i;
                if(a[m])
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

