#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin>>t;
int x=1;
while(x<=t)
{

    int n,m;
    cin>>m>>n;
    int a[n+2];
    int q=n;
    for(int i=0;i<n;i++)
        cin>>a[i];
        bool f=false;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                    if(a[i]+a[j]+a[k]==m)
                     {
                         f=true;
                         v.push_back(i+1);
                         v.push_back(j+1);
                          v.push_back(k+1);
                          break;
                     }
                     if(f) break;
            }
            if(f) break;
        }
        if(f)
        {cout<<"Case "<<x<<":";
          for(int i=0;i<3;i++)
            cout<<" "<<v[i];
          cout<<endl;
        }
        else cout<<"Case "<<x<<": "<<"You are out of your luck!"<<endl;

     x++;

}
return 0;
}
