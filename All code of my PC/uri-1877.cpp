#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        int c=0;
        long a[m+4];
        for(int i=0;i<m;i++)
            cin>>a[i];
         for(int i=1;i<m-1;i++)
            if(a[i]>a[i-1]and a[i]>a[i+1])
            c++;
          (c==n)?cout<<"beautiful":cout<<"ugly";
            cout<<endl;

    }
    return 0;
}
/*

9 3
1 2 3 2 4 3 1 2 1
5 3
1 2 1 2 1

*/
