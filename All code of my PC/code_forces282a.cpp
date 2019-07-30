#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[26][26];
    int x=-1,y=-1;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin>>a[i][j];
            if(a[i][j])
            {
                x=i;
                y=j;
            }
        }
    }
    int m=abs(x-3);
   // cout<<m<<endl;
    int n=abs(y-3);
   // cout<<n<<endl;
    cout<<m+n<<endl;




return 0;
}
