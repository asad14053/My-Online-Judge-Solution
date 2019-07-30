#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,x,z;
        cin>>n;
        vector<pair<long,long> >v;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            map<long,long>mp;
            vector<long>v1;
            for(int j=0; j<x; j++)
            {
                cin>>z;
                if(!mp[z])
                    v1.push_back(z);
                mp[z]++;

            }
            long l=v1.size();
            //cout<<"v1 :"<<v1.size()<<endl;
            long s=x;
            if(l>=6)
                s+=4;
            if(l>=5 and l<6)
                s+=2;
            if(l>=4 and l<5)
                s+=1;
            v.push_back(make_pair(s,i+1));
        }
      //  for(int k=v.size()-1; k>=0; k--)
       //     cout<<"sum"<<v[k].first<< "   "<<v[k].second<<endl;
        sort(v.begin(),v.end());
        long aa=v.size();
        long mx=v[aa-1].first;
        bool f=true;
        long pos=v[aa-1].second;
        for(int i=v.size()-2; i>=0; i--)
        {
            if(mx==v[i].first)
                pos=0;
            else
                pos=v[i+1].second;
            break;
        }
        if(pos)
        {
            if(pos==1)
                cout<<"chef"<<endl;
            else cout<<pos<<endl;
        }
        else cout<<"tie"<<endl;
    }
    return 0;
}
