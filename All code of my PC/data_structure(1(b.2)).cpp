#include<bits/stdc++.h>
int main()
{
    unsigned int a[100],n,m;
    unsigned int *p;


    printf("size of an array: ");
    scanf("%u",&n);
    //for(int i=0;i<n;i++)
       // scanf("%d",&a[i]);
        printf("enter search index: ");
        while( scanf("%d",&m)==1)
        {
            if(m=n)
            {
                p=&a[0];
                p=p+2*(m-0);
                printf("pos: %d base: %u\n",*p,p);
            }
            else break;
        }

        return 0;
    }

