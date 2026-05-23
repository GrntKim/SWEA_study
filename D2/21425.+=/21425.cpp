#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int x, y, n; cin >> x >> y >> n;
        int ans = 0;
        while(x <= n && y <= n) {
            if(x < y) x += y;
            else y += x;
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}