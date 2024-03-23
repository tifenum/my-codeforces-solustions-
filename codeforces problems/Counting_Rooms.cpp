#include <iostream>
#include <vector>
#include <utility>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

int n, m;
vvi grid;
vector<vector<bool>> visited;
vector<pair<int, int>> moves = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

bool isvalid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && grid[x][y] != 1);
}

void dfs(int i, int j) {
    visited[i][j] = true;
    for (auto& a : moves) {
        int x = i + a.first;
        int y = j + a.second;
        if (isvalid(x, y)) {
            dfs(x, y);
        }
    }
}

int solve() {
    cin >> n >> m;
    grid.assign(n, vi(m));
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x;
            cin >> x;
            grid[i][j] = (x == '#') ? 1 : 0;
        }
    }

    int rooms = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j] && grid[i][j] != 1) {
                dfs(i, j);
                rooms++;
            }
        }
    }
    return rooms;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << solve() << endl;
    return 0;
}
