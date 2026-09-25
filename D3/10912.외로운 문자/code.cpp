#include <iostream>
#include <set>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        set<char> s;
        string str; cin >> str;
        for (const char& c : str) {
            if (s.find(c) != s.end()) s.erase(c);
            else s.insert(c);
        }
        cout << '#' << t << ' ';
        if (s.size() == 0) cout << "Good\n";
        else {
            for (const char& c : s) cout << c;
            cout << '\n';
        }
    }
    return 0;
}
