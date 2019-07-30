#include <iostream>

using namespace std;

long ti(int x,int y)
{

    long t = 0;
    if(y>=2) t += x / 3;
    if(y>=3) t += x / 2;

    y += 2;
    if(x>=3)
    {
        t += ((y)/6)*(x/3);
        t += ((y-1)/6)*(x/3-1);
    }
    if(x>=1)
        t += ((y-2)/6)*(x-1);
    if(x>=3)
    {
        t += ((y-3)/6)*(x/3-1);
        t += ((y-4)/6)*(x/3);
    }
    if(x>=2)
        t += ((y-5)/6)*(x-2);


    return t;

}

int main()
{

    int c, l1,l2,w1,w2, f;
    cin >> c;
    while(c--)
    {

        cin >> l1 >> l2 >> w1 >> w2;

        f= 0;
        f  += ti(l2,w2);
        //cout << l2 << "::" << w2 << "::" << tot(l2,w2) << endl;
        f  -= ti(l1-1,w2);
        //cout << (l1-1) << "::" << w2 << "::" << tot(l1-1,w2) << endl;
        f  -= ti(l2,w1-1);
        //cout << l2 << "::" << (w1-1) << "::" << tot(l2,w1-1) << endl;
        f  += ti(l1-1,w1-1);

        cout << f  << endl;


    }
    return 0;

}
