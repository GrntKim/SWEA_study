#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        string s; cin >> s;
        reverse(s.begin(), s.end());
        for(char &ch: s) {
            if(ch == 'p') ch = 'q';
            else if (ch == 'q') ch = 'p';
            else if (ch == 'b') ch = 'd';
            else if (ch == 'd') ch = 'b';
        }
        cout << '#' << t << ' ' << s << '\n';
    }
    return 0;
}