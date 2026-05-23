#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int l, u, x; cin >> l >> u >> x;
        cout << '#' << t << ' ' << (x < l ? l-x : x > u ? -1 : 0) << '\n';
    }
    return 0;
}