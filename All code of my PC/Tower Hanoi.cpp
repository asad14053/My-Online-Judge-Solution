#include<bits/stdc++.h>
using namespace std;
void fn(int n, char a, char b, char c)
{
    if(n>=1)
    {
        fn(n-1,a,c,b);
        cout<<"Move from "<<a<<" to "<<b<<endl;
        fn(n-1,c,b,a);
    }
}
int main()
{
    char a,b,c;
    int n;
    while(cin>>n)
    {
        a = 'A'; b='B'; c='C';
        fn(n,a,b,c);
    }
    return 0;
}
