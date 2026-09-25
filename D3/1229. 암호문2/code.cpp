#include <iostream>
#include <list>
#include <iterator>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for (int t = 1; t <= 10; t++) {
        int n; cin >> n;
        list<int> code;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            code.push_back(x);
        }
        int k; cin >> k;
        for (int i = 0; i < k; i++) {
            char cmd; cin >> cmd;
            if (cmd == 'I') {
                int x, y; cin >> x >> y;
                auto it = next(code.begin(), x);
                for (int j = 0; j < y; j++) {
                    int s; cin >> s;
                    code.insert(it, s);
                }
            } else if (cmd == 'D') {
                int x, y; cin >> x >> y;
                auto it = next(code.begin(), x);
                for (int j = 0; j < y; j++) {
                    it = code.erase(it);
                }
            }
        }
        cout << '#' << t << ' ';
        int cnt = 0;
        for (const auto& x : code) {
            if (cnt >= 10) break;
            cout << x << ' ';
            cnt++;
        }
        cout << '\n';
    }
    return 0;
}
