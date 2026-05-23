#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        double sum = 0;
        int mn = 10005, mx = -1;
        for(int i=0; i<10; i++) {
            int x; cin >> x;
            mn = min(mn, x); mx = max(mx, x);
            sum += x;
        }
        cout << '#' << t << ' ' << round((sum-mn-mx)/8) << '\n';
    }
    return 0;
}