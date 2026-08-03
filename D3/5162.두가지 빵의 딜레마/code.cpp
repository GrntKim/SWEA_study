#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int a, b, c; cin >> a >> b >> c;
        cout << '#' << t << ' ' << (a > b ? c/b : c/a) << '\n';
    }
    return 0;
}
