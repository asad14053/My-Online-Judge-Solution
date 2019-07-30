#include<bits/stdc++.h>
using namespace std;
int f(int num)
{
    long div = 1;
    int r, count = 1;

    while (true)
    {
        if (div < num)
        {
            div = div*10 + 1;
            count++;
        }
        r= div % num;

        if (r == 0)
            break;
        else
            div = r;
    }

    return count;
}
int main()
{
    int num;

    while(cin>>num)
        cout<<f(num)<<endl;
    return 0;
}


