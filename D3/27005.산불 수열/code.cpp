#include <iostream>

using namespace std;

int arr[1005];
bool bad[1005];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    arr[0] = arr[1] = 1;
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int lim; cin >> lim;
        if (arr[lim]) {
            cout << '#' << t << ' ' << arr[lim] << '\n';
            continue;
        }
        for (int i = 2; i <= lim; i++) {
            for (int j = 1; j <= i/2 + 1; j++) bad[j] = false;
            for (int k = 1; k <= i/2; k++) {
                int f = 2 * arr[i - k] - arr[i - 2 * k];
                if (f >= 1 && f <= lim) bad[f] = true;
            }
            int v = 1;
            while (bad[v]) v++;
            arr[i] = v;
        }
        cout << '#' << t << ' ' << arr[lim] << '\n';
    }
    return 0;
}
