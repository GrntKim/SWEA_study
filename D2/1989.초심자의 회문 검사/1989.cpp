#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T;
    for(int t = 1; t <= T; t++) {
        string s; cin >> s;
        int l = 0, r = s.length()-1;
        int ans = 1;
        while(l <= r) {
            if(s[l++] != s[r--]) {
                ans = 0;
                break;
            }
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
}