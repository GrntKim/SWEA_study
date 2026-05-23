#include <iostream>
#include <set>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for(int t=1; t<=T; t++) {
        set<char> s;
        string input; cin >> input;
        for(const auto& ch : input) 
            s.insert(ch);
        cout << '#' << t << ' ' << s.size() << '\n';
    }
    return 0;
}