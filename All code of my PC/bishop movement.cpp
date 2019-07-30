#include <iostream>
#include <queue>
using namespace std;

const int inf = 100;

int min_distance[10][10];

const int dx[4] = {+1, +1, -1, -1};
const int dy[4] = {-1, +1, -1, +1};

int main() {
    int x, y;
    cin >> x >> y;

    for (int i = 1; i <= 8; i += 1) {
        for (int j = 1; j <= 8; j += 1) {
            min_distance[i][j] = inf;
        }
    }

    queue<pair<int, int>> bfs_queue;
    bfs_queue.push({x, y});
    min_distance[x][y] = 0;

    while (bfs_queue.size()) {
        auto current = bfs_queue.front();
        bfs_queue.pop();

        int x = current.first;
        int y = current.second;

        // every cell that's reacheable from {x, y} will have a cost equal to
        // min_distance[x][y] (the distance to reach this cell) + 1
        // since the bishop is not limited to
        int c = min_distance[x][y] + 1;
        for (int d = 0; d < 4; d += 1) {
            int nx = x, ny = y;

            // if we move the bishop in one direction, eventually it will
            // leave the table (max 8 steps in a direction)
            while (1) {
                // move the bishop in the direction d one time.
                nx += dx[d];
                ny += dy[d];

                // check if our cell is outside the board
                if (!(1 <= nx and nx <= 8 and 1 <= ny and ny <= 8)) {
                    break;
                }

                // check if we encountered a cell for the first time.
                // if so, update the cell's min_distance and put it in the
                // bfs_queue so we'll extend from it, eventually.
                if (min_distance[nx][ny] == inf) {
                    min_distance[nx][ny] = c;
                    bfs_queue.push({nx, ny});
                }
            }
        }
    }

    int fx, fy;
    cin >> fx >> fy;
    // read the final destination.
    // if min_distance[fx][fy] is inf, it means that it's not reacheable from
    // the start position, so we need to print -1
    int fcost = min_distance[fx][fy];
    if (fcost == inf) {
        fcost = -1;
    }
    cout << fcost << '\n';
}

