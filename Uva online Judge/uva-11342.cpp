#include<bits/stdc++.h>
using namespace std;
int a[50003][4];
void p()
{
    for(int i=0; i*i<=50000; i++)
        for(int j=0; j*j<=50000; j++)
            for(int k=0; k*k<=50000; k++)
            {
                int s=i*i+j*j+k*k;
                if(s>50000)
                    break;
                if(a[s][3])
                    continue;
                a[s][0]=i;
                a[s][1]=j;
                a[s][2]=k;
                a[s][3]=true;
            }
}
int main()
{
    p();
    long n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(a[n][3])
        cout<<a[n][0]<<" "<<a[n][1]<<" "<<a[n][2]<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
