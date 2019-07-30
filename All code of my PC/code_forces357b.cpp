#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,flag=0,i,j;
    cin>>n;
    for(i=0;i<=n;i=i+1234567){
        for(j=0;j+i<=n;j=j+123456){
            if((n-(i+j))%1234==0){
                flag=1;
                break;
            }
        }
        if(flag==1) break;
    }

    if(flag==1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
