#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        string tar; cin >> tar;
        int n = tar.length();
        string src(n, '0');
        int ans = 0;
        for(int i=0; i<n; i++) {
            if (tar == src) break; 
            if (tar[i] != src[i]) {
                fill(src.begin()+i, src.end(), tar[i]);
                ans++;
            }
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}