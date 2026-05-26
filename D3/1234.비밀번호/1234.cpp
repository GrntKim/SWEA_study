#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    for(int t=1; t<=10; t++) {
        int len; string code; cin >> len >> code;
        vector<char> v;
        for(const char& ch : code) {
            if(v.empty()) v.push_back(ch);
            else {
                if(v.back() == ch) v.pop_back();
                else v.push_back(ch);
            }
        }
        cout << '#' << t << ' ';
        for(const char& ch : v) cout << ch;
        cout << '\n';
    }
    return 0;
}