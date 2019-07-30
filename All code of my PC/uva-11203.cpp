#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        int Q = 0, M = 0, E = 0;
        int L = S.length();
        int i, j;
        for(int i=0; i< L; i++)
        {
            if (S[i] == '?') ++Q;
            if (S[i] == 'M') ++M;
            if (S[i] == 'E') ++E;
        }
        if (Q + M + E != L || M != 1 || E != 1 || Q < 4)
        {
            cout << "no-theorem\n";
            continue;
        }
        int q1 = 0, q2 = 0, q3 = 0;
        int iM = (int) S.find("M");
        int iE = (int) S.find("E");
        if (!(iM > 0 && iE > iM + 1 && iE < L - 2))
        {
            cout << "no-theorem\n";
            continue;
        }
        for(int i=0 ;i< iM;i++)
        if (S[i] == '?') ++q1;
         for(int i=iM+1 ;i< iE;i++)
       // FOI(i, iM+1, iE-1)
        if (S[i] == '?') ++q2;
        for(int i= iE+1;i< L;i++)
        if (S[i] == '?') ++q3;

        if (q1 > 0 && q2 > 0 && q3 > 1 && q2 == q3 - q1)
            cout << "theorem\n";
        else
            cout << "no-theorem\n";
    }
    return 0;
}
