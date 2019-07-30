#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;

int a[100010],temp[100010];

long long b[100010];

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    long long low=0,high=1e15,mid;
    while(low<high-1) {
        mid=(low+high)/2;
        for(int i=1;i<=m;i++)
            b[i]=mid;
        for(int i=1;i<=n;i++)
            temp[i]=a[i];
        int s=1,flag=0;
        for(int i=1;i<=n;i++) {
            if(temp[i]==0)
                continue;
            if(s>m) {
                flag=1;
                break;
            }
            if(temp[i]+i==b[s]) {
                s++;
                continue;
            }
            if(temp[i]+i<b[s]) {
                b[s]-=temp[i];
                continue;
            }
            temp[i]-=b[s]-i;
            i--;
            s++;
        }
        if(flag==1)
            low=mid;
        else
            high=mid;
    }
    printf("%I64d\n",high);
    return 0;
}
