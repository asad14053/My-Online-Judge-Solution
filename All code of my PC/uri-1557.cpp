#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],m;
    while(cin>>n)
    {
        if(n==0) break;
        m=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                a[m++]= pow(2,i+j);

            }

        }
        int c=0;
        int g=a[n*n-1];
     //   cout<<g<<endl;
        while(g!=0)
        {
            g/=10;
            c++;
        }
      //  cout<<c<<endl;
        for(int k=0; k<m; k++)
        {
            printf("%*d ",c,a[k]);
            if((k+1)%n==0)
                cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}

