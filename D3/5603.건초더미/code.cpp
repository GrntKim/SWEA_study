#include <iostream>

using namespace std;

int hay[10005];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int n; cin >> n;
        int avg = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> hay[i];
            avg += hay[i];
        }
        avg /= n;

        for (int i = 0; i < n; i++) {
            while (hay[i] > avg) {
                ans++;
                hay[i]--;
            }
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
