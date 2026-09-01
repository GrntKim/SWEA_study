#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int lose_cnt = 0;
        string result; cin >> result;
        int len = result.length();
        for (int i = 0; i < len; i++) {
            if (result[i] == 'x') lose_cnt++;
        }
        cout << '#' << t << ' ' << (lose_cnt >= 8 ? "NO" : "YES") << '\n';
    }
    return 0;
}
