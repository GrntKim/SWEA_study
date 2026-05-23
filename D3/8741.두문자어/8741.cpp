#include <iostream>
#include <cctype>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    cin.ignore();
    for(int t=1; t<=T; t++) {
        string ans = "";
        string s; getline(cin, s);
        bool in_word = false;
        for(const char& ch : s) {
            if(ch == ' ') {
                in_word = false;
            } else {
                if(!in_word) {
                    in_word = true;
                    ans += toupper(ch);
                }
            }
        }
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}