#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,tmp,ck;
    int ara[500][500];
    int d,n;

    while(cin>>n>>d)
    {
        if(n==0 and d==0)
            break;
        for(i=0; i<n; i++)
        for(j=0; j<d; j++)

                cin>>ara[i][j];

        ck=0;
        tmp=0;
        for(i=0; i<n; i++)
        {
            tmp=0;
            for(j=0; j<d; j++)
            {
                tmp=tmp+ara[i][j];
                if(tmp==d)
                {
                    ck=1;
                    break;
                }
            }
        }

        if(ck==1)
            printf("yes\n");
        else
            printf("no\n");


    }

    return 0;
}
