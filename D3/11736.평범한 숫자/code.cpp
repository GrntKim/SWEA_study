#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int ans = 0;
        int n; cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            v.push_back(x);
        }

        for (int i = 1; i < n-1; i++) {
            if ((v[i] >= v[i-1] && v[i] >= v[i+1]) || 
                (v[i] <= v[i-1] && v[i] <= v[i+1])) {
                continue;
            }
            ans++;
        }

        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
