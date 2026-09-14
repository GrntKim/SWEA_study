#include <iostream>

using namespace std;

int land[1005];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for (int t = 1; t <= 10; t++) {
        int ans = 0;

        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int h; cin >> h;
            land[i] = h;
        }

        for (int i = 2; i < n-2; i++) {
            int diff = land[i] - max(max(land[i-2], land[i-1]), max(land[i+1], land[i+2]));
            if (diff > 0) ans += diff;
        }

        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
