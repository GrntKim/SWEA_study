#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int n, m; cin >> n >> m;
        cout << '#' << t << ' ' << 2*m - n << ' ' << n - m << '\n';
    }

    /**
     * 2x + y = n
     * x + y = m
     * x = n - m
     * y = 2m - n
     */
    return 0;
}
