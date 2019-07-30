#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

#define MAX 31663
char  prime[MAX];
int primeList[1000000];
int c=1;

int isPrime(int num)
{
    int yes = 1;
    if(num%2==0)return 0;
    for(int i=3; i<=sqrt((double)num); i=i+2)
    {
        if(num%i==0)
        {
            yes = 0;
            break;
        }
    }
    return yes;
}

void sieve_prime()
{
    int i,j,k,l,m;


    for(i=2; i<=MAX; i++)prime[i]=1;
    k=2;
    for(m=2; m<=sqrt((double)MAX); m++)
    {
        for(j=k+k; j<=MAX; j=j+k)
        {
            prime[j]=0;
        }
        k++;
        for(; !prime[k]; k++);
    }


    for(int n=2; n<MAX; n++)
    {
        if(prime[n])primeList[c++]  = n;
    }
}

int getDigitSum(int num)
{
    int sum = 0;
    while(num)
    {
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int getPrimeFactorSum(int num)
{
    int sum=0,n=1;
    for(int i= 1; i<c; i++)
    {
        if(num==1)break;
        if(isPrime(num)==1)
        {
            sum += getDigitSum(num);
            break;
        }
        while(num%primeList[i]==0)
        {
            sum += getDigitSum(primeList[i]);
            num /= primeList[i];

        }
    }

    return sum;
}
int getSmithNumber(int num)
{

    int i;
    for(i=num+1;; i++)
    {
        if(i<MAX)
        {
            if(prime[i]==0)
            {
                if(getDigitSum(i)==getPrimeFactorSum(i))break;
            }
        }
        else
        {
            if(isPrime(i)==0)
            {
                if(getDigitSum(i)==getPrimeFactorSum(i))break;
            }
        }
    }

    return i;
}
int main()
{
    sieve_prime();

    int testCase;
    scanf("%d",&testCase);
    for(int i=1; i<=testCase; i++)
    {

        int num;
        scanf("%d",&num);
        printf("%d\n",getSmithNumber(num));
    }

    return 0;
}
