#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[110],b;
    int k=0,s=0,m;
    while(getline(cin,a[k]))
    {
        m=a[k].size();
        s=max(s,m);
        k++;
    }
  //  cout<<s<<" "<<k<<endl;
    for(int i=0; i<k; i++)
        a[i].resize(s,' ');
    //for(int i=0; i<k; i++)
     //   cout<<a[i].size()<<endl;
    for(int i=0; i<s; i++)
    {
        for(int j=k-1; j>=0; j--)
            cout<<a[j][i];
        cout<<endl;
    }



    return 0;
}
