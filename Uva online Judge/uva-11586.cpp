#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,count1,count2;
    string str;
    scanf("%d\n", &N);
    while(N--)
    {
        count1 = count2 = 0;
        getline(cin,str);
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == 'M')
                count1++;
            if(str[i] == 'F')
                count2++;
        }
        if(count1 == 1 && count2 == 1)
            cout << "NO LOOP" << endl;
        else
        {
            if(count1 == count2)
                cout << "LOOP" << endl;
            else
                cout << "NO LOOP" << endl;
        }
    }
}

