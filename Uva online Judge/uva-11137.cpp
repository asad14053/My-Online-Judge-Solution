#include<bits/stdc++.h>
using namespace std;
#define MX 10010
long long ways[MX];
void precal()
{
    int coin[] = {9261, 8000, 6859, 5832, 4913, 4096, 3375, 2744, 2197, 1728, 1331, 1000, 729, 512, 343, 216, 125, 64, 27, 8, 1};
    ways[0]=1;
    for(int i=0;i<21;i++)
        for(int j=coin[i];j<MX;j++)
            ways[j]+=ways[j-coin[i]];
}


int main()
{
    precal();
    int n;
    while(cin>>n)
        cout<<ways[n]<<endl;
return 0;
}
