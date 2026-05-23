#include <iostream>

using namespace std;

int solve(int ans, int x, int y) {
    if (y==0) return ans;
    if (y % 2 == 0) return solve(ans , x * x, y / 2);
    return solve(ans * x, x, y-1);
}
int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int i, x, y; cin >> i >> x >> y;
        cout << '#' << t << ' ' << solve(1, x, y) << '\n';
    }
    return 0;
}