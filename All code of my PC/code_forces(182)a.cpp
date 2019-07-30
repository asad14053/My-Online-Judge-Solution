#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a;
        vector<int>v1,v2,v3;
        for(int i=0;i<n;i++)
            {
                cin>>a;
                if(a<0)
                    v1.push_back(a);
                else if(a>0)
                    v2.push_back(a);
                else v3.push_back(a);
            }
            if(v1.size()%2==0)
            {
                v3.push_back(v1.back());
                v1.pop_back();
            }
            if(v2.size()==0)
            {
                for(int i=0;i<2;i++)
                    {v2.push_back(v1.back());
                     v1.pop_back();
                    }

            }
            cout<<v1.size()<<" ";
            if(v1.size())
            {
                cout<<v1[0];
                for(int i=1;i<v1.size();i++)
                    cout<<" "<<v1[i];
                cout<<endl;
            }
            cout<<v2.size()<<" ";
            if(v2.size())
            {
                cout<<v2[0];
                for(int i=1;i<v2.size();i++)
                    cout<<" "<<v2[i];
                cout<<endl;
            }
            cout<<v3.size()<<" ";
            if(v3.size())
            {
                cout<<v3[0];
                for(int i=1;i<v3.size();i++)
                    cout<<" "<<v3[i];
                cout<<endl;
            }

    }
    return 0;
}
