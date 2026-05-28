#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n, l; cin >> n >> l;
        vector<vector<int>> dp(n+1, vector<int>(l+1, 0));
        vector<int> cal(n+1);
        vector<int> score(n+1);
        for(int i=1; i<=n; i++)
            cin >> score[i] >> cal[i];
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=l; j++) {
                if(cal[i] > j) {
                    dp[i][j] = dp[i-1][j];
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i-1][j-cal[i]] + score[i]);
                }
            }
        }
        cout << '#' << t << ' ' << dp[n][l] << '\n';
    }
    return 0;
}