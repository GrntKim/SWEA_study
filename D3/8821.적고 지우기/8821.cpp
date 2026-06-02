#include <iostream>
#include <unordered_set>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        string s; cin >> s;
        unordered_set<char> st;
        for (const char& num : s) {
            if (st.find(num) == st.end()) 
                st.insert(num);
            else 
                st.erase(num);
        }
        cout << '#' << t << ' ' << st.size() << '\n';
    }
    return 0;
}