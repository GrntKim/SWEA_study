#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int a, b, c; cin >> a >> b >> c;
        cout << (((a * b * c) - 1) % 2 ? 1 : 2) << '\n';
    }
    return 0;
}
