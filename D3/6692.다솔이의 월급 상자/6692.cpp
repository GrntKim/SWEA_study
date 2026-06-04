#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        double ans = 0;
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            double pi, xi; cin >> pi >> xi;
            ans += pi * xi;
        }
        cout << fixed << setprecision(6);
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
