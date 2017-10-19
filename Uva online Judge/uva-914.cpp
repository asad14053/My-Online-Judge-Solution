#include<bits/stdc++.h>
using namespace std;
#define m 1000000
bool s[m];
int pr[m],k,i,j;
void sieve()
{
    memset(s,true,sizeof(s));
    k=0;
    for(i=2; i<sqrt(m); i++)
    {
        if(s[i])
        {
            for(j=i*i; j<m; j+=i) s[j]=false;
        }
    }

}
int main()
{
    sieve();
    int t;
    cin>>t;
    int l,u;

    while(t--)
    {
        vector<int>V;
        cin>>l>>u;
        for(int n=l; n<=u; n++)
        {
            if(s[n])V.push_back(n);
        }
        if(V.size()<2)printf("No jumping champion\n");
        else
        {
            vector<int>hold;
            int dif[200] = {0};
            for(int i=0; i<V.size()-1; i++)
            {
                dif[V[i+1]-V[i]]++;
            }
            int max = 0,theNumber = 0;
            bool flag = true;
            for(int i=1; i<120; i++)
            {
                if(dif[i]>dif[max])max = i;
            }
            int counter = 0;
            for(int i=1; i<120; i++)
            {
                if(dif[i]==dif[max])counter++;
                if(counter>=2)
                {
                    flag = false;
                    break;
                }
            }
            if(flag==false)printf("No jumping champion\n");
            else printf("The jumping champion is %d\n",max);

        }

    }

    return 0;

}
