#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n; cin >> n;
        vector<int> v(n);
        int avg = 0, ans = 0;
        for(auto& k : v) {
            cin >> k;
            avg += k;
        }
        avg /= n;
        for(const auto& k : v)
            if (k <= avg) ans++;

        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}