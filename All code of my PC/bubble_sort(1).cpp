#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[100];
    cout<<"enter size"<<endl;
    cin>>a;
    for(int i=0;i<a;i++)
    cin>>b[i];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a-1-i;j++)
        {
            if(b[j]>b[j+1])
            swap(b[j+1],b[j]);
        }
    }
      for(int i=0;i<a;i++)
    cout<<b[i]<<endl;
    return 0;
}
