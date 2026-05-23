#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n, m, mx = 0, cnt = 0; cin >> n >> m;
        vector<int> arr(n);
        for(int i=0; i<n; i++) {
            int sum = 0;
            for(int j=0; j<m; j++) {
                int x; cin >> x;
                sum += x;
            }
            mx = max(mx, sum);
            arr[i] = sum;
        }
        for(const auto& s : arr) 
            if (s == mx) cnt++;
        cout << '#' << t << ' ' << cnt << ' ' << mx << '\n';
    }
    return 0;
}