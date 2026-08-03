#include <iostream>
#include <set>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        string s; cin >> s;
        set<char> freq;
        set<char> kind;
        for (const char& c : s) {
            if (kind.find(c) == kind.end()) {
                kind.insert(c);
                freq.insert(c);
            } else {
                freq.erase(c);
            }
        }
        cout << '#' << t << ' ' << ((freq.size() == 0 && kind.size() == 2) ? "Yes" : "No") << '\n';
    }
    return 0;
}
