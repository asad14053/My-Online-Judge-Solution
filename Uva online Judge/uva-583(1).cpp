#include<bits/stdc++.h>
using namespace std;
#define M 70000
bool p[M];
int a[70005];
int sieve (int m)
{
    p[0]=p[1]=false;
    memset(p,true,sizeof(p));
    for(int i=2;i<sqrt(M);i++)
    {
        for(int j=i+i;j<M;j+=i)
            if(p[j])
            p[j]=false;
    }
    int k=0;
    for(int i=2;i<M;i++)
        if(p[i])
        a[k++]=i;
    return k-1;
}
int main()
{
    long l= sieve(M);
   // cout<<l<<endl;
    int n;
    while(cin>>n&&n)
    {
        cout<<n<<" =";
        if(n<0)
        {
            n=-n;
            cout<<" -1 x";
        }
        if(n==1)
        {
            cout<<" 1"<<endl;
            continue;
        }
        for (int j=0 ; a[j]<n && j<l ; j++)
        {
            while (n%a[j]==0)
            {
                n/=a[j];
                if (n>1)printf(" %d x",a[j]);
                else printf(" %d",a[j]);
            }
        }
        if(n>1) cout<<" "<<n;
        cout<<endl;

    }
    return 0;
}
