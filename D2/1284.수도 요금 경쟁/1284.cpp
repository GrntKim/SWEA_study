#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T;
    for(int t = 1; t <= T; t++) {
        int a, b, p, q, r, s, w;
        cin >> p >> q >> r >> s >> w;
        a = w * p;
        if(w <= r) b = q;
        else b = q + s * (w-r);
        cout << '#' << t << ' ' << min(a, b) << '\n';
    }
}