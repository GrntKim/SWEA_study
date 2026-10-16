#include <iostream>
#include <cmath>

using namespace std;

const int POS = 0, TIME = 1;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int n; cin >> n;

        int prev_turn = -1;
        int info[2][2] = {{1, 0}, {1, 0}};
        int time = 0;

        for (int i = 1; i <= n; i++) {
            char color; int dest; cin >> color >> dest;
            int cur_turn = color == 'B' ? 0 : 1;

            if (prev_turn < 0 || prev_turn == cur_turn) {
                time += abs(dest - info[cur_turn][POS]) + 1;
            } else {
                time += max(
                    abs(dest - info[cur_turn][POS]) - (time - info[cur_turn][TIME]), 
                    0
                ) + 1;
            }
            info[cur_turn][POS] = dest;
            info[cur_turn][TIME] = time;
            prev_turn = cur_turn;
        }

        cout << '#' << t << ' ' << time << '\n';
    }
    return 0;
}
