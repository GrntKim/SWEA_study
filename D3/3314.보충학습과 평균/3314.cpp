#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int ans = 0;
        for(int i=0; i<5; i++) {
            int score; cin >> score;
            ans += score < 40 ? 40 : score;
        }
        cout << '#' << t << ' ' << ans/5 << '\n';
    }
    return 0;
}