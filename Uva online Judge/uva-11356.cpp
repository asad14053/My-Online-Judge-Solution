#include <iostream>
#include <string>
#include <cstdio>
#include <string>
using namespace std;

bool is_leap(int year)
{
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

string months[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

int month2int( string m)
{
    for (int i = 0; i < 12; i++)
        if (m == months[i])
            return i+1;
}

int main(void)
{
//    freopen("c123.txt","w",stdout);
    int t,date,diff,m, d, y;
    char c;
    string input;

    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    cin >> t;
    for (int k= 1; k <= t; k++)
    {
        cin >> y;
        cin >> c;
        getline(cin, input, '-');
        m = month2int(input);
        cin >> d;
        cin >> diff;

        if (is_leap(y))
            days[1] = 29;
        else
            days[1] = 28;

        for (int i = 0; i < diff; i++)
        {
            d++;

            if (d > days[m-1])
            {
                d = 1;
                m++;

                if (m > 12)
                {
                    y++;
                    m = 1;
                    if (is_leap(y))
                    {
                        days[1] = 29;
                    }
                    else
                    {
                        days[1] = 28;
                    }
                }
            }
        }

     printf("Case %d: %0004d-%s-%02d\n",k,y,months[m-1].c_str(),d);
    }

    return 0;
}
