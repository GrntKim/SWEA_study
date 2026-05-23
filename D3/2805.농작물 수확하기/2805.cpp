#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int ans = 0;
        int k; cin >> k;
        int n = k/2;
        for(int i=0; i<k; i++) {
            string row; cin >> row;
            for(int j=0; j<k; j++) {
                if(abs(i-n) + abs(j-n) <= n) 
                    ans += row[j] - '0';
            }
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}