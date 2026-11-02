#include <iostream>

using namespace std;

#define ll long long

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        ll ans = 1e18;
        ll n; cin >> n;
        for (ll i = 1; i * i <= n; i++) {
            if (n % i) continue;
            ans = min(ans, i+(n/i)-2);
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
