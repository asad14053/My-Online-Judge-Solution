#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while (getline(cin,str))
    {
      int  len = str.size();
        reverse(str.begin(), str.end());

       int n = 0;
        if ( (str[0] -48) >= 0 && str[0]-48 <= 9)
        {
            for (int i = 0; str[i]; ++i)
            {
                n = n * 10 + str[i]-48;
                if ( (n >= 65 && n <= 90) || (n >= 97 && n <= 122) || n == 32 || n == 33
                        ||n == 44 || n == 46 || n == 58 || n == 59 || n == 63)
                {
                    cout << (char) n;
                    n = 0;
                }
            }
        }
        else
        {
            for (int i = 0; str[i]; ++i)
            {
                n = str[i];
                while (n != 0)
                {
                    cout << n % 10;
                    n = n / 10;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
