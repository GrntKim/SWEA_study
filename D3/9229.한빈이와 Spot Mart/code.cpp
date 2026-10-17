#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int ans = 0;
        int n, m; cin >> n >> m;
        vector<int> s(n);
        for (int& k : s) cin >> k;
        sort(s.begin(), s.end());

        int l = 0, r = n-1;

        while (l < r) {
            int sum = s[l] + s[r];
            if (sum <= m) {
                ans = max(ans, sum);
                l++;
            } else {
                r--;
            }
        }

        cout << '#' << t << ' ' << (ans ? ans : -1) << '\n';
    }
    return 0;
}
