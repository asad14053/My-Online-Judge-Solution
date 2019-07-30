#include<bits/stdc++.h>
using namespace std;

bool s(long matrix[101][101], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[n-i-1][n-j-1])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int t, n;
    char tmp;
    long matrix[101][101];

    cin >> t;

    for (int m= 1; m<= t; m++)
    {
        cin >> tmp >> tmp >> n;

        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
                if (matrix[i][j] < 0)
                    ok = false;
            }
        }

        cout << "Test #" << m << ": ";

        if (ok &&s(matrix, n))
        {
            cout << "Symmetric." << endl;
        }
        else
        {
            cout << "Non-symmetric." << endl;
        }
    }

    return 0;
}
