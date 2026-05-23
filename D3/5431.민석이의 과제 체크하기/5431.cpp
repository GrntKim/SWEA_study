#include <iostream>
#include <set>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int n, s; cin >> n >> s;
        set<int> st;
        for(int i=1; i<=n; i++) st.insert(i);
        for(int i=0; i<s; i++) {
            int x; cin >> x;
            st.erase(x);
        }
        int ans = 0;
        cout << '#' << t << ' ';
        for(const auto& k : st) cout << k << ' ';
        cout << '\n';
    }
    return 0;
}