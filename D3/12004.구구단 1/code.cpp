#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int n; cin >> n;
        bool found = false;
        for (int i = 1; i <= 9; i++) {
            for (int j = 1; j <= 9; j++) {
                if (i * j == n) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        cout << '#' << t << ' ' << (found ? "Yes" : "No") << '\n';
    }
    return 0;
}
