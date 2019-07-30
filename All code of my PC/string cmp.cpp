#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  a[100];
    for(int i=0;i<5;i++)
        cin>>a[i];
    for(int i=0;i<4;i++)
        {if(a[0]==a[i+1])
        cout<<"ÿes"<<endl;
        else cout<<"no"<<endl;

        }
    return 0;
}
