#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n-i;j++)
       cout<<"\t";
        for(int k=1;k<=i;k++)
            cout<<"#"<<"\t";
        cout<<endl;

    }
    return 0;
}
