#include<bits/stdc++.h>
using namespace std;
long long int i, triangles[1000001],k;
int main(){
    triangles[3] = 0;
    for(i = 4; i < 1000001; i++)
        if(i&1) triangles[i] = (i-1)*(i-3)/4 + triangles[i-1];
        else triangles[i] = (i-2)*(i-2)/4 + triangles[i-1];
        scanf("%lld",&k);
    while(k--)
    {
        scanf("%lld",&i);  if(i <3) break;
        printf("%lld\n",triangles[i]);
    }
    return 0;
}

