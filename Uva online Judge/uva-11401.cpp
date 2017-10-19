#include<bits/stdc++.h>
using namespace std;
long long int i, t[1000001];
int main()
{
    t[3] = 0;
    for(i = 4; i < 1000001; i++)
        if(i%2) t[i] = (i-1)*(i-3)/4 + t[i-1];
        else t[i] = (i-2)*(i-2)/4 + t[i-1];
    while(cin>>i, i > 2)
        cout<<t[i]<<endl;
    return 0;
}
