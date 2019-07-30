#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[100][100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            continue;
        }
        else
        {
            memset(a,0,sizeof(a));
            int m,p,c,d;
            p=(n-1)/2;
            m=0;
            a[m][p]=1;


            for(int k=2; k<=n*n; k++)
            {
                if(m>=1)c=m-1;
                else c=n-1;
                if(p>=1)d=p-1;
                else d=n-1;
                if(a[c][d]>=1)
                    m=(m+1)%n;
                else m=c,p=d;
                a[m][p]=k;

            }
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                    cout<<a[i][j]<<"  ";
                cout<<endl;
            }

        }
    }


    return 0;
}
