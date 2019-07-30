#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,x,l,m,o,counter = 0;
    int lotto[13];
    while(cin>>n>>x)
    {
        for(i = 0 ; i < n ; i++)
        {
            scanf("%d", &lotto[i]);
        }
        for(i = 0 ; i < x ; i++)
        {
            for(j = i+1 ; j < x ; j++)
            {
                for(k = j+1 ; k < x ; k++)
                {
                    for(l = k+1 ; l < x ; l++)
                    {
                       // for(m = l+1 ; m < x ; m++)
                        {
                          //  for(o = m+1 ; o < x ; o++)
                            {
                                cout<<"--------------"<<endl;
                                printf("%d %d %d %d %d %d\n", lotto[i], lotto[j], lotto[k], lotto[l], lotto[m], lotto[o]);
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

