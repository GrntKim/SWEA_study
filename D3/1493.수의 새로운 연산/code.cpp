#include <iostream>
#include <utility>

using namespace std;

pair<int, int> loc[10005];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int x = 1, y = 1;
    for (int i = 1; i <= 10000; i++) {
        loc[i] = {x, y};
        if (y == 1) {
            y = x + 1;
            x = 1;
        } else {
            y--;
            x++;
        }
    }
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int p, q; cin >> p >> q;
        int x, y;
        x = loc[p].first + loc[q].first;
        y = loc[p].second + loc[q].second;

        cout << '#' << t << ' ' << (y + x - 1) * (y + x - 2) / 2 + x << '\n';
    }
    return 0;
}
