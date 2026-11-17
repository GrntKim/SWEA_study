#include <iostream>
#include <vector>

using namespace std;

bool matches(const string& x, const string& y) {
    for (int i = 0; i < 8; i++) {
        if (x[i] != y[i]) {
            if (x[i] != '*') {
                return false;
            }
        }
    }
    return true;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int ans = 0;
        int n, m; cin >> n >> m;

        vector<pair<string, int>> lottery;

        for (int i = 0; i < n; i++) {
            string cur;
            int prize;
            cin >> cur >> prize;
            lottery.push_back({cur, prize});
        }

        for (int i = 0; i < m; i++) {
            string cur; cin >> cur;
            for (int i = 0; i < n; i++) {
                if (matches(lottery[i].first, cur)) {
                    ans += lottery[i].second;
                }
            }
            
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
