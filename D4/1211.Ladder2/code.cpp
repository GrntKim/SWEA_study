#include <iostream>
#include <algorithm>

using namespace std;

int board[100][100];
bool vis[100][100];
int minstep;
int ans = -1;

void dfs(int level, int cur, int step) {
    if (level == 99) {
        minstep = min(minstep, step);
        return;
    }

    if (cur > 0 && board[level][cur-1] == 1 && !vis[level][cur-1]) {
        vis[level][cur-1] = true;
        dfs(level, cur-1, step+1);
        vis[level][cur-1] = false;
    } else if (cur < 99 && board[level][cur+1] == 1 && !vis[level][cur+1]) {
        vis[level][cur+1] = true;
        dfs(level, cur+1, step+1);
        vis[level][cur+1] = false;
    } else if (!vis[level+1][cur]) {
        vis[level+1][cur] = true;
        dfs(level+1, cur, step+1);
        vis[level+1][cur] = false;
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for (int t = 1; t <= 10; t++) {
        int ans = -1;
        int best = 1e9;
        int tc; cin >> tc;
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                cin >> board[i][j];

        for (int c = 0; c < 100; c++) {
            if (board[0][c] == 1) {
                minstep = 1e9;
                for (int i = 0; i < 100; i++)
                    fill(vis[i], vis[i]+100, false);
                vis[0][c] = true;
                dfs(0, c, 0);
                if (minstep < best) {
                    best = minstep;
                    ans = c;
                }
            }
        }

        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
