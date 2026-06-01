#include <iostream>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        int ans = 0;
        string s; cin >> s;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            switch (s[i]) {
                case '(':
                    break;
                case ')':
                    if (i >= 1) 
                        if(s[i-1] == '(' || s[i-1] != ')')
                            ans++;
                    break;
                default:
                    if (i >= 1 && s[i-1] == '(')
                        ans++;
                    break;
            }
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}