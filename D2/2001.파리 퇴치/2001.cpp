#include <iostream>
using namespace std;

int s[20][20];
int main(void) {
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n, m; cin >> n >> m;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                int x; cin >> x;
                s[i][j] = x + s[i-1][j] + s[i][j-1] - s[i-1][j-1];
            }
        }
        int ans = 0;
        for(int i=1; i<=n-m+1; i++) {
            for(int j=1; j<=n-m+1; j++) 
                ans = max(ans, s[i+m-1][j+m-1] - s[i-1][j+m-1] - s[i+m-1][j-1] + s[i-1][j-1]);
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}