#include<bits/stdc++.h>
using namespace std;
struct t
{
    string n;
    int t ;
}mine ,yours;
int p(struct t p)
{
    cout<<"name and years:"<<endl;
    cout<<p.t<<" "<<p.n<<endl;
    return 0;
}
int main()
{
    cout<<"enter both  name and years"<<endl;
    cin>>mine.n>>mine.t>>yours.n>>yours.t;
    p(mine);
    p(yours);
    return 0;
}
