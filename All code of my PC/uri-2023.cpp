#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[1000];
    int i=0;
    while(cin>>a[i])
    {
        if(a[i]==EOF)
            break;
            i++;
    }
    int j=i;
      for(int i=0;i<j;i++)
    sort(a[i].begin(),a[i].end());
    for(int i=0;i<j;i++)
        cout<<a[i]<<endl;
}
