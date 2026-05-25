#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

string board[100];
bool vis[100][100];
int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int tc; cin >> tc;
        queue<pair<int, int>> q;
        for(int i=0; i<100; i++) {
            cin >> board[i];
            fill(vis[i], vis[i]+100, false);
        }

        bool possible = false;
        q.push({1, 1});
        vis[1][1] = true;
        while(!q.empty()) {
            auto [r, c] = q.front(); 
            q.pop();
            if(board[r][c] == '3') {
                possible = true;
                break;
            }

            for(int d=0; d<4; d++) {
                int nr = r + dr[d];
                int nc = c + dc[d];

                if(nr < 0 || nr >= 100 || nc < 0 || nc >= 100)
                    continue;
                if(board[nr][nc] == '1' || vis[nr][nc]) 
                    continue;

                vis[nr][nc] = true;
                q.push({nr, nc});
            }
        }
        cout << '#' << t << ' ' << possible << '\n';
    }
    return 0;
}
