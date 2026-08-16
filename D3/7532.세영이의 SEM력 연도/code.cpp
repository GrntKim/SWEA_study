#include <iostream>

#define ll long long

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        ll s, e, m; cin >> s >> e >> m;
        ll ans = 1;
        while (((ans - s) % 365 != 0) || 
               ((ans - e) % 24 != 0) ||
               ((ans - m) % 29 != 0)) {
            ans++;
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
