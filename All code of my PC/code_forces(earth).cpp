#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    if(x1>=y1&&x2>=y2||x1<=y1&&x2<=y2)
        cout<<abs(x1-x2)+abs(y1-y2);
    else cout<<min(x1+x2+y1+y2,4*n-(x1+x2+y1+y2));
    return 0;
}
