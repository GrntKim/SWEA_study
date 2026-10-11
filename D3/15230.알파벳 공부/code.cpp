#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        string input; cin >> input;
        int cnt = 0;
        char prev = '\0';
        for (const char& ch : input) {
            if ((cnt == 0 && ch != 'a') || 
                (prev && ch - prev != 1)) break;
            cnt++;
            prev = ch;
        }
        cout << '#' << t << ' ' << cnt << '\n';
    }
    return 0;
}
