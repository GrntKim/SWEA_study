#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>

using namespace std;

const int INF = 1e9;

string board[105];
int cost[105][105];
int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T;
    for(int t=1; t<=T; t++) {
        int n; cin >> n;
        for(int i=0; i<n; i++) {
            cin >> board[i];
            fill(cost[i], cost[i]+n, INF);
        }

        priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>
        > pq;

        cost[0][0] = 0;
        pq.push({0, {0, 0}});
        while(!pq.empty()) {
            auto [h, pos] = pq.top(); 
            pq.pop();
            auto [r, c] = pos;
            cost[r][c] = h;

            if(h > cost[r][c]) continue;

            for(int d=0; d<4; d++) {
                int nr = r + dr[d];
                int nc = c + dc[d];

                if(nr < 0 || nr >= n || nc < 0 || nc >= n)
                    continue;

                if(cost[nr][nc] > h + board[nr][nc] - '0') {
                    cost[nr][nc] = h + board[nr][nc] - '0';
                    pq.push({cost[nr][nc], {nr, nc}});
                }
            }
        }
        cout << '#' << t << ' ' << cost[n-1][n-1] << '\n';
    }
    return 0;
}
