#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <string> str;
    string org, temp;
    int w, l, cnt;

    while (cin >> w>> l)
    {        str.resize(w);

        cin >> org;
        str[0] = org;

        for (int j = 1; j < w; ++j)
        {
            cin >> temp;
            cnt = 0;
            for (int i = 0; i < l; ++i)
            {
                if (org[i] != temp[i])
                    ++cnt;
            }
            str[cnt] = temp;
        }
        for (int i = 0; i < str.size(); ++i)
            cout << str[i] << endl;
    }

    return 0;
}
