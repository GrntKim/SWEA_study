#include <iostream>

using namespace std;

int city[300005];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int ans = 0;
        int n, d; cin >> n >> d;
        city[0] = city[n+1] = 1;
        for (int i = 1; i <= n; i++) cin >> city[i];

        int prev = 0;
        for (int i = 1; i <= n+1; i++) {
            if (city[i] == 1) {
                ans += (i - prev - 1) / d;
                prev = i;
            }
        }
        
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
