#include <iostream>
#include <cstring>

using namespace std;

#define ll long long

const int MOD = 1e9;

ll dp[101][10][1024];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        memset(dp, 0, sizeof(dp));
        ll n; cin >> n;

        for (int i = 1; i <= 9; i++) {
            dp[1][i][1<<i] = 1;
        }

        for (int i = 1; i < n; i++) {
            for (int j = 0; j <= 9; j++) {
                for (int mask = 0; mask <= 1023; mask++) {
                    if (!dp[i][j][mask]) continue;

                    for (int k : {j-1, j+1}) {
                        if (0 <= k && k <= 9) {
                            dp[i+1][k][mask | (1 << k)] = (dp[i+1][k][mask | (1 << k)] + dp[i][j][mask]) % MOD;
                        }
                    }

                }
            }
        }

        ll ans = 0;

        for (int i = 0; i <= 9; i++) {
            ans = (ans + dp[n][i][1023]) % MOD;
        }

        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
