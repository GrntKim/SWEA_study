#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int ans = 0;
        int n, k; cin >> n >> k;
        priority_queue<int> pq;
        for(int i=0; i<n; i++) {
            int s; cin >> s;
            pq.push(s);
        }
        while(k--) {
            ans += pq.top();
            pq.pop();
        }

        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}