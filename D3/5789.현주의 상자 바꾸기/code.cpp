#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int n, q; cin >> n >> q;
        vector<int> arr(n, 0);
        for (int i = 1; i <= q; i++) {
            int l, r; cin >> l >> r;
            for (int j = l-1; j <= r-1; j++)
                arr[j] = i;
        }
        cout << '#' << t << ' ';
        for (const auto& x : arr) cout << x << ' ';
        cout << '\n';
    }
    return 0;
}
