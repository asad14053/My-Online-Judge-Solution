#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, sz, t1, t2, total;
    string s, a, b;
    int p;
    cin >> t;
    getchar();
    while(t--)
    {
        total = 0;
        getline(cin,s);

        p = s.find(' ');
        a = s.substr(0, p);
        b = s.substr(p + 1);
    //   cout<<"p-"<<p<<" a- "<<a<<"  b-"<<b<<endl;
        sz = a.size();

        for (int i = 0; i < sz; ++i)
        {
            t1 = a[i];
            t2 = b[i];

            if(t2 > t1)
                total += (t2 - t1);
            if (t1 > t2)
                total += (26 - (t1 - t2));
        }
        cout << total <<endl;
    }

    return 0;
}
