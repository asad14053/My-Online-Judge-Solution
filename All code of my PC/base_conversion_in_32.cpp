// modify basefield
#include<bits/stdc++.h>
using namespace std;
// std::cout, std::dec, std::hex, std::oc
int main ()
{
    int n = 11;
    cout <<hex << n << '\n';/// hex,oct only for decimal to oct,hexa.
    cout <<oct << n << '\n';


    cout <<setbase(8);/// setbase is only for decimal to oct ,hexa
    cout <<12<<endl;


    char b[35];
    cin>>b;
    long a=strtol(b,NULL,16);/// strtol converts hexa to dec
    cout<<a<<endl;

     long x=11;
    string bin=bitset<8>(x).to_string();/// decimal(int) to bin(string)
    cout<<bin<<endl;/// field=8 change kora jabe.

    int i;
    cin>>i;
    char m[100];
    itoa (i,m,10); cout<<m<<endl;/// decimal
    itoa(i,m,2);cout<<m<<endl;///binary
    itoa(i,m,16);cout<<m<<endl;/// hexa
    itoa(i,m,8);cout<<m<<endl;/// octal


    return 0;
}

