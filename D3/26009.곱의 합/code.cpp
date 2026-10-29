#include <iostream>

using namespace std;

#define ll long long

const ll MOD = 998244353;

ll calculate(int n) {
    ll x = n, y = n + 1;
    if (x % 2 == 0) x /= 2; else y /= 2;
    return (x % MOD) * (y % MOD) % MOD;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        ll a, b, c; cin >> a >> b >> c;
        cout << '#' << t << ' ' << calculate(a) * calculate(b) % MOD * calculate(c) % MOD << '\n';
    }
    return 0;
}
