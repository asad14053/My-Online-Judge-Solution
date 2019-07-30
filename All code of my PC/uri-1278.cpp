#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n,n)
    {
        int mx=-1;
         char a[n+1][100000];
         getchar();
        for(int i=0;i<n;i++)
        {
             sscanf("%s",a[i]);
            int l=strlen(a[i]);
            mx=max(mx,l);
        }
        for(int i=0;i<n;i++)
            printf("%*s\n",mx,a[i]);
    }

    return 0;
}
