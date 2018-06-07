/* Author => Aakash Prakash (akki744) */
#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long LL;

vector<pair<int,int> > v;
#define input()             freopen("in0.txt","r",stdin)
#define output()            freopen("out0.txt","w",stdout)
bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.first==p2.first){
        p2.second<p2.second;
    }
    return p1.first<p2.first;
}

int main() {


    input();
    output();
#ifndef ONLINE_JUDGE
//  freopen("C:\\Users\\Aakash\\Desktop\\input.txt", "r", stdin);
#endif
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(),v.end(),comp);
    int first=v[0].first,ans=INT_MAX;
    for(int i=1; i<n; i++){
        if(first!=v[i].first){
            break;
        }
        ans=min(ans,abs(v[i-1].second-v[i].second));
    }
    cout<<ans;
    return 0;
}