#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
int self[MAX+2];
void genarator()
{

    unsigned long long  int i,j,k,sum;
    for(i=0; i<=MAX; i++)
    {
        sum=i;
        j=i;
        while(j>=10)
        {
            sum+=j%10;
            j=j/10;
        }
        sum+=j;
        self[sum]=1;


    }

}
int main()
{
    genarator();
    unsigned long long int u;
    for(u=0; u<=MAX; u++)
    {
        if(self[u]==0)cout<<u<<endl;
    }


    return 0;
}
