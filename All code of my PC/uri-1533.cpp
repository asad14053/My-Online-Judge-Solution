#include <iostream>

using namespace std;

int main ()
{
    int q, c, f, s,
        number, fs, ss;
    while (cin >> q  ,q)
    {
        fs  = 0;
        ss  = 0;
        c = 0;
        while (++c<=q)
        {
            cin >> number;

            if (number > fs)
            {
                ss = fs;
                s = f;

                fs = number;
                f  = c;
            }
            else if (number > ss)
            {
                ss = number;
                s = c;
            }
        }

        cout << s  << endl;
    }

    return 0;
}
