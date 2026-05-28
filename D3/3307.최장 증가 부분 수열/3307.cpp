#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int ans = 1;
        int n; cin >> n;
        vector<int> v(n);
        vector<int> d(n);
        for(int& val : v) cin >> val;
        for(int i=0; i<n; i++) {
            d[i] = 1;
            for(int j=0; j<i; j++) {
                if(v[j] < v[i]) {
                    d[i] = max(d[i], d[j]+1);
                }
            }
            ans = max(ans, d[i]);
        }

        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}