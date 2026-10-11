#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int ans = 0;
        int d, h, m; cin >> d >> h >> m;
        ans = (d-11) * 24 * 60 + (h - 11) * 60 + (m - 11);
        cout << '#' << t << ' ' << (ans >= 0 ? ans : -1) << '\n';
    }
    return 0;
}
