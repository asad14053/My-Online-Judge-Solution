/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],p[10000],b[10000];
    cin>>n;
    //map<int,int>p;
    for(int i=0;i<n;i++)
    {
         cin>>a[i];
         b[i]=a[i];
    }
    sort(b,b+n,greater<int>());
     for(int i=0;i<n;i++)
        p[b[i]]=i;
    for(int i=0;i<n;i++)
      cout<<p[a[i]]+1<<" ";
      cout<<endl;
    return 0;
}
*/
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int N, a[3000];
int main()
{
    cin >> N;

    int i,j;
    for (i=1; i<=N; i++) cin >> a[i];
    int cnt=0;
    for (i=1; i<=N; i++)
    {
        cnt=0;
        for (j=1; j<=N; j++)
            if (a[j]>a[i]) cnt++;
        cout << 1+cnt << " ";
    }
    cout <<endl;
    return 0;
}
