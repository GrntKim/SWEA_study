#include <iostream>
#include <queue>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n; cin >> n;
        int k = 1; for(int i=0; i<n; i++) k *= 2;

        queue<int> q; 
        queue<int> tmp;
        for(int i=0; i<k; i++) {
            int x; cin >> x;
            q.push(x);
        }

        int ans = 0;
        for(int i=0; i<n; i++) {
            int len = q.size()/2;
            for(int i=0; i<len; i++) {
                int x = q.front(); q.pop();
                int y = q.front(); q.pop();
                ans += abs(x-y);
                tmp.push(x>y?x:y);
            }
            while(!tmp.empty()) {
                q.push(tmp.front());
                tmp.pop();
            }
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}