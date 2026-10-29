#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

const int FEE = 0;
const int OCCUPIED = 1;
const int WEIGHT = 0;
const int LOC = 1;

int fee[105][2];
int weight[2005][2];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int ans = 0;
        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            cin >> fee[i][FEE];
            fee[i][OCCUPIED] = 0;
        }
        for (int i = 1; i <= m; i++) {
            cin >> weight[i][WEIGHT];
            weight[i][LOC] = 0;
        }
        queue <int> waiting;
        for (int x = 0; x < 2*m; x++) {
            int idx; cin >> idx;

            if (idx < 0) {
                idx = -idx;
                fee[weight[idx][LOC]][OCCUPIED] = 0;

                if (!waiting.empty()) {
                    int next = waiting.front(); waiting.pop();
                    int loc = weight[next][LOC] = weight[idx][LOC];
                    ans += fee[loc][FEE] * weight[next][WEIGHT];
                    fee[loc][OCCUPIED] = 1;
                }
            } else {
                bool parked = false;
                for (int i = 1; i <= n; i++) {
                    if (!fee[i][OCCUPIED]) {
                        weight[idx][LOC] = i;
                        fee[i][OCCUPIED] = 1;
                        ans += fee[i][FEE] * weight[idx][WEIGHT];
                        parked = true;
                        break;
                    }
                }
                if (!parked) waiting.push(idx);
            }
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
