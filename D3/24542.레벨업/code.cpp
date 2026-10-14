#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int ans = 1e9;
        int n; cin >> n;
        vector<int> arr(n);
        for (int& x : arr) cin >> x;

        for (int skip = 1; skip < n-1; skip++) {
            int dist = 0;
            for (int i = 1; i < n; i++) {
                if (i == skip) continue;
                dist += abs(arr[i] - arr[i-1 == skip ? i-2 : i-1]);
            }
            ans = min(ans, dist);
        }
        cout << ans << '\n';
    }
    return 0;
}
