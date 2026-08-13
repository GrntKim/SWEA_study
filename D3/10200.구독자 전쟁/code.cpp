#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int n, a, b; cin >> n >> a >> b;
        cout << '#' << t << ' ' << min(a, b) << ' ' << ((n > (a + b)) ? 0 : (a + b) - n) << '\n';
    }
    return 0;
}