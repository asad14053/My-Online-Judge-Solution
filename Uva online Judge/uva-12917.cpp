#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p, h, o;
    while( cin>>p>>h>>o )
        puts( o - p < h? "Hunters win!" : "Props win!" );
    return 0;
}
