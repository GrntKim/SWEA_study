#include <iostream>
#include <stack>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int ans = 0;
        int k; cin >> k;
        stack<int> st;
        for (int i = 0; i < k; i++) {
            int cur; cin >> cur;
            if (!cur) {
                ans -= st.top();
                st.pop();
            } else {
                ans += cur;
                st.push(cur);
            }
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
