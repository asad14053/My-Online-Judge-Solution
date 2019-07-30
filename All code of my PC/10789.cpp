#include<stdio.h>
#include<string.h>
#include<cmath>
#include<ctype.h>
#include<algorithm>
#include<vector>
using namespace std;
vector <long int>prime;
int arr[100000];
void sieve(long int N)
{
    long  int k = sqrt(N);
    for(int i=3; i<=k; i+=2)
    {
        if(arr[i]==0)
        {
            for(long int j=i*i; j<=N; j+=2*i)
            {
                arr[j] = 1;
            }
        }
    }
    arr[1] = 1;
    for(long int i=4; i<=N; i+=2)
    {
        arr[i] = 1;
    }

    prime.push_back(2);
    for(long int i=3; i<=N; i+=2)
    {
        if(arr[i]==0)
            prime.push_back(i);
    }
}
int main()
{
    sieve(2500);
    int t,arr1[10000],i,j,len,cou,k,m,cas=0;
    char ch[10000],des[1000];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        cas++;
        scanf("%s",ch);
        len=strlen(ch);
        k=0;
        for(i=0; i<len; i++)
        {
            cou=0;
            if(isalpha(ch[i]) || isdigit(ch[i]))
            {

                for(j=0; j<len; j++)
                {
                    if(ch[i]==ch[j])
                    {
                        if(i!=j)
                            ch[j]='.';
                        ++cou;
                    }

                }
                for(m=0; m<prime.size(); m++)
                {

                    if(cou==prime[m])
                    {
                        des[k]=ch[i];
                        ch[i]='.';
                        k++;
                    }
                    else if(prime[m]>cou)
                        break;
                }
            }
            else
                continue;
        }
        des[k]='\0';
        len= strlen(des);
        printf("Case %d: ",cas);
        if(len!=0)
        {
            sort(des,des+len);
            printf("%s\n",des);
        }
        else
            printf("empty\n");
        memset(des,'\0',sizeof(des));
    }




}
