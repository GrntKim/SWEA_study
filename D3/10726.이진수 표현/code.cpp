#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int n, m; cin >> n >> m;
        bool on = true;
        for (int i = 0; i < n; i++) {
            if (!(m % 2)) {
                on = false;
                break;
            }
            m /= 2;
        }
        cout << '#' << t << ' ' << (on ? "ON" : "OFF") << '\n';
    }
    return 0;
}
