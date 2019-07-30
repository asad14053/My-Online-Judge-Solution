#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10000],b[100000],c[10000];
    while(cin>>a)
    {
        strcpy(b,a);
        strcpy(c,strrev(a));
        if(!strcmp(c,b))
            cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
