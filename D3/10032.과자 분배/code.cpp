#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int n, k; cin >> n >> k;
        cout << '#' << t << ' ' << (n % k ? 1 : 0) << '\n';
    }
    return 0;
}
