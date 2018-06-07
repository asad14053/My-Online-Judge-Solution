#include <iostream>
#include <cmath>
using namespace std;

const double PI = acos(-1);
int main()
{
    int n;
    cin>>n;
    if(n==1)cout<<1<<endl;
    else
    {
        cout.precision(9);

        cout<<1+1/sin(PI/n)<<endl;
    }

    return 0;
}
