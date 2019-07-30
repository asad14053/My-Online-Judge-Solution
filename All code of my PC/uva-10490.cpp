#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int prime[12] = {2,3,5,7,11,13,17,19,23,29,31};
int main()
{
    int n;
    unsigned long long sum,i,j,coun;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        coun =0;
        for(i=0; i<11; i++)
        {
            if(n==prime[i])
                coun =1;
        }
        if(coun==1)
        {
            if(n==11 || n==23 || n==29)
                cout<<"Given number is prime. But, NO perfect number is available." << endl;
            else
            {
                sum = pow(2,n-1) * (pow (2,n)-1);
                cout << "Perfect: " << sum <<'!'<<endl;
            }
        }
        else
            cout << "Given number is NOT prime! NO perfect number is available."<<endl;
    }

}
