#include <iostream>

using namespace std;

int days[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int ans = 0;
        int m, d; 
        cin >> m >> d;
        for (int i = 1; i < m; i++) {
            ans += days[i];
        }
        cout << '#' << t << ' ' << ((ans+d-1) % 7 + 4) % 7 << '\n';
    }
    return 0;
}
