#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b[5];
    for(int i=0;i<3;i++)
        cin>>b[i];
    sort(b,b+3);
    cout<<b[1]-b[0]+b[2]-b[1]<<endl;
}
