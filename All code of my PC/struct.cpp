#include<bits/stdc++.h>
using namespace std;
struct c
{
    string t;
    int y;
} mine,yours;
void p(struct c o)
{
    cout<<o.t<<" "<<o.y<<endl;
}
int main()
{
    string s;
    cin>>mine.t>>mine.y;
    //getline(cin,yours.y);
    getline(cin,s);
    stringstream(s)>>yours.t;
    cout<<"my favourite"<<endl;
    p(mine);
    cout<<"yours favourite"<<endl;
    p(yours);
}
