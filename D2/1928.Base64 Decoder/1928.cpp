#include <iostream>
#include <string>
using namespace std;

int mapping(char c) {
    if (c >= 'A' && c <= 'Z') return c - 'A';
    if (c >= 'a' && c <= 'z') return c - 'a' + 26;
    if (c >= '0' && c <= '9') return c - '0' + 52;
    if (c == '+') return 62;
    if (c == '/') return 63;
    return 0;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("input.txt", "r", stdin);

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        string s, res = "";
        cin >> s;
        cout << '#' << t << ' ';

        string buffer = "";
        for (int i = 0; i < s.length(); i += 4) {
            int chunk = (mapping(s[i])<<18) | 
                        (mapping(s[i+1])<<12) |
                        (mapping(s[i+2])<<6) |
                        mapping(s[i+3]);

            char x = (chunk >> 16) & 0xFF;
            char y = (chunk >> 8) & 0xFF;
            char z = chunk & 0xFF;

            cout << x << y << z;
        }
        cout << '\n';
    }
    return 0;
}