#include<bits/stdc++.h>
using namespace std;

char a, b;
int sx, sy, ex, ey;
int kx[] = { -1, -1, 1, 1, -2, -2, 2, 2 };
int ky[] = { 2, -2, 2, -2, 1, -1, 1, -1 };
int A[8][8];

int main()
{
    while(scanf("%c%d %c%d", &a, &sy, &b, &ey) == 4)
    {
        sx = a - 'a';
        sy--;
        ex = b - 'a';
        ey--;

        A[sx][sy] = 0;

        queue<pair<int, int> > q;
        q.push(make_pair(sx, sy));
        while(!q.empty())
        {
            pair<int, int> c = q.front();
            int x = c.first, y = c.second;
            if(x == ex && y == ey) break;
            q.pop();

            for(int i = 0; i < 8; i++)
            {
                if(x + kx[i] >= 0 && x + kx[i] < 8
                        && y + ky[i] >= 0 && y + ky[i] < 8)
                {
                    q.push(make_pair(x + kx[i], y + ky[i]));
                    A[x + kx[i]][y + ky[i]] =  A[x][y] + 1;
                }
            }
        }
        printf("To get from %c%d to %c%d takes %d knight moves.\n", a, sy + 1, b, ey + 1, A[ex][ey]);
    }
}
