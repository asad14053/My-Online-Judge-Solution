#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  m,n,x;
    vector<long>a;

    //while(1)
    {cin>>m>>n;
        for(int i=0;i<m;i++)
        {

            cin>>x;
            a.push_back(x);
        }
            sort(a.begin(),a.end(),greater<int>());
             long sum=0,c=0;
            for(int i=0;i<m;i++)
            {
                sum+=a[i];
                if(sum>=n)
                    break;
                else c++;
            }
            cout<<c+1<<endl;
    }
    return 0;
}
