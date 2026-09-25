#include <iostream>
#include <list>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        string s; cin >> s;
        list<char> l(s.begin(), s.end());
        int h; cin >> h;
        int cnt[25] = {0,};
        for (int i = 0; i < h; i++) {
            int loc; cin >> loc;
            int off = loc;
            for (int j = 0; j <= loc; j++) off += cnt[j];
            cnt[loc]++;
            l.insert(next(l.begin(), off), '-');
        }
        cout << '#' << t << ' ';
        for (const char& c : l) cout << c;
        cout << '\n';
    }
    return 0;
}
