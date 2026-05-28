#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n; cin >> n;
        int ans = n;
        int mx = 0;
        for(int i=0; i<n; i++) {
            int cur; cin >> cur;
            mx = max(mx, cur);
            ans += cur;
        }

        cout << '#' << t << ' ' << ans+mx << '\n';
    }
    return 0;
}