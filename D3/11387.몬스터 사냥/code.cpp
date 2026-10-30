#include <iostream>

using namespace std;

#define ll long long

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        ll d, l, n; cin >> d >> l >> n;
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += d / 100 * (100 + i * l);
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
