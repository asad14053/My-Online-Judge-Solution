#include<bits/stdc++.h>
using namespace std;
int a[10],b[10];
int main()
{
    int n=5;
    while(cin>>a[0])
    {
        int c=0;
        for(int i=1;i<n;i++)
            cin>>a[i];
         for(int j=0;j<n;j++)
           {
               cin>>b[j];
               if(a[j]^b[j]) ++c;

           }
           if(c==5)cout<<"Y"<<endl;
           else cout<<"N"<<endl;
    }
    return 0;
}
