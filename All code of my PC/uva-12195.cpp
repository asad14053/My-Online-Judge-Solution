#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(cin>>a and a!="*")
    {
        long Sum=0,c=0;
        for(int i=0; i<a.size(); i++)
        {
             // c=0;
            if(a[i]=='/')
            {
                if(Sum==1000000) c++;
                Sum=0;
            }
            switch(a[i])
            {
            case 'W':
                Sum += 1000000;
                break;
            case 'H':
                Sum +=  500000;
                break;
            case 'Q':
                Sum +=  250000;
                break;
            case 'E':
                Sum +=  125000;
                break;
            case 'S':
                Sum +=   62500;
                break;
            case 'T':
                Sum +=   31250;
                break;
            case 'X':
                Sum +=   15625;
                break;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
