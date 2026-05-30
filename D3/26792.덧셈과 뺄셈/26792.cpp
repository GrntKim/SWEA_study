#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int x, y; cin >> x >> y;
        cout << (x+y)/2 << ' ' << (x-y)/2 << '\n';
    }
    return 0;
}