#include <iostream>

using namespace std;

#define ll long long

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        ll ans = 0;
        ll n; cin >> n;
        while (n % 2 == 0) n /= 2;
        for (ll i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                ans++;
                if (i * i != n) ans++;
            }
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
