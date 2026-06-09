#include <algorithm>
#include <iostream>

using namespace std;

int ans;
int n, b;
int h[25];
bool checked[25];
void bt(int depth, int sum) {
    if (sum >= b) {
        ans = min(ans, sum-b);
        return;
    }
    if (depth == n) return;

    for (int i = 0; i < n; i++) {
        if (checked[i]) return;
        checked[i] = true;
        bt(depth+1, sum+h[i]);
        checked[i] = false;
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        ans = 1e9;
        cin >> n >> b;
        fill(checked, checked+n, false);
        for (int i = 0; i < n; i++) cin >> h[i];
        bt(0, 0);
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
