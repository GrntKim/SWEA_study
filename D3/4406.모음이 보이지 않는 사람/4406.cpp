#include <iostream>
#include <set>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        set<char> s = {'a', 'e', 'i', 'o', 'u'};
        string input; cin >> input;
        string ans = "";
        for (const auto& ch : input)
            if (s.find(ch) == s.end()) 
                ans += ch;
        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}