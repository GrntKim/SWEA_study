#include <iostream>
#include <iterator>
#include <list>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for (int t = 1; t <= 10; t++) {
        int len; cin >> len;
        list<int> code;
        for (int i = 0; i < len; i++) {
            int x; cin >> x;
            code.push_back(x);
        }
        int cmd_cnt; cin >> cmd_cnt;
        for (int i = 0; i < cmd_cnt; i++) {
            char skip; cin >> skip;
            int x, y; cin >> x >> y;
            list<int>::iterator it = code.begin();
            advance(it, x);
            for (int i = 0; i < y; i++) {
                int s; cin >> s;
                code.insert(it, s);
            }
        }
        cout << '#' << t << ' ';
        list<int>::iterator it = code.begin();
        for (int i = 0; i < 10; i++) {
            cout << *it << ' ';
            advance(it, 1);
        }
        cout << '\n';
    }
    return 0;
}
