#include<bits/stdc++.h>
using namespace std;
int main()
{

    int e;
    bool check = false;
    cin >> e;

    for (int i = 0 ; i <e ; i++)
    {

        int ax,ay,bx,by,cx,cy,dx,dy,rx,ry;
        cin >> ax >> ay >> bx >> by >> cx>> cy>>dx>>dy>>rx>>ry;


        if( ax <= rx and ay <= ry and rx <= bx and by <=ry and dx <= rx and ry <= dy and rx <= cx and ry <= cy)
            check = true;
        else
            check = false;


        if (check == true)
            cout << 1 << endl;
        else
            cout << 0 << endl;

    }
    return 0;
}
