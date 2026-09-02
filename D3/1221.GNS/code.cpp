#include <iostream>
#include <algorithm>

using namespace std;

const string code[] = {"ZRO", "ONE", "TWO", "THR", "FOR", "FIV", "SIX", "SVN", "EGT", "NIN"};

int idx(const string& s) {
    return find(begin(code), end(code), s) - begin(code);
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        string tc; int n;
        cin >> tc >> n;


        int cnt[10] = {0};
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            cnt[idx(s)]++;
        }

        cout << tc << '\n';
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < cnt[i]; j++) cout << code[i] << ' ';
        cout << '\n';
    }
    return 0;
}
