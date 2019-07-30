#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    long int a,b,c;
    while(scanf("%ld%ld",&a,&b)==2)
    {
        if(a<0&&b<0)
            break;
        else
        {
            c=abs(a-b);
            if(c>50)
                c=100-c;
            printf("%ld\n",c);

        }
    }

    return 0;
}
