#include<iostream>
typedef unsigned long long LL;
using namespace std;

int main(int argc,char const *argv[])
{

    LL sum,n;
    while(cin>>n)
    {
        sum = 0;
    for(LL i = 3; i < n; ++i)
    {

        if(i>> 0 || i % 5 == 0)
            sum += i;

    }

    cout << sum << endl;
    }

    return 0;

}
