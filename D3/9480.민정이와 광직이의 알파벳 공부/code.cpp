#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

string words[20];
int alpha[26];
int ans, n;
set<char> alpha_check;

void dfs(int idx) {
    if (idx == n) {
        if (alpha_check.size() == 26) ans++;
        return;
    }

    for (const char& ch : words[idx]) {
        alpha[ch-'a']++;
        alpha_check.insert(ch);
    }
    dfs(idx+1);
    for (const char& ch : words[idx]) {
        alpha[ch-'a']--;
        if(!alpha[ch-'a']) alpha_check.erase(ch);
    }

    dfs(idx+1);

}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    freopen("input.txt", "r", stdin);
    int T; cin >> T; 
    for (int t = 1; t <= T; t++) {
        ans = 0;
        cin >> n;
        alpha_check.clear();
        fill(alpha, alpha+26, 0);
        for (int i = 0; i < n; i++) cin >> words[i];

        dfs(0);

        cout << '#' << t << ' ' << ans << '\n';
    }
    return 0;
}
