
#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#define li long int

using namespace std;

li digits[10];

int main()
{
    li i,n_case,input,hold,j,total;

    cin>>n_case;
    while(n_case--)
    {
        cin>>input;
        hold = input;
        i = 0;
        while(hold)
        {
            digits[i] = hold % 10;
            hold = hold / 10;
            i++;
        }
        for(total =0, j =0; j<i; j++)
        {
            total = total + (li) pow(digits[j],i);
        }
        if(total == input)
        {
            cout<<"Armstrong\n";
        }
        else
        {
            cout<<"Not Armstrong\n";
        }
    }
}
