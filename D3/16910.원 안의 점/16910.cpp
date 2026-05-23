#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n; cin >> n;
        int ans = 0;
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (i*i+j*j<=n*n) ans++;
            }
        }
        cout << '#' << t << ' ' << ans*4 + 4*n+1 << '\n';
    }
    return 0;
}