#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long a[14]={0};
int factorial(int n)
{
    if(n==0 or n==1)
         return a[n]=1;
       return a[n]=factorial(n-1)*n;
}
int main()
{
    int n;
    factorial(13);
    while(cin>>n)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}
