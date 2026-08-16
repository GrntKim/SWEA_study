#include <iostream>
#include <set>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for (int t = 1; t <= 10; t++) {
        int dcnt; cin >> dcnt;
        multiset<int> s;
        for (int i = 0; i < 100; i++) {
            int h; cin >> h;
            s.insert(h);
        }
        for (int i = 0; i < dcnt; i++) {
            int cur_min = *s.begin();
            int cur_max = *s.rbegin();
            s.erase(s.begin());
            s.erase(prev(s.end()));
            s.insert(cur_min+1);
            s.insert(cur_max-1);
        }
        cout << '#' << t << ' ' << (*s.rbegin() - *s.begin()) << '\n';
    }
    return 0;
}
