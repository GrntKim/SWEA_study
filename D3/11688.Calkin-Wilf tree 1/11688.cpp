#include <iostream>

using namespace std;

#define ll long long

pair<ll, ll> iterate(const string& s, ll idx, ll a, ll b) {
    if (idx >= s.length()) return {a, b};
    else if (s[idx] == 'L') return iterate(s, idx+1, a, a+b);
    else if (s[idx] == 'R') return iterate(s, idx+1, a+b, b);
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        string s; cin >> s;
        auto [x, y] = iterate(s, 0, 1, 1);
        cout << '#' << t << ' ' << x << ' ' << y << '\n';
    }
    return 0;
}