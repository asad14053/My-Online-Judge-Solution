#include<bits/stdc++.h>
using namespace std;
#define mx 100001
int v[mx],tree[3*mx];/// tree array ta v er 3 times hobe..
void init(int p,int l,int r)
{
    if(l==r)
    {
        tree[p]=v[l];
        return ;
    }
    int m=(l+r)/2;
    int left=2*p;
    int right=2*p+1;
    init(left,l,m);
    init(right,m+1,r);
    tree[p]=tree[left]+tree[right];
    //cout<<"---"<<tree[p]<<endl;

}
void update(int p,int l,int r,int i,int x)
{
    if(i<l ||i>r)
        return ;
    if(l>=i and r<=i)
    {
        tree[p]=x;
        return;
    }
    int m=(l+r)/2;
    int left=2*p;
    int right=2*p+1;
    update(left,l,m,i,x);
    update(right,m+1,r,i,x);
    tree[p]=tree[left]+tree[right];
    //cout<<"=="<<tree[p]<<endl;
}
int query(int p,int l,int r,int i,int j)
{
    if(l>j || r<i)
        return 0;
    if(l>=i and r<=j) return tree[p];
    int m=(l+r)/2;
    int left=2*p;
    int right=2*p+1;
    int x=query(left,l,m,i,j);
    int y=query(right,m+1,r,i,j);
    //cout<<"-----|"<<x+y<<endl;
    return x+y;
}
int main()
{
   // freopen("i.txt","r",stdin);
   // freopen("o.txt","w",stdout);
    int n,t,u;
    cin>>u;
    while(u--)
    while(cin>>n>>t)
    {
        memset(v,0,sizeof(v));
        memset(tree,0,sizeof(tree));
        int x;
        for(int i=1; i<=n; i++)
            cin>>v[i];
        init(1,1,n);
        int p,q,r,s;
       // cin>>t;
        while(t--)
        {
            cin>>p;
            if(p==1)
                {
                    cin>>r;
                    cout<<v[r+1]<<endl;
                }
            else if (p==2)
            {
                cin>>r>>x;
                update(1,1,n,x,r+1);
            }
            else if(p==3)
            {
                cin>>q>>r;
                cout<<query(1,1,n,q+1,r+1)<<endl;
            }
        }
    }
    return 0;
}

