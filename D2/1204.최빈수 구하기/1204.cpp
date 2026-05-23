#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        int tc; cin >> tc;
        map<int, int> m;
        for(int i=0; i<1000; i++) {
            int score; cin >> score;
            m[score]++;
        }
        auto it = max_element(m.rbegin(), m.rend(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });
        cout << '#' << tc << ' ' << it->first << '\n';
    }
    return 0;
}