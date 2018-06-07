#include<bits/stdc++.h>
int main()
{
    long n,a[200],s,l,i,k,b,x=0,j;

    while(scanf("%ld",&n)==1)
    {
        if(n==0) break;


        s=0;
        k=0;
        j=0;
        for(i=0; i<n; i++)
            scanf("%ld",&a[i]);
        for(i=0; i<n; i++)
            s+=a[i];


        for(i=0; i<n; i++)
            if(a[i]>(s/n))
            {
                k=k+(a[i]-(s/n));
            }
        printf("Set #%ld\nThe minimum number of moves is %ld.\n\n",++x,k);

    }
    return 0;
}
