#include<bits/stdc++.h>
using namespace std;

string a, b;

int main()
{
    while(getline(cin, a) && getline(cin, b))
    {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());


        for(int i = 0, j = 0;;)
        {
            if(i >= a.size() || j >= b.size()) break;
            if(a[i] == b[j])
            {
                printf("%c", a[i]);
                i++, j++;
            }
            else
            {
                if(a[i] > b[j]) j++;
                else i++;
            }
        }
        printf("\n");
    }
}
