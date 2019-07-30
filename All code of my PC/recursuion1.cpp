#include<bits/stdc++.h>
using namespace std;
void recur(int n)
{
    if(n==0)
        return;
    recur(n-1);
    cout<<n<<endl;
}
int main()
{
    int x,y,z;
    while(cin>>x)
    {
        recur(x);
    }
    return 0;
}
