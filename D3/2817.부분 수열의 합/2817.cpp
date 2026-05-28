#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n, k; cin >> n >> k;
        vector<int> v(n);
        vector<int> dp(k+1);
        dp[0] = 1;
        for(int& val : v) cin >> val;
        for(int i=0; i<n; i++) {
            for(int sum=k; sum>=v[i]; sum--)
                dp[sum] += dp[sum - v[i]];
        }
        cout << '#' << t << ' ' << dp[k] << '\n';
    }
    return 0;
}