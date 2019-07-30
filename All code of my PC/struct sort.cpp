#include<bits/stdc++.h>
using namespace std;

struct info
{
    int a,b;
};
bool cmp(info x, info y)
{
    if(x.a<y.a) return true;
    return false;
}

int main()
{
    int i,j,n;
    info arr[100];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i].a>>arr[i].b;
    sort(arr,arr+n,cmp);
    cout<<"-----------"<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i].a<<" "<<arr[i].b<<endl;
}

/*
5
1 3
2 5
5 4
4 1
3 2
*/
