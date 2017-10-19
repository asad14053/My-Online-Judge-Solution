#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k=0;
    while(cin>>t)
    {
        while(t--)
        {
            int n,a[1000];
            cin>>n;
            for(int i=0; i<n; i++)
                cin>>a[i];
            bool flag=true;
            for(int i=0; i<n-1; i++)
            {
                if(a[i]<1 or a[i]>=a[i+1])
                {
                    flag=false;
                    i=n;
                }
            }
                if(flag)
                {
                    map<int,int>mp;
                    mp.clear();
                    for(int i=0; i<n; i++)
                        for(int j=i; j<n; j++)
                        {
                            if(mp[a[i]+a[j]]==1)
                            {
                                flag=false;
                                i=j=n;
                            }
                            else
                                mp[a[i]+a[j]]=1;

                        }
                    if(flag)
                        cout<<"Case #"<<++k<<": It is a B2-Sequence."<<endl<<endl;
                    else  cout<<"Case #"<<++k<<": It is not a B2-Sequence."<<endl<<endl;
                }
                else  cout<<"Case #"<<++k<<": It is not a B2-Sequence."<<endl<<endl;


            }
        }



    return 0;
}

