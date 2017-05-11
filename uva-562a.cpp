#include<bits/stdc++.h>
using namespace std;
int n,sum,i,j,s,sum1,sum2,dif;
int a[5010],vis[5010],res[5010][5010];
void solve(int i,int sum)
{
    if(!res[i][sum])
    {
    if(i==n)
        return ;
    solve(i+1,sum);
    solve(i+1,sum+a[i]);
     sum1=sum,sum2=s-sum1;
     dif=min(dif,abs(sum1-sum2));
     res[i][sum]=dif;
    // cout<<"=="<<sum1<<" "<<sum2<<" "<<dif<<endl;
    }
    else return;

}
int main()
{
     freopen("c123.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(a,false,sizeof(a));
        memset(res,false,sizeof(res));
        s=0;
        for(int i=0;i<n;i++)
            {
                cin>>a[i];
                s+=a[i];
            }
            j=0,sum=0,sum1=0,sum2=0,dif=INT_MAX;
        solve(j,sum);
        cout<<dif<<endl;
    }

    return 0;
}
