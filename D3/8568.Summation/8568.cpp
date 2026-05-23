#include <iostream>

using namespace std;

int summation(int x) {
    int ret = 0;
    while(x) {
        ret += x % 10;
        x/=10;
    }
    return ret;
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int ans = 0, mx = 0, mn = 100;
        for(int i=0; i<10; i++) {
            int x; cin >> x;
            int y = summation(x);
            mx = max(mx, y);
            mn = min(mn, y);
        }
        cout << '#' << t << ' ' << mx << ' ' << mn << '\n';
    }
    return 0;
}