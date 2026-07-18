#include <iostream>

using namespace std;

#define ll long long

const int MOD = 1000000007;

ll dp[16];
int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        string s; 
        cin >> s;
        int len = s.length();

        for (int i = 0; i < 16; i++) dp[i] = 0;
        dp[1 << 0] = 1;

        ll ans = 0;
        for (int i = 0; i < len; i++) {
            ll nextDp[16] = {};

            int responsibleBit = 1 << (int) (s[i] - 'A');

            for (int prev = 1; prev < 16; prev++) {
                for (int cur = 1; cur < 16; cur++) {
                    if (!(cur & responsibleBit)) continue;
                    if (!(cur & prev)) continue;
                    nextDp[cur] = (nextDp[cur] + dp[prev]) % MOD;
                }
            }
            for (int j = 0; j < 16; j++) 
                dp[j] = nextDp[j];
        }
        for (int i = 1; i < 16; i++)
            ans  = (ans + dp[i]) % MOD;
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
