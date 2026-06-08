#include <algorithm>
#include <iostream>
#include <queue>

using namespace std;

string board[305];
int mines_around[305][305];
bool opened[305][305];

int mcnt(int r, int c, int lim) {
    int ret = 0;
    for (int i = r-1; i <= r+1; i++) {
        for (int j = c-1; j <= c+1; j++) {
            if (i < 0 || i >= lim || j < 0 || j >= lim) continue;
            if (board[i][j] == '*') ret++;
        }
    }
    return ret;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int ans = 0;
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            fill(mines_around[i], mines_around[i]+n, 0);
            fill(opened[i], opened[i]+n, false);
            cin >> board[i];
        }

        for (int i = 0; i < n; i++) 
            for (int j = 0; j < n; j++) 
                if (board[i][j] == '.') 
                    mines_around[i][j] = mcnt(i, j, n);

        queue<pair<int, int>> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == '.' && mines_around[i][j] == 0 && !opened[i][j]) {
                    ans++;
                    opened[i][j] = true;
                    q.push({i, j});

                    while (!q.empty()) {
                        int r = q.front().first, c = q.front().second;
                        q.pop();

                        for (int i = r-1; i <= r+1; i++) {
                            for (int j = c-1; j <= c+1; j++) {
                                if (i < 0 || i >= n || j < 0 || j >= n) continue;
                                if (board[i][j] == '*') continue;
                                if (opened[i][j]) continue;
                                opened[i][j] = true;
                                if (mines_around[i][j] == 0) q.push({i, j});
                            }
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < n; j++) 
                if (board[i][j] == '.' && !opened[i][j]) 
                    ans++;
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
