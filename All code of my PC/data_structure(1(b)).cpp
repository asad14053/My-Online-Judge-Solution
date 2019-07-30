#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int a[100],n,m;
    unsigned int *p;


    printf("size of an array: ");
    scanf("%d",&n);
        printf("enter search index: ");
        while( scanf("%d",&m)==1)
        {
            if(m<n)
            {
                p=a;
                p=p+4*(m-0);
                printf("pos: %d base: %u\n",m,p);
            }
            else break;
        }

        return 0;
    }
