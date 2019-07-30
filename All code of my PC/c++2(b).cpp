#include<bits/stdc++.h>
using namespace std;
int p(int *a,int *b)
{
    *a+=*b;
   //cout<<&a<<endl;
    return *a;

}
int main()
{
    int a,b;
    cin>>a>>b;
    int q=p(&a,&b);
    cout<<"sum:"<<q<<endl;
    return 0;
}
