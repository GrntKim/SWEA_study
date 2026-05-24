#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int ans = 0;
        int n; cin >> n;
        if(n > 1) {
            int mx = 0, mn = 1000005;
            for(int i=0; i<n; i++) {
                int x; cin >> x;
                mx = max(mx, x);
                mn = min(mn, x);
            }
            ans = mx*mn;
        } else {
            int x; cin >> x;
            ans = x*x;
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}