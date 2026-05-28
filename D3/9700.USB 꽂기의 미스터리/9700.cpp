#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        double p, q; cin >> p >> q;
        cout << '#' << t << ' ' << ((1-p)*q<p*(1-q)*q ? "YES" : "NO") << '\n';
    }
    return 0;
}